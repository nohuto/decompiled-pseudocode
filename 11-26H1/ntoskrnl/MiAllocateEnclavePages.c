/*
 * XREFs of MiAllocateEnclavePages @ 0x14033995C
 * Callers:
 *     MiAllocateEnclavePagesForMdl @ 0x14033A2B4 (MiAllocateEnclavePagesForMdl.c)
 *     MiGetPageForEnclave @ 0x140343950 (MiGetPageForEnclave.c)
 *     MiReserveEnclavePages @ 0x140343DD0 (MiReserveEnclavePages.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140704D20 (MiPrepareEnclaveMetadataPage.c)
 *     MiCreateHardwareEnclave @ 0x14087C4D4 (MiCreateHardwareEnclave.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertPageChainHead @ 0x14033C0E0 (MiInsertPageChainHead.c)
 *     MiReturnEnclavePage @ 0x140343FC4 (MiReturnEnclavePage.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiAllocateEnclavePages(__int64 a1, int a2, int a3, __int64 a4, _OWORD *a5)
{
  _OWORD *v5; // r13
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned int *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned __int8 CurrentIrql; // bp
  __int64 result; // rax
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 i; // r8
  unsigned int *v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+80h] [rbp+8h]
  int v20; // [rsp+88h] [rbp+10h] BYREF
  int v21; // [rsp+90h] [rbp+18h]
  __int64 v22; // [rsp+98h] [rbp+20h]

  v22 = a4;
  v21 = a3;
  v19 = a1;
  v5 = a5;
  v6 = (unsigned __int16)KeNumberNodes;
  v7 = (unsigned int)(unsigned __int16)KeNumberNodes * a2;
  v8 = a4;
  *a5 = 0LL;
  *((_QWORD *)v5 + 2) = 0LL;
  v9 = (unsigned int *)(qword_140E2D810 + 4 * v7);
  if ( (a3 & 2) != 0 )
    v10 = 1LL;
  else
    v10 = v6;
  v18 = &v9[v10];
  v11 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  do
  {
    if ( v11 == v8 )
      break;
    v14 = *(_QWORD *)(v19 + 16) + 56320LL * *v9;
    while ( 1 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 56160));
      v15 = *(_QWORD *)(v14 + 56128);
      if ( v15 == 0x3FFFFFFFFFLL )
        break;
      v16 = 48 * v15 - 0x220000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        goto LABEL_20;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 56160));
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 56160));
      if ( *(_QWORD *)(v14 + 56128) == v15 )
      {
LABEL_20:
        MiSimpleUnlinkPageEx(v14 + 56128, v15);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 56160));
        *(_DWORD *)(v16 + 32) &= ~0x10000000u;
        MiInsertPageChainHead(v5, 48 * v15 - 0x220000000000LL);
        ++v11;
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 56160));
      }
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v8 = v22;
      if ( v11 == v22 )
        goto LABEL_22;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 56160));
LABEL_22:
    ++v9;
  }
  while ( v9 != v18 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v11 != v8 && (v21 & 1) != 0 )
  {
    result = MiUnlinkPageChainHead(v5);
    for ( i = result; result; i = result )
    {
      MiReturnEnclavePage((i + 0x220000000000LL) / 48);
      result = MiUnlinkPageChainHead(v5);
    }
  }
  return result;
}
