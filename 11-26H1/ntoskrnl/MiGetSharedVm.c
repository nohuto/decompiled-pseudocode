/*
 * XREFs of MiGetSharedVm @ 0x140441D90
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 *     MiRemoveVadCharges @ 0x140A02094 (MiRemoveVadCharges.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140ABF810 (MmInitializeHandBuiltProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140AF4064 (MiCleanEmbryonicProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiGetSharedVm(__int64 a1)
{
  __int64 *result; // rax

  result = (__int64 *)(a1 + 192);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    return &qword_140E37980;
  return result;
}
