/*
 * XREFs of RtlIsValidLocaleName @ 0x180001D40
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x180002AF0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180038AA0 (RtlGetUserPreferredUILanguages.c)
 *     RtlUnicodeStringToLcid @ 0x1801148C4 (RtlUnicodeStringToLcid.c)
 * Callees:
 *     RtlpIsCustomLocale @ 0x180001008 (RtlpIsCustomLocale.c)
 *     RtlpNlsGetNameIndex @ 0x180004930 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180004A18 (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x180113878 (RtlpGetCustomCultureData.c)
 */

char __fastcall RtlIsValidLocaleName(wchar_t *String, int a2)
{
  char v2; // di
  int NameIndex; // eax

  v2 = a2;
  if ( !String || (a2 & 0xFFFFFFFD) != 0 || !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData() )
    return 0;
  NameIndex = RtlpNlsGetNameIndex(String);
  if ( NameIndex < 0 )
  {
    if ( !RtlpIsCustomLocale(String) || (v2 & 2) == 0 && (int)RtlpGetCustomCultureData(String, 0LL, 0LL, 0LL) < 0 )
      return 0;
  }
  else if ( (v2 & 2) == 0 )
  {
    _mm_lfence();
    if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                   * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
                   + *(_QWORD *)(pTblPtrs + 8)
                   + 24LL) & 1) == 0 )
      return 0;
  }
  return 1;
}
