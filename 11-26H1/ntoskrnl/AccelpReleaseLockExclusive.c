/*
 * XREFs of AccelpReleaseLockExclusive @ 0x140851120
 * Callers:
 *     AccelpGetCopyBuffer @ 0x1406E3840 (AccelpGetCopyBuffer.c)
 * Callees:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140303000 (ExReleaseResourceAndLeaveCriticalRegion.c)
 */

void __fastcall AccelpReleaseLockExclusive(struct _ERESOURCE *a1)
{
  ExReleaseResourceAndLeaveCriticalRegion(a1);
}
