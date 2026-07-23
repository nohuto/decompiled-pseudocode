/*
 * XREFs of RtlpQueryEafPlusModuleList @ 0x1800CFA78
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x1800A2AE0 (RtlQueryImageMitigationPolicy.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800D1480 (RtlQueryImageFileKeyOption.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryEafPlusModuleList(HANDLE KeyHandle, void *a2)
{
  unsigned int v3; // esi
  int ImageFileKeyOption; // eax

  memset_thunk_772440563353939046(a2, 0, 0x400uLL);
  v3 = 0;
  ImageFileKeyOption = RtlQueryImageFileKeyOption(KeyHandle, (wchar_t *)L"EAFModules", 1024, 0LL);
  if ( ImageFileKeyOption >= 0 )
    return 0LL;
  if ( ImageFileKeyOption != -1073741772 )
    return (unsigned int)ImageFileKeyOption;
  return v3;
}
