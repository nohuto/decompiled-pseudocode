/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140B7E540
 * Callers:
 *     <none>
 * Callees:
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1403DF5C0 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive(struct _ERESOURCE *a1)
{
  if ( pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive )
    return (PVOID)guard_dispatch_icall_no_overrides(a1);
  else
    return ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(a1);
}
