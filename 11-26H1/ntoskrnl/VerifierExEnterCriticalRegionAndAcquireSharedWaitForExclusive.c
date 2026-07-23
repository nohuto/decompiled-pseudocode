/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140C32BC0
 * Callers:
 *     <none>
 * Callees:
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14042D7A0 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive(struct _ERESOURCE *a1, __int64 a2)
{
  if ( pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive )
    return (PVOID)guard_dispatch_icall_no_overrides((__int64)a1, a2);
  else
    return ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(a1);
}
