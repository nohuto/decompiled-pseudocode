/*
 * XREFs of RtlAllocateHeap_0 @ 0x180070300
 * Callers:
 *     CompatCacheLookupPackage @ 0x180058EBC (CompatCacheLookupPackage.c)
 *     CompatCachepGetPackageAlias @ 0x180059220 (CompatCachepGetPackageAlias.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall RtlAllocateHeap_0(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  return RtlAllocateHeap(HeapHandle, Flags, Size);
}
