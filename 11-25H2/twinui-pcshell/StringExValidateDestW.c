/*
 * XREFs of StringExValidateDestW @ 0x1802CB1CC
 * Callers:
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800B5720 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x1801D55C4 (-StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringExValidateDestW(STRSAFE_PCNZWCH pszDest, size_t cchDest, const size_t cchMax, DWORD dwFlags)
{
  HRESULT result; // eax

  result = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      return -2147024809;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    return -2147024809;
  }
  return result;
}
