/*
 * XREFs of MiInitializeFlushPacket @ 0x14038EAB4
 * Callers:
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiInitializeFlushPacket(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  _DWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  struct _KTHREAD *CurrentThread; // r9
  int IoPriorityThread; // eax
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // r9
  __int64 PoolMm; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 *v21; // r8
  __int64 v22; // rdx

  memset_0((void *)a1, 0, 0x58uLL);
  v9 = (_DWORD *)(a1 + 80);
  if ( (a4 & 2) != 0 )
    *v9 = 1;
  if ( (a4 & 0x10) != 0 )
    *v9 |= 2u;
  if ( (a4 & 8) != 0 )
    *v9 |= 8u;
  if ( a3 )
  {
    a4 |= 4u;
    *(_QWORD *)(a1 + 56) = a3;
  }
  v10 = 0LL;
  if ( (a4 & 4) == 0 )
    goto LABEL_10;
  v16 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v16) = v16 | 0x80000000;
  PoolMm = ExAllocatePoolMm(64LL, 2560LL, 1632005453LL, v16);
  v10 = PoolMm;
  if ( a3 )
  {
    if ( !PoolMm )
    {
      result = 3221225626LL;
      *a5 = -1073741670;
      return result;
    }
    *(_QWORD *)(a3 + 40) = PoolMm;
    goto LABEL_21;
  }
  if ( PoolMm )
  {
LABEL_21:
    v18 = PoolMm + 49;
    v19 = 8LL;
    v20 = PoolMm + 56;
    v21 = (__int64 *)(PoolMm + 2112);
    v22 = PoolMm + 48;
    do
    {
      *(_WORD *)(v18 - 1) = 0;
      *(_BYTE *)(v18 + 1) = 6;
      *(_DWORD *)(v18 + 3) = 0;
      *(_QWORD *)(v18 + 15) = v20;
      v20 += 264LL;
      *(_QWORD *)(v18 + 7) = v18 + 7;
      *(_QWORD *)(v18 + 23) = v22 + 32;
      *(_QWORD *)(v18 - 9) = a3;
      *(_QWORD *)(v18 - 17) = a2;
      v18 += 264LL;
      *v21 = v22;
      v22 += 264LL;
      ++v21;
      --v19;
    }
    while ( v19 );
  }
LABEL_10:
  v11 = MiReferenceControlAreaFileWithTag(a2, 1666411853LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 16) = v11;
  *(_QWORD *)(a1 + 72) = a5;
  *(_QWORD *)(a1 + 24) = v10;
  IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
  *(_DWORD *)(a1 + 40) = IoPriorityThread;
  if ( IoPriorityThread < 2
    && (*(_DWORD *)(v14 + 116) & 0x400) == 0
    && *(_BYTE *)(v14 + 562) != 1
    && KeGetCurrentThread()[1].TrapFrame != (_KTRAP_FRAME *)2 )
  {
    *(_DWORD *)(a1 + 40) = 2;
  }
  if ( a4 < 0 )
    *(_DWORD *)(a1 + 80) |= 4u;
  *(_DWORD *)(a1 + 80) |= 0x40u;
  return 0LL;
}
