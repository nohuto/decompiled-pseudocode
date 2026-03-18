/*
 * XREFs of ExUpdateLicenseData @ 0x140B415E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 */

__int64 ExUpdateLicenseData()
{
  unsigned int *v0; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v2; // r9d

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( *(_QWORD *)&ExpPlatformBinaryLock.ReservedPreviousReadyTimeValue )
    return guard_dispatch_icall_no_overrides((__int64)Blink, v2);
  else
    return SLUpdateLicenseDataInternal((__int64)Blink, v2, v0);
}
