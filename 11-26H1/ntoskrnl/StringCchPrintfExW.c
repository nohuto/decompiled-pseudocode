/*
 * XREFs of StringCchPrintfExW @ 0x14071A480
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14071A02C (AdtpBuildStagingReasonAuditStringInternal.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x1404463B0 (StringExHandleOtherFlagsW.c)
 *     _vsnwprintf @ 0x140537830 (_vsnwprintf.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

HRESULT StringCchPrintfExW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        STRSAFE_LPWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        DWORD dwFlags,
        STRSAFE_LPCWSTR pszFormat,
        ...)
{
  HRESULT v8; // ebx
  const wchar_t *v9; // r8
  STRSAFE_LPWSTR v10; // r13
  size_t v11; // r15
  size_t v12; // rsi
  int v13; // eax
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t v16[2]; // [rsp+38h] [rbp-10h] BYREF
  size_t *v18; // [rsp+A8h] [rbp+60h]
  va_list Args; // [rsp+C0h] [rbp+78h] BYREF

  va_start(Args, pszFormat);
  v18 = pcchRemaining;
  v8 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v8 = -2147024809;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v8 = -2147024809;
  }
  if ( v8 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
    return v8;
  }
  v9 = pszFormat;
  v10 = pszDest;
  ppszDestEnda = pszDest;
  v11 = cchDest;
  v16[0] = cchDest;
  if ( (dwFlags & 0x100) != 0 && !pszFormat )
    v9 = &cchOriginalDestLength;
  v8 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v8 = -2147024809;
    if ( cchDest )
      *pszDest = 0;
    goto LABEL_15;
  }
  if ( cchDest )
  {
    v16[0] = 0LL;
    v12 = cchDest - 1;
    v13 = vsnwprintf(pszDest, cchDest - 1, v9, Args);
    if ( v13 < 0 || v13 > v12 )
    {
      v8 = -2147024774;
    }
    else if ( v13 != v12 )
    {
      v12 = v13;
      goto LABEL_33;
    }
    pszDest[v12] = 0;
LABEL_33:
    v11 = cchDest - v12;
    v10 = &pszDest[v12];
    ppszDestEnda = v10;
    v16[0] = cchDest - v12;
    if ( v8 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
        memset_0(v10 + 1, (unsigned __int8)dwFlags, 2 * v11 - 2);
      goto LABEL_19;
    }
    goto LABEL_15;
  }
  if ( !*v9 )
    goto LABEL_20;
  v8 = pszDest != 0LL ? -2147024774 : -2147024809;
LABEL_15:
  if ( (dwFlags & 0x1C00) != 0 && cchDest )
  {
    StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)v9, &ppszDestEnda, v16, dwFlags);
    v10 = ppszDestEnda;
    v11 = v16[0];
  }
  if ( v8 == -2147024774 )
  {
LABEL_19:
    pcchRemaining = v18;
LABEL_20:
    if ( ppszDestEnd )
      *ppszDestEnd = v10;
    if ( pcchRemaining )
      *pcchRemaining = v11;
  }
  return v8;
}
