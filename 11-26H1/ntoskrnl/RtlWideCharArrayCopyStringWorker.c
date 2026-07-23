/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x140427940
 * Callers:
 *     RtlUnicodeStringCatString @ 0x1404278C8 (RtlUnicodeStringCatString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlWideCharArrayCopyStringWorker(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  NTSTATUS result; // eax
  __int64 v6; // r10
  size_t v7; // r11
  signed __int64 v8; // rcx

  result = 0;
  v6 = 0x7FFFLL;
  v7 = 0LL;
  if ( cchDest )
  {
    v8 = (char *)pszDest - (char *)pszSrc;
    while ( v6 )
    {
      if ( *pszSrc )
      {
        *(NTSTRSAFE_PCWSTR)((char *)pszSrc + v8) = *pszSrc;
        --v6;
        ++pszSrc;
        ++v7;
        if ( --cchDest )
          continue;
      }
      if ( cchDest || !v6 )
        break;
      goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    if ( *pszSrc )
      result = -2147483643;
  }
  *pcchNewDestLength = v7;
  return result;
}
