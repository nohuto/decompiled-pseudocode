/*
 * XREFs of LdrpGetParentLangId @ 0x180002608
 * Callers:
 *     LdrResFallbackLangList @ 0x1800094E0 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlGetParentLocaleName @ 0x1800036A0 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x1800045B0 (RtlLocaleNameToLcid.c)
 *     RtlLcidToLocaleName @ 0x180005EB0 (RtlLcidToLocaleName.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetParentLangId(unsigned __int16 a1, _WORD *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  wchar_t *v4; // rsi
  unsigned int ParentLocaleName; // ebx
  wchar_t *v7[2]; // [rsp+28h] [rbp-41h]
  wchar_t *String[2]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v9[32]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v10[32]; // [rsp+70h] [rbp+7h] BYREF

  *(_OWORD *)v7 = 0LL;
  *(_OWORD *)String = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v2 = a1;
  *a2 = 0;
  String[1] = (wchar_t *)v10;
  WORD1(String[0]) = 30;
  v3 = RtlLcidToLocaleName(a1, String, 2LL);
  if ( v3 >= 0
    || v3 == -1073741789 && (String[1] = 0LL, WORD1(String[0]) = 0, (int)RtlLcidToLocaleName(v2, String, 2LL) >= 0) )
  {
    v4 = String[1];
    v7[1] = (wchar_t *)v9;
    ParentLocaleName = RtlGetParentLocaleName(String[1]);
    if ( ParentLocaleName == -1073741789 )
    {
      v7[1] = 0LL;
      ParentLocaleName = RtlGetParentLocaleName(v4);
    }
  }
  else
  {
    v4 = String[1];
    ParentLocaleName = -1073741811;
  }
  if ( (_BYTE *)v7[1] != v9 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v7[1]);
  if ( v4 != (wchar_t *)v10 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v4);
  return ParentLocaleName;
}
