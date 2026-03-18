/*
 * XREFs of MiMakeSubsectionPte @ 0x1404B5EF8
 * Callers:
 *     MiPurgeSubsection @ 0x140422170 (MiPurgeSubsection.c)
 *     MiMakeGlobalSubsectionPte @ 0x1404B5EA4 (MiMakeGlobalSubsectionPte.c)
 *     MiInitializeNewPfns @ 0x1406E6548 (MiInitializeNewPfns.c)
 *     MiFillFileOnlyProtoAsBad @ 0x1406F9DB0 (MiFillFileOnlyProtoAsBad.c)
 *     MiInitializePrototypePtes @ 0x1409B8000 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x140A551FC (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x140A55708 (MiParseImageSectionHeaders.c)
 *     MiAllocatePerSessionProtos @ 0x140B11CA8 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402D0130 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(*(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFC0000000000C1FuLL | (16
                                                                                    * (*(_DWORD *)(a1 + 32) & 0x3E | 0x40LL)) | ((a1 - qword_140E37B90 + 8) << 9) & 0x3FFFFFFFFFF000LL);
}
