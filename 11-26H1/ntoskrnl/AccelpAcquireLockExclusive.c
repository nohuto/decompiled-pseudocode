/*
 * XREFs of AccelpAcquireLockExclusive @ 0x14084ADCC
 * Callers:
 *     AccelpGetCopyBuffer @ 0x1406DF5C0 (AccelpGetCopyBuffer.c)
 * Callees:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1402751C0 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 */

PVOID __fastcall AccelpAcquireLockExclusive(struct _ERESOURCE *a1)
{
  return ExEnterCriticalRegionAndAcquireResourceExclusive(a1);
}
