/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x1406DCFA4
 * Callers:
 *     LdrpGetParentLangId @ 0x1404ED6B0 (LdrpGetParentLangId.c)
 *     RtlCultureNameToLCID @ 0x14077CEE0 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x140807F90 (RtlLoadString.c)
 *     LdrResSearchResource @ 0x1409E5F50 (LdrResSearchResource.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CF20A8 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1404FA54C (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x140538DA0 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_14000DFE0, 0x1B3uLL, 8uLL, (int (__cdecl *)(const void *, const void *))CompareLangName)) != 0LL
    && ((v4 = &(&off_140002450)[2 * word_14003AF20[(v3 - (_BYTE *)&off_14000DFE0) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
