/*
 * XREFs of CmpFindValueByName @ 0x140AAFFF0
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x140852334 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x1408524A8 (CmpMarkCurrentValueDirty.c)
 *     CmpFindControlSet @ 0x14086542C (CmpFindControlSet.c)
 *     CmpPreserveSystemHiveData @ 0x140865978 (CmpPreserveSystemHiveData.c)
 *     CmQueryMultipleValueKey @ 0x140940B3C (CmQueryMultipleValueKey.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CF20A8 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140CF26DC (CmpGetSystemControlValues.c)
 *     CmpAddDriverToList @ 0x140CF493C (CmpAddDriverToList.c)
 *     CmpFindTagIndex @ 0x140CF5804 (CmpFindTagIndex.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140CF5C1C (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140CF5DD8 (CmpIsLoadType.c)
 *     CmpSortDriverList @ 0x140CF65C4 (CmpSortDriverList.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 */

__int64 __fastcall CmpFindValueByName(ULONG_PTR a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v4) = 0;
  CmpFindNameInListWithStatus(a1, (unsigned int *)(a2 + 36), a3, 0, 0LL, &v4);
  return (unsigned int)v4;
}
