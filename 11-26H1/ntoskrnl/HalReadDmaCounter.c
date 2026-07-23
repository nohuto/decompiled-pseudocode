/*
 * XREFs of HalReadDmaCounter @ 0x14057BFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG __stdcall HalReadDmaCounter(PDMA_ADAPTER DmaAdapter)
{
  __int64 v1; // rdx

  return guard_dispatch_icall_no_overrides(DmaAdapter, v1);
}
