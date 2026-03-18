/*
 * XREFs of HalReadDmaCounter @ 0x140579A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG __stdcall HalReadDmaCounter(PDMA_ADAPTER DmaAdapter)
{
  __int64 v1; // rdx

  return guard_dispatch_icall_no_overrides(DmaAdapter, v1);
}
