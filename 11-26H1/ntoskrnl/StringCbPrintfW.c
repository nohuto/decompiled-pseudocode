/*
 * XREFs of StringCbPrintfW @ 0x14071EB7C
 * Callers:
 *     IopMountCompositeLayer @ 0x140D034D4 (IopMountCompositeLayer.c)
 * Callees:
 *     _vsnwprintf @ 0x1405353B0 (_vsnwprintf.c)
 */

HRESULT StringCbPrintfW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rdi
  HRESULT v6; // ebx
  int v7; // eax
  HRESULT result; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      pszDest[v5] = 0;
      return -2147024774;
    }
    else if ( v7 == v5 )
    {
      pszDest[v5] = 0;
    }
    return v6;
  }
  else
  {
    result = -2147024809;
    if ( v3 )
      *pszDest = 0;
  }
  return result;
}
