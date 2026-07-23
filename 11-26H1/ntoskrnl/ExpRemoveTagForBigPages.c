/*
 * XREFs of ExpRemoveTagForBigPages @ 0x14029A3C0
 * Callers:
 *     ExpSizeHeapPool @ 0x1404FDF40 (ExpSizeHeapPool.c)
 *     ExQueryPoolBlockSize @ 0x1406CFFC0 (ExQueryPoolBlockSize.c)
 *     ExpCleanupBigTag @ 0x1406D00B0 (ExpCleanupBigTag.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpRemoveTagForBigPages(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        _DWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        ULONG_PTR *a7)
{
  unsigned int v9; // esi
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  int v14; // r10d
  unsigned int v15; // edx
  char *v16; // rax
  unsigned int v17; // r8d
  ULONG_PTR v18; // rdx
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v9 = BugCheckParameter3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(BugCheckParameter3) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, BugCheckParameter3);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&ExpLargePoolTableLock);
    v12 = ExpLargePoolTableLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v12 + 1, v12);
      if ( v13 == v12 )
        break;
      if ( v12 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
  }
  v14 = 1;
  v15 = (PoolBigPageTableSize - 1) & ((40543 * (BugCheckParameter2 >> 12)) ^ ((40543 * (BugCheckParameter2 >> 12)) >> 32));
  while ( 1 )
  {
    v16 = (char *)PoolBigPageTable + 32 * v15;
    if ( *(_QWORD *)v16 == BugCheckParameter2 )
      break;
    if ( ++v15 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v14 )
        goto LABEL_14;
      v15 = 0;
      v14 = 0;
    }
  }
  if ( !v16 )
LABEL_14:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v9, 0LL);
  v17 = *((_DWORD *)v16 + 3);
  *a4 = *((_DWORD *)v16 + 2);
  *a5 = (v17 >> 8) & 0xFFF;
  *a6 = *((_QWORD *)v16 + 2);
  if ( (v17 & 0x100) != 0 )
    v18 = BugCheckParameter2 ^ (__int64)stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink ^ *((_QWORD *)v16 + 3);
  else
    v18 = -1LL;
  *a7 = v18;
  if ( a3 )
  {
    _InterlockedDecrement(&ExpPoolBigEntriesInUse);
    *((_QWORD *)v16 + 3) = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v16);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpLargePoolTableLock);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
