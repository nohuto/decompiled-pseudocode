/*
 * XREFs of CmpFindValueByName @ 0x140AB231C
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x14084C024 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x14084C198 (CmpMarkCurrentValueDirty.c)
 *     CmpFindControlSet @ 0x14085F13C (CmpFindControlSet.c)
 *     CmpPreserveSystemHiveData @ 0x14085F688 (CmpPreserveSystemHiveData.c)
 *     CmQueryMultipleValueKey @ 0x14097EB2C (CmQueryMultipleValueKey.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CEBDA4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140CEC3D8 (CmpGetSystemControlValues.c)
 *     CmpAddDriverToList @ 0x140CEE5C0 (CmpAddDriverToList.c)
 *     CmpFindTagIndex @ 0x140CEF488 (CmpFindTagIndex.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140CEF8A0 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140CEFA5C (CmpIsLoadType.c)
 *     CmpSortDriverList @ 0x140CF024C (CmpSortDriverList.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1408D5200 (CmpFindNameInListWithStatus.c)
 */

__int64 __fastcall CmpFindValueByName(ULONG_PTR a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v4) = 0;
  CmpFindNameInListWithStatus(a1, (unsigned int *)(a2 + 36), a3, 0, 0LL, &v4);
  return (unsigned int)v4;
}
