/*
 * XREFs of RtlpIsCustomLocale @ 0x18004C740
 * Callers:
 *     RtlIsValidLocaleName @ 0x18004D470 (RtlIsValidLocaleName.c)
 *     RtlGetParentLocaleName @ 0x18004EDD0 (RtlGetParentLocaleName.c)
 *     RtlGetNeutralFallback @ 0x18004F8A0 (RtlGetNeutralFallback.c)
 *     RtlLocaleNameToLcid @ 0x18004FCE0 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 * Callees:
 *     RtlpGetCustomCultureRegKey @ 0x18004C810 (RtlpGetCustomCultureRegKey.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

bool __fastcall RtlpIsCustomLocale(wchar_t *String)
{
  void *CustomCultureRegKey; // rdi
  size_t v3; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-A8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE KeyValueInformation[120]; // [rsp+48h] [rbp-90h] BYREF

  ResultLength = 0;
  CustomCultureRegKey = (void *)RtlpGetCustomCultureRegKey();
  if ( !CustomCultureRegKey || !*String )
    return 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ValueName.Buffer = String;
  v3 = 2 * wcslen(String);
  if ( v3 >= 0xFFFE )
    LOWORD(v3) = -4;
  ValueName.Length = v3;
  ValueName.MaximumLength = v3 + 2;
  return NtQueryValueKey(
           CustomCultureRegKey,
           &ValueName,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x78u,
           &ResultLength) >= 0;
}
