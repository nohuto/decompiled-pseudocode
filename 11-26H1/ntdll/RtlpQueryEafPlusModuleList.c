/*
 * XREFs of RtlpQueryEafPlusModuleList @ 0x1800D2D5C
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x1800A39B0 (RtlQueryImageMitigationPolicy.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800D3070 (RtlQueryImageFileKeyOption.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryEafPlusModuleList(__int64 a1, void *a2)
{
  unsigned int v4; // esi
  int ImageFileKeyOption; // eax

  memset_thunk_772440563353939046(a2, 0, 0x400uLL);
  v4 = 0;
  ImageFileKeyOption = RtlQueryImageFileKeyOption(a1, L"EAFModules", 1LL, a2, 1024, 0LL);
  if ( ImageFileKeyOption >= 0 )
    return 0LL;
  if ( ImageFileKeyOption != -1073741772 )
    return (unsigned int)ImageFileKeyOption;
  return v4;
}
