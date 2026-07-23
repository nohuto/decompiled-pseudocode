/*
 * XREFs of IoFreeMapRegisters @ 0x14057C120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoFreeMapRegisters(PDMA_ADAPTER DmaAdapter, PVOID MapRegisterBase, ULONG NumberOfMapRegisters)
{
  guard_dispatch_icall_no_overrides(DmaAdapter, MapRegisterBase);
}
