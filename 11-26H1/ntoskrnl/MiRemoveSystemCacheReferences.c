/*
 * XREFs of MiRemoveSystemCacheReferences @ 0x14036F210
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402C4A60 (MmMapViewInSystemCache.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveViewsFromSection @ 0x14036F4F0 (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveSystemCacheReferences(__int64 *BugCheckParameter2)
{
  __int64 v1; // rbp
  __int64 v3; // r14
  KIRQL v4; // bl
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 result; // rax

  v1 = *BugCheckParameter2;
  v3 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*BugCheckParameter2 + 60) & 0x3FF));
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v5 = MiRemoveViewsFromSection((ULONG_PTR)BugCheckParameter2);
  --*(_QWORD *)(v1 + 40);
  LOBYTE(v6) = v4;
  --*(_DWORD *)(v1 + 88);
  v7 = v5;
  result = MiCheckControlArea(v1, v6);
  if ( v7 )
    return MiReturnCrossPartitionSectionCharges(v3, 1LL, v7);
  return result;
}
