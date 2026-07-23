/*
 * XREFs of AccelpAcquireLockExclusive @ 0x1408510DC
 * Callers:
 *     AccelpGetCopyBuffer @ 0x1406E3840 (AccelpGetCopyBuffer.c)
 * Callees:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140274730 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 */

PVOID __fastcall AccelpAcquireLockExclusive(struct _ERESOURCE *a1)
{
  return ExEnterCriticalRegionAndAcquireResourceExclusive(a1);
}
