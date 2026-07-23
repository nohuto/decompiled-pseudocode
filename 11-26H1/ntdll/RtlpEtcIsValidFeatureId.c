/*
 * XREFs of RtlpEtcIsValidFeatureId @ 0x180148708
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x180148410 (RtlIsFeatureEnabledForEnterprise.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1800435E0 (RtlStringCchPrintfW.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x180148684 (RtlpEtcGetDwordFromRegistry.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

bool __fastcall RtlpEtcIsValidFeatureId(unsigned int a1, int a2)
{
  char v4; // di
  int v6; // [rsp+20h] [rbp-1A8h]
  _DWORD v7[4]; // [rsp+30h] [rbp-198h] BYREF
  wchar_t v8[32]; // [rsp+40h] [rbp-188h] BYREF
  wchar_t v9[152]; // [rsp+80h] [rbp-148h] BYREF

  v4 = 0;
  v7[0] = 0;
  memset_thunk_772440563353939046(v9, 0, 0x12CuLL);
  memset_thunk_772440563353939046(v8, 0, 0x40uLL);
  v6 = a2;
  if ( (int)RtlStringCchPrintfW(
              v9,
              150LL,
              L"%s\\%lu",
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\FeatureManagement\\EnterpriseTempControls",
              v6) >= 0
    && (int)RtlStringCchPrintfW(v8, 32LL, L"%lu", a1) >= 0
    && (int)RtlpEtcGetDwordFromRegistry(v9, (__int64)v8, (__int64)v7) >= 0 )
  {
    return v7[0] != 0;
  }
  return v4;
}
