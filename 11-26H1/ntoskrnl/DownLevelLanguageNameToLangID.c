/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x1406D8E14
 * Callers:
 *     LdrpGetParentLangId @ 0x1404F40D0 (LdrpGetParentLangId.c)
 *     RtlCultureNameToLCID @ 0x140779FB0 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1408024F0 (RtlLoadString.c)
 *     LdrResSearchResource @ 0x140A9AF20 (LdrResSearchResource.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CEBDA4 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140500D5C (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x140536920 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_14000DD30, 0x1B3uLL, 8uLL, (int (__cdecl *)(const void *, const void *))CompareLangName)) != 0LL
    && ((v4 = &(&off_140002460)[2 * word_14003A950[(v3 - (_BYTE *)&off_14000DD30) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
