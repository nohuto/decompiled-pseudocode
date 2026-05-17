/*
 * XREFs of RtlpIsCustomLocale @ 0x180001008
 * Callers:
 *     RtlIsValidLocaleName @ 0x180001D40 (RtlIsValidLocaleName.c)
 *     RtlGetParentLocaleName @ 0x1800036A0 (RtlGetParentLocaleName.c)
 *     RtlGetNeutralFallback @ 0x180004170 (RtlGetNeutralFallback.c)
 *     RtlLocaleNameToLcid @ 0x1800045B0 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 * Callees:
 *     RtlpGetCustomCultureRegKey @ 0x1800010D8 (RtlpGetCustomCultureRegKey.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

bool __fastcall RtlpIsCustomLocale(wchar_t *String)
{
  __int64 CustomCultureRegKey; // rdi
  size_t v3; // rax
  int v5; // [rsp+30h] [rbp-A8h] BYREF
  _WORD v6[2]; // [rsp+38h] [rbp-A0h] BYREF
  int v7; // [rsp+3Ch] [rbp-9Ch]
  wchar_t *v8; // [rsp+40h] [rbp-98h]
  _BYTE v9[120]; // [rsp+48h] [rbp-90h] BYREF

  v5 = 0;
  CustomCultureRegKey = RtlpGetCustomCultureRegKey();
  if ( !CustomCultureRegKey || !*String )
    return 0;
  v7 = 0;
  v8 = String;
  v3 = 2 * wcslen(String);
  if ( v3 >= 0xFFFE )
    LOWORD(v3) = -4;
  v6[0] = v3;
  v6[1] = v3 + 2;
  return (int)NtQueryValueKey(CustomCultureRegKey, v6, 2LL, v9, 120, &v5) >= 0;
}
