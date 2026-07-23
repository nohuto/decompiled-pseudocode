/*
 * XREFs of RtlUnicodeStringExHandleOtherFlags @ 0x1405DB7E0
 * Callers:
 *     RtlUnicodeStringPrintfEx @ 0x1404D8620 (RtlUnicodeStringPrintfEx.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __stdcall RtlUnicodeStringExHandleOtherFlags(
        wchar_t *pszDest,
        size_t cchDest,
        size_t cchOriginalDestLength,
        size_t *pcchNewDestLength,
        wchar_t **ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  if ( (dwFlags & 0x1000) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = cchDest;
    *pcchNewDestLength = 0LL;
  }
  if ( (dwFlags & 0x400) != 0 )
  {
    memset_0(pszDest, (unsigned __int8)dwFlags, 2 * cchDest);
    *ppszDestEnd = pszDest;
    *pcchRemaining = cchDest;
    *pcchNewDestLength = 0LL;
  }
  if ( (dwFlags & 0x800) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = cchDest;
    *pcchNewDestLength = 0LL;
  }
  return 0;
}
