/*
 * XREFs of MiGetHugeRange @ 0x1406F0520
 * Callers:
 *     MmAllocateMemoryRanges @ 0x14086E160 (MmAllocateMemoryRanges.c)
 *     MiPartitionTransferAllocateHugeRange @ 0x140882D00 (MiPartitionTransferAllocateHugeRange.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiAssignDefaultChannel @ 0x140283900 (MiAssignDefaultChannel.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiSnapPageMoveInProgress @ 0x1403D24D0 (MiSnapPageMoveInProgress.c)
 *     MiWaitForPageMoveComplete @ 0x1403D2500 (MiWaitForPageMoveComplete.c)
 *     MiInitializeGetPageChannels @ 0x14042E490 (MiInitializeGetPageChannels.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetBestHugeRangeFromNode @ 0x1406F0244 (MiGetBestHugeRangeFromNode.c)
 *     MiHugePageOperation @ 0x140709E08 (MiHugePageOperation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetHugeRange(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int8 v8; // r12
  int v9; // edx
  int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  __int64 v14; // r8
  _QWORD *BestHugeRangeFromNode; // r15
  __int64 v16; // rbx
  unsigned int v17; // esi
  int v18; // edx
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v20; // al
  int v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  int v25; // [rsp+38h] [rbp-50h] BYREF
  __int16 v26; // [rsp+3Ch] [rbp-4Ch]

  v24 = a1;
  v25 = 0;
  v26 = 0;
  v4 = a2;
  MiInitializeGetPageChannels((char *)&v25, 0LL, a2, a3);
  v23 = *(_QWORD *)(a1 + 16) + 56320LL * ((v4 >> 9) & 0x3F);
  v6 = v23;
  MiInitializeGetPageChannels((char *)&v25, v23, v4, a3);
  v22 = 0;
  while ( *(_DWORD *)&stru_140E2ED08.WaitBlockFill11[32] )
    KeYieldProcessorEx(&v22);
  v7 = MiSnapPageMoveInProgress(v6, 4);
  v8 = BYTE2(v25);
  v10 = v9 - 3;
LABEL_5:
  v11 = v7;
  v12 = v6;
  while ( 1 )
  {
    BestHugeRangeFromNode = (_QWORD *)MiGetBestHugeRangeFromNode(v12, v4, a3);
    if ( BestHugeRangeFromNode )
      break;
    v8 += v10;
    BYTE2(v25) = v8;
    if ( v8 >= HIBYTE(v25) )
    {
      v20 = v26;
      if ( (_BYTE)v26 == 2 )
        v20 = MiAssignDefaultChannel((v4 >> 9) & 0x3F);
      v4 ^= ((unsigned __int16)v4 ^ (unsigned __int16)(v20 << 8)) & 0x100;
      v6 = v23;
      v7 = MiWaitForPageMoveComplete(v23, 4);
      if ( ((v11 ^ v7) & 0xFFFFFFFFFFFF0000uLL) == 0 )
        return 0LL;
      goto LABEL_5;
    }
    v13 = *((_BYTE *)&v25 + v8);
    if ( v13 == 2 )
      v13 = MiAssignDefaultChannel((v4 >> 9) & 0x3F);
    v12 = v23;
    v4 ^= ((unsigned __int16)v4 ^ (unsigned __int16)(v13 << 8)) & 0x100;
  }
  v16 = (((__int64)BestHugeRangeFromNode - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
  if ( (a3 & 0x20) != 0 && (*(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v16) & 0x10000LL) != 0 )
  {
    v17 = v10 & a3;
    MiHugePageOperation(v24, v16 << 18, v14, v17, v22);
    if ( v17 )
    {
      CurrentIrql = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v18) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v18);
      }
    }
    MiLockHugePfnAtDpc((__int64)BestHugeRangeFromNode);
    *BestHugeRangeFromNode &= ~0x10000uLL;
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                + 4
                                * (((((__int64)BestHugeRangeFromNode - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(v10 << (((__int64)BestHugeRangeFromNode - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  return v16;
}
