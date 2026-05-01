/*
 * XREFs of RtlFreeHeap_0 @ 0x18007030C
 * Callers:
 *     CompatCacheLookupPackage @ 0x180058EBC (CompatCacheLookupPackage.c)
 *     CompatCachepGetPackageAlias @ 0x180059220 (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall RtlFreeHeap_0(HANDLE HeapHandle, ULONG Flags, PVOID P)
{
  return RtlFreeHeap(HeapHandle, Flags, P);
}
