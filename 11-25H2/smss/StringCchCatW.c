/*
 * XREFs of StringCchCatW @ 0x14001B394
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x14001ADC0 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     StringCopyWorkerW @ 0x14001B458 (StringCopyWorkerW.c)
 */

HRESULT __stdcall StringCchCatW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  size_t v5; // r9
  STRSAFE_LPWSTR v6; // rax
  HRESULT v7; // edx
  size_t v8; // r8
  size_t v10; // [rsp+20h] [rbp-18h]

  if ( cchDest - 1 > 0x7FFFFFFE )
    return -2147024809;
  v5 = cchDest;
  v6 = pszDest;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v7 = v5 == 0 ? 0x80070057 : 0;
  if ( v5 )
  {
    v8 = (cchDest - v5) & -(__int64)(v5 != 0);
    return StringCopyWorkerW(&pszDest[v8], cchDest - v8, (size_t *)v8, pszSrc, v10);
  }
  return v7;
}
