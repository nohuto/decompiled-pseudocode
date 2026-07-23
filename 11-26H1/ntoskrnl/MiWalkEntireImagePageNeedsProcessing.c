/*
 * XREFs of MiWalkEntireImagePageNeedsProcessing @ 0x140B61CD0
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiWalkImageMakePageHot @ 0x14070A330 (MiWalkImageMakePageHot.c)
 * Callees:
 *     MiDoesPageRequireImportLinkingFixups @ 0x14047A764 (MiDoesPageRequireImportLinkingFixups.c)
 *     MiPageHasRelocations @ 0x1409A0720 (MiPageHasRelocations.c)
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
