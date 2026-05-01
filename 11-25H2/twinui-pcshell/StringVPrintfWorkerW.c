/*
 * XREFs of StringVPrintfWorkerW @ 0x1801D375C
 * Callers:
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1801D3710 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x180447DFC (-StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x1802D3068 (_vsnwprintf.c)
 */

HRESULT __stdcall StringVPrintfWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_LPCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rdi
  HRESULT v7; // ebx
  int v8; // eax

  v5 = cchDest - 1;
  v7 = 0;
  v8 = vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v8 < 0 || v8 > v5 )
  {
    pszDest[v5] = 0;
    return -2147024774;
  }
  else if ( v8 == v5 )
  {
    pszDest[v5] = 0;
  }
  return v7;
}
