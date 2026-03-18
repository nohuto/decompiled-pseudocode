/*
 * XREFs of MiWalkEntireImagePageNeedsProcessing @ 0x140B5EB50
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiWalkImageMakePageHot @ 0x140705660 (MiWalkImageMakePageHot.c)
 * Callees:
 *     MiDoesPageRequireImportLinkingFixups @ 0x140480DF4 (MiDoesPageRequireImportLinkingFixups.c)
 *     MiPageHasRelocations @ 0x1409CF740 (MiPageHasRelocations.c)
 */

__int64 __fastcall MiWalkEntireImagePageNeedsProcessing(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v5; // edi

  if ( (a3 & 8) != 0 )
    return 1LL;
  v5 = 0;
  if ( (a3 & 0x40) != 0 )
  {
    if ( (unsigned int)MiPageHasRelocations(*(__int64 **)(a1 + 32), a2, 1) )
      return 1LL;
  }
  if ( a3 >= 0 )
    return 0LL;
  LOBYTE(v5) = (unsigned int)MiDoesPageRequireImportLinkingFixups(a1) != 0;
  return v5;
}
