/*
 * XREFs of DownLevelLangIDToLanguageName @ 0x1404EF488
 * Callers:
 *     PnpGetDeviceInterfacePropertyData @ 0x1409DA6C4 (PnpGetDeviceInterfacePropertyData.c)
 *     PnpGetDevicePropertyData @ 0x140A98540 (PnpGetDevicePropertyData.c)
 *     LdrResSearchResource @ 0x140A9AF20 (LdrResSearchResource.c)
 *     ExpSetPendingUILanguage @ 0x140B1E260 (ExpSetPendingUILanguage.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140B2F500 (PnpGetDeviceInstancePropertyData.c)
 *     RtlLCIDToCultureName @ 0x140B5CEE0 (RtlLCIDToCultureName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CEBDA4 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140500D5C (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1405056D0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x140536920 (bsearch.c)
 */

__int64 __fastcall DownLevelLangIDToLanguageName(__int16 a1, unsigned __int16 *a2, int a3, int a4)
{
  unsigned __int64 v4; // rsi
  char v5; // bl
  const struct CultureDataType *v7; // rcx
  const unsigned __int16 *v9; // r8
  __int64 v10; // rax
  unsigned int v11; // r11d
  __int16 Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v4 = a3;
  v5 = a4;
  if ( !a2 && a3 )
    return 0LL;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 0LL;
  v7 = (const struct CultureDataType *)bsearch(
                                         &Key,
                                         &off_140002460,
                                         0x1B4uLL,
                                         0x10uLL,
                                         (int (__cdecl *)(const void *, const void *))CompareLangIDs);
  if ( !v7 || (v5 & 2) == 0 && (unsigned int)IsNeutralLanguageItem(v7) )
    return 0LL;
  v9 = *(const unsigned __int16 **)v7;
  v10 = -1LL;
  do
    ++v10;
  while ( v9[v10] );
  v11 = v10 + 1;
  if ( a2 && (int)StringCchCopyNW(a2, v4, v9, v10 + 1) < 0 )
    return 0LL;
  else
    return v11;
}
