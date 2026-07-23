/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x14033E850
 * Callers:
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MmProtectMdlSystemAddress @ 0x1402F1A90 (MmProtectMdlSystemAddress.c)
 *     MiMapMdlCommon @ 0x140314C5C (MiMapMdlCommon.c)
 *     MiCopySinglePage @ 0x14033D2C8 (MiCopySinglePage.c)
 *     MiReplacePageTablePage @ 0x14033E3DC (MiReplacePageTablePage.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiValidateInPageEntries @ 0x14038E1C0 (MiValidateInPageEntries.c)
 *     MiScrubPage @ 0x140408114 (MiScrubPage.c)
 *     MiReplacePageOfProtoPool @ 0x140443530 (MiReplacePageOfProtoPool.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14047A5B0 (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x1404875D8 (MiInitializeNewUltraHugeContext.c)
 *     MiMapMemoryDumpMdl @ 0x1404BCF5C (MiMapMemoryDumpMdl.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiInitializeSlowPte @ 0x1406FC144 (MiInitializeSlowPte.c)
 *     MiDbgLockPage @ 0x140702F08 (MiDbgLockPage.c)
 *     MiAcquireScrubProtection @ 0x14071093C (MiAcquireScrubProtection.c)
 *     MiCopyMemoryPagefileData @ 0x140711550 (MiCopyMemoryPagefileData.c)
 *     MiRelocateImagePfn @ 0x14099FA2C (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140B0676C (MiValidateImagePfn.c)
 *     MiProtectSharedUserPage @ 0x140CFA190 (MiProtectSharedUserPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionPfnCompatible(char a1, __int64 a2)
{
  unsigned int v2; // ecx

  v2 = a1 & 7;
  if ( (*(_DWORD *)(a2 + 32) & 0xC00000) == 0 )
    return v2 | 8;
  if ( (*(_DWORD *)(a2 + 32) & 0xC00000) == 0x800000 )
    v2 |= 0x18u;
  return v2;
}
