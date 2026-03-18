/*
 * XREFs of CmpValueToData @ 0x140860380
 * Callers:
 *     CmpFindControlSet @ 0x14085F13C (CmpFindControlSet.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CEBDA4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpAddDriverToList @ 0x140CEE5C0 (CmpAddDriverToList.c)
 *     CmpFindTagIndex @ 0x140CEF488 (CmpFindTagIndex.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140CEF8A0 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140CEFA5C (CmpIsLoadType.c)
 *     CmpSortDriverList @ 0x140CF024C (CmpSortDriverList.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CmpGetValueData @ 0x1409803F0 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
