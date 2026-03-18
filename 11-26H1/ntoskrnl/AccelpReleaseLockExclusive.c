/*
 * XREFs of AccelpReleaseLockExclusive @ 0x14084AE10
 * Callers:
 *     AccelpGetCopyBuffer @ 0x1406DF5C0 (AccelpGetCopyBuffer.c)
 * Callees:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402B8340 (ExReleaseResourceAndLeaveCriticalRegion.c)
 */

void __fastcall AccelpReleaseLockExclusive(struct _ERESOURCE *a1)
{
  ExReleaseResourceAndLeaveCriticalRegion(a1);
}
