/*
 * XREFs of MiUpdateVadStartVpn @ 0x140494C34
 * Callers:
 *     MiUnmapViewOfSectionPrepare @ 0x1409950D0 (MiUnmapViewOfSectionPrepare.c)
 *     MiInitializeDataVad @ 0x140996B10 (MiInitializeDataVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiInitializeImageVad @ 0x14099ED2C (MiInitializeImageVad.c)
 *     MiReserveUserMemoryInsertVad @ 0x140A0146C (MiReserveUserMemoryInsertVad.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateVad @ 0x140A02E80 (MiAllocateVad.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140A4F8B0 (MiFindEmptyAddressRangeDownTree.c)
 *     MiAllocateEnclaveVad @ 0x140B6C330 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdateVadStartVpn(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 32) = BYTE4(a2);
}
