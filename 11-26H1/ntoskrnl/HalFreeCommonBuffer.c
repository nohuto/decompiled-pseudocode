/*
 * XREFs of HalFreeCommonBuffer @ 0x14057BF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall HalFreeCommonBuffer(
        PDMA_ADAPTER DmaAdapter,
        ULONG Length,
        PHYSICAL_ADDRESS LogicalAddress,
        PVOID VirtualAddress,
        BOOLEAN CacheEnabled)
{
  guard_dispatch_icall_no_overrides(DmaAdapter, *(_QWORD *)&Length);
}
