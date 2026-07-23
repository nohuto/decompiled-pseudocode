/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x14083E230
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 ExUpdateOsPfnInRegistry()
{
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v1; // r10d
  unsigned int v2; // r11d

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( ExpPlatformBinaryLock.AbWaitObject )
    return (unsigned int)guard_dispatch_icall_no_overrides((__int64)Blink, v2);
  return v1;
}
