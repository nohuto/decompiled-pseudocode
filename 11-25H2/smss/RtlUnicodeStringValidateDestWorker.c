/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1400135EC
 * Callers:
 *     RtlUnicodeStringCat @ 0x140013454 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x14001352C (RtlUnicodeStringCatString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x140013658 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  __int64 v8; // rcx
  unsigned __int64 *v9; // r9
  unsigned __int16 *v10; // r10
  int v11; // r11d

  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( pcchDestLength )
    *pcchDestLength = 0LL;
  v11 = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)ppszDest, (ULONG)pcchDest);
  if ( v11 >= 0 )
  {
    if ( v10 )
    {
      *ppszDest = *(wchar_t **)(v8 + 8);
      *pcchDest = (unsigned __int64)v10[1] >> 1;
      if ( v9 )
        *v9 = (unsigned __int64)*v10 >> 1;
    }
  }
  return v11;
}
