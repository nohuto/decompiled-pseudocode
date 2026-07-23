/*
 * XREFs of RtlLocaleNameToLcid @ 0x18004FCE0
 * Callers:
 *     LdrpGetParentLangId @ 0x18004DD38 (LdrpGetParentLangId.c)
 *     RtlLoadString @ 0x1800A9FC0 (RtlLoadString.c)
 * Callees:
 *     RtlpIsCustomLocale @ 0x18004C740 (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x18004C874 (RtlpMatchUserLanguage.c)
 *     RtlpNlsGetNameIndex @ 0x180050060 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180050148 (RtlpLoadNlsData.c)
 *     RtlpMatchUILanguage @ 0x180112884 (RtlpMatchUILanguage.c)
 *     RtlpGetCustomCultureData @ 0x180113110 (RtlpGetCustomCultureData.c)
 */

NTSTATUS __cdecl RtlLocaleNameToLcid(PCWSTR LocaleName, PLCID lcid, ULONG Flags)
{
  char v3; // si
  __int64 v6; // rbx
  int NameIndex; // eax

  v3 = Flags;
  if ( !LocaleName )
    return -1073741585;
  if ( !lcid )
    return -1073741584;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741583;
  v6 = pTblPtrs;
  if ( !pTblPtrs )
  {
    if ( !(unsigned __int8)RtlpLoadNlsData(LocaleName, lcid) )
      return -1073741823;
    v6 = pTblPtrs;
  }
  NameIndex = RtlpNlsGetNameIndex(LocaleName);
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
      *lcid = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
      return 0;
    }
    return -1073741585;
  }
  if ( !RtlpIsCustomLocale((wchar_t *)LocaleName) )
    return -1073741585;
  if ( (v3 & 1) != 0 && (unsigned __int8)RtlpMatchUILanguage(LocaleName) )
  {
    *lcid = 5120;
    return 0;
  }
  if ( !RtlpMatchUserLanguage((wchar_t *)LocaleName) )
  {
    if ( (v3 & 2) != 0 || (int)RtlpGetCustomCultureData(LocaleName, 0LL, 0LL, 0LL) >= 0 )
    {
      *lcid = 4096;
      return 0;
    }
    return -1073741823;
  }
  *lcid = 3072;
  return 0;
}
