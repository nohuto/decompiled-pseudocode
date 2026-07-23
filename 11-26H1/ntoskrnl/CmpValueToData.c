/*
 * XREFs of CmpValueToData @ 0x140866670
 * Callers:
 *     CmpFindControlSet @ 0x14086542C (CmpFindControlSet.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CF20A8 (CmSelectQualifiedInstallLanguage.c)
 *     CmpAddDriverToList @ 0x140CF493C (CmpAddDriverToList.c)
 *     CmpFindTagIndex @ 0x140CF5804 (CmpFindTagIndex.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140CF5C1C (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140CF5DD8 (CmpIsLoadType.c)
 *     CmpSortDriverList @ 0x140CF65C4 (CmpSortDriverList.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpGetValueData @ 0x140942400 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PVOID __fastcall CmpValueToData(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  _BYTE v8[8]; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF

  P[0] = 0LL;
  v8[0] = 0;
  if ( !(unsigned __int8)CmpGetValueData(BugCheckParameter3, (__int64)P, (__int64)v8, a5) )
    return 0LL;
  if ( v8[0] == 1 )
  {
    ExFreePoolWithTag(P[0], 0);
    KeBugCheckEx(0x51u, 8uLL, 0LL, BugCheckParameter3, a3);
  }
  return P[0];
}
