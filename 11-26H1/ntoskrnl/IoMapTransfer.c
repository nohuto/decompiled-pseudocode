/*
 * XREFs of IoMapTransfer @ 0x140579C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

PHYSICAL_ADDRESS __stdcall IoMapTransfer(
        PDMA_ADAPTER DmaAdapter,
        PMDL Mdl,
        PVOID MapRegisterBase,
        PVOID CurrentVa,
        PULONG Length,
        BOOLEAN WriteToDevice)
{
  return (PHYSICAL_ADDRESS)guard_dispatch_icall_no_overrides(DmaAdapter, Mdl);
}
