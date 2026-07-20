/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x140013228
 * Callers:
 *     RtlUnicodeStringCat @ 0x140013090 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x140013168 (RtlUnicodeStringCatString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x140013290 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS result; // eax
  __int64 v8; // rcx
  unsigned __int64 *v9; // r9
  unsigned __int16 *v10; // r10
  unsigned __int64 *v11; // r11

  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( pcchDestLength )
    *pcchDestLength = 0LL;
  result = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)ppszDest, (ULONG)pcchDest);
  if ( result >= 0 && v10 )
  {
    *ppszDest = *(wchar_t **)(v8 + 8);
    *v11 = (unsigned __int64)v10[1] >> 1;
    if ( v9 )
      *v9 = (unsigned __int64)*v10 >> 1;
  }
  return result;
}
