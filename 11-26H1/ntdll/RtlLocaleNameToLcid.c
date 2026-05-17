/*
 * XREFs of RtlLocaleNameToLcid @ 0x1800045B0
 * Callers:
 *     LdrpGetParentLangId @ 0x180002608 (LdrpGetParentLangId.c)
 *     RtlLoadString @ 0x1800AAE90 (RtlLoadString.c)
 * Callees:
 *     RtlpIsCustomLocale @ 0x180001008 (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x18000113C (RtlpMatchUserLanguage.c)
 *     RtlpNlsGetNameIndex @ 0x180004930 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180004A18 (RtlpLoadNlsData.c)
 *     RtlpMatchUILanguage @ 0x180112DD4 (RtlpMatchUILanguage.c)
 *     RtlpGetCustomCultureData @ 0x180113878 (RtlpGetCustomCultureData.c)
 */

__int64 __fastcall RtlLocaleNameToLcid(wchar_t *String, int *a2, int a3)
{
  char v3; // si
  __int64 v6; // rbx
  int NameIndex; // eax

  v3 = a3;
  if ( !String )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225713LL;
  v6 = pTblPtrs;
  if ( !pTblPtrs )
  {
    if ( !(unsigned __int8)RtlpLoadNlsData(String, a2) )
      return 3221225473LL;
    v6 = pTblPtrs;
  }
  NameIndex = RtlpNlsGetNameIndex(String);
  if ( NameIndex >= 0 )
  {
    if ( (v3 & 2) != 0
      || (_mm_lfence(),
          v6 = pTblPtrs,
          (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                    * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
                    + *(_QWORD *)(pTblPtrs + 8)
                    + 24LL) & 1) != 0) )
    {
      *a2 = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
      return 0LL;
    }
    return 3221225711LL;
  }
  if ( !RtlpIsCustomLocale(String) )
    return 3221225711LL;
  if ( (v3 & 1) != 0 && (unsigned __int8)RtlpMatchUILanguage(String) )
  {
    *a2 = 5120;
    return 0LL;
  }
  if ( !RtlpMatchUserLanguage(String) )
  {
    if ( (v3 & 2) != 0 || (int)RtlpGetCustomCultureData(String, 0LL, 0LL, 0LL) >= 0 )
    {
      *a2 = 4096;
      return 0LL;
    }
    return 3221225473LL;
  }
  *a2 = 3072;
  return 0LL;
}
