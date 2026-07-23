/*
 * XREFs of StringCchPrintfW @ 0x1404A5DE0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildGuidString @ 0x140896028 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x140896150 (AdtpBuildHexInt64String.c)
 *     PfVerifyScenarioBuffer @ 0x140987380 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x140A94678 (AdtpBuildMessageString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A9EBA0 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildIPv4Strings @ 0x140AA98AC (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140AA9A04 (AdtpBuildIPv6Strings.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     _vsnwprintf @ 0x140537830 (_vsnwprintf.c)
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
