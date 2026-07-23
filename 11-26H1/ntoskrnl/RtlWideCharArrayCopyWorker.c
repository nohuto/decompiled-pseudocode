/*
 * XREFs of RtlWideCharArrayCopyWorker @ 0x1405EF1E0
 * Callers:
 *     RtlUnicodeStringCopy @ 0x14042FE80 (RtlUnicodeStringCopy.c)
 *     CmpDoWritethroughReparse @ 0x1408C77A0 (CmpDoWritethroughReparse.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlWideCharArrayCopyWorker(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        const wchar_t *pszSrc,
        size_t cchSrcLength)
{
  NTSTATUS v5; // r10d
  size_t v8; // r11
  signed __int64 v9; // rcx
  NTSTATUS result; // eax

  v5 = 0;
  v8 = 0LL;
  if ( cchDest )
  {
    v9 = (char *)pszDest - (char *)pszSrc;
    while ( cchSrcLength )
    {
      --cchSrcLength;
      *(const wchar_t *)((char *)pszSrc + v9) = *pszSrc;
      ++v8;
      ++pszSrc;
      if ( !--cchDest )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( cchSrcLength )
      v5 = -2147483643;
  }
  result = v5;
  *pcchNewDestLength = v8;
  return result;
}
