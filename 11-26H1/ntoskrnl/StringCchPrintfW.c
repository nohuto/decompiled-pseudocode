/*
 * XREFs of StringCchPrintfW @ 0x1404AC750
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14043282C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildGuidString @ 0x14088FC2C (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x14088FD54 (AdtpBuildHexInt64String.c)
 *     PfVerifyScenarioBuffer @ 0x1409B62C0 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x140A8FB20 (AdtpBuildMessageString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A9C030 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildIPv4Strings @ 0x140AAC2FC (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140AAC454 (AdtpBuildIPv6Strings.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     _vsnwprintf @ 0x1405353B0 (_vsnwprintf.c)
 */

HRESULT StringCchPrintfW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  size_t v4; // rsi
  HRESULT v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147024774;
    }
    else if ( v6 != v4 )
    {
      return v5;
    }
    pszDest[v4] = 0;
    return v5;
  }
  v5 = -2147024809;
  if ( cchDest )
    *pszDest = 0;
  return v5;
}
