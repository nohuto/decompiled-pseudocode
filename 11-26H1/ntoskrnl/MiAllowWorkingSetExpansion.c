/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x1404D8040
 * Callers:
 *     MiInitializeSystemWorkingSetList @ 0x1408676D4 (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeProcessAddressSpace @ 0x1409622B0 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140963A54 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertHardLimitWorkingSet @ 0x1403BDD0C (MiInsertHardLimitWorkingSet.c)
 *     MiReturnWsToExpansionList @ 0x14047D620 (MiReturnWsToExpansionList.c)
 */

void __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  __int64 v2; // rsi
  volatile LONG *v3; // rdi
  int i; // r9d
  KIRQL v5; // r10
  int v6; // r9d

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL);
  v3 = (volatile LONG *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174)) + 21384LL);
  ExAcquireSpinLockExclusive(v3);
  for ( i = 0; i <= 1; i = v6 + 1 )
    MiReturnWsToExpansionList(a1, i);
  if ( v2 )
  {
    *(_BYTE *)(a1 + 184) = *(_DWORD *)(a1 + 184) | 0x10;
    MiInsertHardLimitWorkingSet(a1);
  }
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockExclusive(v3, v5);
}
