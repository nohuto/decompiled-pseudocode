/*
 * XREFs of RtlIsValidLocaleName @ 0x18004D470
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180023010 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18004E220 (RtlGetSystemPreferredUILanguages.c)
 *     RtlUnicodeStringToLcid @ 0x1801140C0 (RtlUnicodeStringToLcid.c)
 * Callees:
 *     RtlpIsCustomLocale @ 0x18004C740 (RtlpIsCustomLocale.c)
 *     RtlpNlsGetNameIndex @ 0x180050060 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180050148 (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x180113110 (RtlpGetCustomCultureData.c)
 */

BOOLEAN __cdecl RtlIsValidLocaleName(PCWSTR LocaleName, ULONG Flags)
{
  char v2; // di
  int NameIndex; // eax

  v2 = Flags;
  if ( !LocaleName || (Flags & 0xFFFFFFFD) != 0 || !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData() )
    return 0;
  NameIndex = RtlpNlsGetNameIndex(LocaleName);
  if ( NameIndex < 0 )
  {
    if ( !RtlpIsCustomLocale((wchar_t *)LocaleName)
      || (v2 & 2) == 0 && (int)RtlpGetCustomCultureData(LocaleName, 0LL, 0LL, 0LL) < 0 )
    {
      return 0;
    }
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
