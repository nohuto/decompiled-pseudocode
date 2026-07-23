/*
 * XREFs of ExUpdateLicenseData @ 0x140B435F0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 */

__int64 ExUpdateLicenseData()
{
  unsigned int *v0; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v2; // r9d

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( ExpPlatformBinaryLock.UserWaitTime )
    return guard_dispatch_icall_no_overrides((__int64)Blink, v2);
  else
    return SLUpdateLicenseDataInternal((__int64)Blink, v2, v0);
}
