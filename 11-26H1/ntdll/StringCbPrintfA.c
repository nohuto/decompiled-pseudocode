/*
 * XREFs of StringCbPrintfA @ 0x18011EF2C
 * Callers:
 *     LdrpLogDbgPrint @ 0x18011EE2C (LdrpLogDbgPrint.c)
 * Callees:
 *     _vsnprintf @ 0x180128AA0 (_vsnprintf.c)
 */

HRESULT StringCbPrintfA(STRSAFE_LPSTR pszDest, size_t cbDest, STRSAFE_LPCSTR pszFormat, ...)
{
  HRESULT v4; // ebx
  size_t v5; // rdi
  int v6; // eax
  va_list ArgList; // [rsp+68h] [rbp+20h] BYREF

  va_start(ArgList, pszFormat);
  if ( cbDest - 1 <= 0x7FFFFFFE )
  {
    v5 = cbDest - 1;
    v4 = 0;
    v6 = vsnprintf(pszDest, cbDest - 1, pszFormat, ArgList);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147024774;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  else
  {
    v4 = -2147024809;
    if ( cbDest )
      *pszDest = 0;
  }
  return v4;
}
