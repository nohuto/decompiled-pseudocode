/*
 * XREFs of IoFreeAdapterChannel @ 0x14057C100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  __int64 v1; // rdx

  guard_dispatch_icall_no_overrides(DmaAdapter, v1);
}
