/*
 * XREFs of MiUpdateVadStartVpn @ 0x14049B0E4
 * Callers:
 *     MiReserveUserMemoryInsertVad @ 0x14095BBAC (MiReserveUserMemoryInsertVad.c)
 *     MiMapViewOfPhysicalSection @ 0x14095C9CC (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateVad @ 0x14095D5C0 (MiAllocateVad.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409C40F0 (MiUnmapViewOfSectionPrepare.c)
 *     MiInitializeDataVad @ 0x1409C5B30 (MiInitializeDataVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409CA420 (MiAllocateNewSubAllocatedRegion.c)
 *     MiInitializeImageVad @ 0x1409CDD4C (MiInitializeImageVad.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140A34950 (MiFindEmptyAddressRangeDownTree.c)
 *     MiAllocateEnclaveVad @ 0x140B693A0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdateVadStartVpn(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 32) = BYTE4(a2);
}
