/*
 * XREFs of ExpInsertPoolTracker @ 0x14034CF24
 * Callers:
 *     ExpResizeBigPageTable @ 0x14029A9B8 (ExpResizeBigPageTable.c)
 *     ExInsertPoolTag @ 0x14034CE1C (ExInsertPoolTag.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403CA7E4 (ExpInsertPoolTrackerExpansion.c)
 *     ExInitializePoolTracker @ 0x140CEC048 (ExInitializePoolTracker.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpPoolTrackerChargeEntry @ 0x140399730 (ExpPoolTrackerChargeEntry.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403CA7E4 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x1403CAA34 (EtwTracePool.c)
 *     ExpPlFindLimitEntry @ 0x1404D05D0 (ExpPlFindLimitEntry.c)
 *     ExpPoolFlagsToPoolType @ 0x140C16F50 (ExpPoolFlagsToPoolType.c)
 */

__int64 __fastcall ExpInsertPoolTracker(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rax
  int StackBase; // r13d
  unsigned __int64 v10; // rbx
  char *StackLimit; // r9
  __int64 v12; // r10
  unsigned int v13; // r15d
  unsigned int v14; // r8d
  __int64 v15; // r14
  int v17; // ecx
  __int64 LimitEntry; // rax
  __int64 v19; // r11
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v24; // [rsp+90h] [rbp+40h] BYREF
  char *v25; // [rsp+A0h] [rbp+50h] BYREF

  v4 = a1;
  LODWORD(v22) = 0;
  LOBYTE(v24) = 0;
  LOBYTE(v25) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 == PoolHitTag )
    __debugbreak();
  v8 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v8 = ExpPoolFlagsToPoolType(a3, a3 & 0x10, (unsigned int)&v22, (unsigned int)&v24, (__int64)&v25);
    if ( (int)v8 >= 0 )
    {
      v21 = v22;
      if ( (_BYTE)v24 )
        v21 = v22 | 8;
      v8 = EtwTracePool(3616, v21, v4, a4, a2);
    }
  }
  LODWORD(v8) = KeGetPcr()->Prcb.Number;
  StackBase = (int)stru_140EFF2C0.StackBase;
  v10 = a3 & 0xFFFFFFFFFFFFFFFBuLL;
  StackLimit = (char *)stru_140EFF2C0.StackLimit;
  v12 = *(&stru_140EFF2C0.ThreadLock + v8);
  v22 = v12;
  v25 = (char *)stru_140EFF2C0.StackLimit;
  v13 = LODWORD(stru_140EFF2C0.StackBase) & ((40543 * v4) ^ ((unsigned __int64)(40543 * v4) >> 32));
  v14 = v13;
  v24 = v13;
  do
  {
    while ( 1 )
    {
      v15 = v12 + 80LL * v13;
      if ( *(_DWORD *)v15 == (_DWORD)v4 )
        return ExpPoolTrackerChargeEntry(((v10 >> 8) & 1) == 0, a2, v12 + 80LL * v13);
      if ( *(_DWORD *)v15 )
        break;
      v17 = *(_DWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * v13);
      if ( v17 )
      {
        *(_DWORD *)v15 = v17;
        v20 = *(_QWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * v13 + 72);
        if ( v20 )
          *(_QWORD *)(v15 + 72) = v20;
      }
      else
      {
        if ( (char *)v13 == StackLimit - 1 )
          break;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * v13) )
        {
          LimitEntry = ExpPlFindLimitEntry((unsigned int)v4);
          *(_QWORD *)(v19 + 80LL * v13 + 72) = LimitEntry;
          *(_QWORD *)(v15 + 72) = LimitEntry;
          *(_DWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * v13) = v4;
          *(_DWORD *)v15 = v4;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v14 = v24;
        StackLimit = v25;
        v12 = v22;
      }
    }
    v13 = StackBase & (v13 + 1);
  }
  while ( v13 != v14 );
  ExpInsertPoolTrackerExpansion((unsigned int)v4, a2, v10);
  return 1LL;
}
