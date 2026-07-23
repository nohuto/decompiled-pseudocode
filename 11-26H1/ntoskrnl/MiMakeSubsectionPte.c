/*
 * XREFs of MiMakeSubsectionPte @ 0x1404AF348
 * Callers:
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiMakeGlobalSubsectionPte @ 0x1404AF2F4 (MiMakeGlobalSubsectionPte.c)
 *     MiInitializeNewPfns @ 0x1406EB1F8 (MiInitializeNewPfns.c)
 *     MiFillFileOnlyProtoAsBad @ 0x1406FEA80 (MiFillFileOnlyProtoAsBad.c)
 *     MiInitializePrototypePtes @ 0x140988FE0 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x140A6279C (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x140A62CA8 (MiParseImageSectionHeaders.c)
 *     MiAllocatePerSessionProtos @ 0x140B13A28 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402B1EF0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(*(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFC0000000000C1FuLL | (16
                                                                                    * (*(_DWORD *)(a1 + 32) & 0x3E | 0x40LL)) | ((a1 - qword_140E37D10 + 8) << 9) & 0x3FFFFFFFFFF000LL);
}
