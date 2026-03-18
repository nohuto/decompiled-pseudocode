/*
 * XREFs of MiGetSharedVm @ 0x140449C60
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MiRemoveVadCharges @ 0x14095C7D4 (MiRemoveVadCharges.c)
 *     MmInitializeProcessAddressSpace @ 0x1409622B0 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140963A54 (MmInitializeHandBuiltProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140ABD3B0 (MmCreateProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140AF1424 (MiCleanEmbryonicProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x140B3F940 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiGetSharedVm(__int64 a1)
{
  __int64 *result; // rax

  result = (__int64 *)(a1 + 192);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    return &qword_140E37800;
  return result;
}
