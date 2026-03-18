/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x14033C7D0
 * Callers:
 *     MiZeroLargePage @ 0x1402A1A04 (MiZeroLargePage.c)
 *     MmProtectMdlSystemAddress @ 0x14030FA10 (MmProtectMdlSystemAddress.c)
 *     MiMapMdlCommon @ 0x140312C2C (MiMapMdlCommon.c)
 *     MiCopySinglePage @ 0x14033B248 (MiCopySinglePage.c)
 *     MiReplacePageTablePage @ 0x14033C35C (MiReplacePageTablePage.c)
 *     MiFillSystemPtes @ 0x14035F448 (MiFillSystemPtes.c)
 *     MiValidateInPageEntries @ 0x14038C410 (MiValidateInPageEntries.c)
 *     MiScrubPage @ 0x140413AE4 (MiScrubPage.c)
 *     MiReplacePageOfProtoPool @ 0x14044B400 (MiReplacePageOfProtoPool.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140480C40 (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x14048DA98 (MiInitializeNewUltraHugeContext.c)
 *     MiMapMemoryDumpMdl @ 0x1404C370C (MiMapMemoryDumpMdl.c)
 *     MiMapMdlWithLargePages @ 0x140502900 (MiMapMdlWithLargePages.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiInitializeSlowPte @ 0x1406F74D4 (MiInitializeSlowPte.c)
 *     MiDbgLockPage @ 0x1406FE238 (MiDbgLockPage.c)
 *     MiAcquireScrubProtection @ 0x14070BC8C (MiAcquireScrubProtection.c)
 *     MiCopyMemoryPagefileData @ 0x14070C8A0 (MiCopyMemoryPagefileData.c)
 *     MiRelocateImagePfn @ 0x1409CEA4C (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140B04B5C (MiValidateImagePfn.c)
 *     MiProtectSharedUserPage @ 0x140CF3E10 (MiProtectSharedUserPage.c)
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
