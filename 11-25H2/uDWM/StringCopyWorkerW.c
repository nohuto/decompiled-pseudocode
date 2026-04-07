/*
 * XREFs of StringCopyWorkerW @ 0x18005A150
 * Callers:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18005A0C4 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  size_t v5; // r8
  __int64 v6; // rax
  signed __int64 v7; // r9
  wchar_t v8; // dx
  STRSAFE_LPWSTR v9; // rdx
  HRESULT result; // eax

  v5 = cchDest;
  if ( cchDest )
  {
    v6 = 2147483646LL;
    v7 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !v6 )
        break;
      v8 = *(STRSAFE_LPWSTR)((char *)pszDest + v7);
      if ( !v8 )
        break;
      *pszDest = v8;
      --v6;
      ++pszDest;
      --v5;
    }
    while ( v5 );
  }
  v9 = pszDest - 1;
  result = -2147024774;
  if ( v5 )
  {
    v9 = pszDest;
    result = 0;
  }
  *v9 = 0;
  return result;
}
