/*
 * XREFs of DownLevelLangIDToLanguageName @ 0x1404E8A68
 * Callers:
 *     LdrResSearchResource @ 0x1409E5F50 (LdrResSearchResource.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140A17914 (PnpGetDeviceInterfacePropertyData.c)
 *     PnpGetDevicePropertyData @ 0x140A9C6C0 (PnpGetDevicePropertyData.c)
 *     ExpSetPendingUILanguage @ 0x140B202E0 (ExpSetPendingUILanguage.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140B312E0 (PnpGetDeviceInstancePropertyData.c)
 *     RtlLCIDToCultureName @ 0x140B60060 (RtlLCIDToCultureName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CF20A8 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1404FA54C (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1404FEF80 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x140538DA0 (bsearch.c)
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
                                         &off_140002450,
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
