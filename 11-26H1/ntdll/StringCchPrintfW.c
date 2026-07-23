/*
 * XREFs of StringCchPrintfW @ 0x180066584
 * Callers:
 *     EtwpAddInstanceIdToLogFileName @ 0x180066468 (EtwpAddInstanceIdToLogFileName.c)
 * Callees:
 *     _vsnwprintf @ 0x180128B90 (_vsnwprintf.c)
 */

HRESULT StringCchPrintfW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  HRESULT v4; // edi
  size_t v5; // rsi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      v4 = -2147024774;
    }
    else if ( v6 != v5 )
    {
      return v4;
    }
    pszDest[v5] = 0;
  }
  else
  {
    v4 = -2147024809;
    if ( cchDest )
      *pszDest = 0;
  }
  return v4;
}
