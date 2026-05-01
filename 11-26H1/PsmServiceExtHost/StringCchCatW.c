/*
 * XREFs of StringCchCatW @ 0x18008D19C
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180058564 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     StringCopyWorkerW @ 0x180047830 (StringCopyWorkerW.c)
 */

HRESULT __stdcall StringCchCatW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  size_t v4; // r9
  STRSAFE_LPWSTR v5; // rax
  size_t v6; // r8
  HRESULT result; // eax
  size_t v8; // [rsp+20h] [rbp-18h]

  if ( cchDest - 1 > 0x7FFFFFFE )
    return -2147024809;
  v4 = cchDest;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
  {
    v6 = (cchDest - v4) & -(__int64)(v4 != 0);
    return StringCopyWorkerW(&pszDest[v6], cchDest - v6, (size_t *)v6, pszSrc, v8);
  }
  return result;
}
