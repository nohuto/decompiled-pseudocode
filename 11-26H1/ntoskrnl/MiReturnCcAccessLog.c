/*
 * XREFs of MiReturnCcAccessLog @ 0x1403C4304
 * Callers:
 *     MiPeriodicTrimWorkingSet @ 0x1403C3C80 (MiPeriodicTrimWorkingSet.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403C4144 (MiCheckAndProcessCcAccessLog.c)
 *     MiAgeTargetedWorkingSet @ 0x1404704B0 (MiAgeTargetedWorkingSet.c)
 *     MmPrefetchForCacheManager @ 0x140A59FA0 (MmPrefetchForCacheManager.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiQueuePageAccessLog @ 0x1403C4198 (MiQueuePageAccessLog.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnCcAccessLog(__int64 a1, __int64 a2, int a3)
{
  void *v4; // rcx

  if ( a3 )
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 24);
  if ( (*(_QWORD *)(a1 + 18112) || _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 18112), a2, 0LL))
    && a2 )
  {
    if ( *(_QWORD *)(a2 + 32) == a2 + 64 )
    {
      if ( !*(_DWORD *)(a2 + 8) )
      {
        v4 = *(void **)(a2 + 56);
        if ( (unsigned __int64)v4 > 1 )
          ObDereferenceObjectDeferDeleteWithTag(v4, 0x4C416D4Du);
      }
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    else
    {
      MiQueuePageAccessLog(a1, a2);
    }
  }
}
