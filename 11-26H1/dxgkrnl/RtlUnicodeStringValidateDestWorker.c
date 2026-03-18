/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1400555E4
 * Callers:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x14006F64C (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x140055730 (RtlUnicodeStringValidateWorker.c)
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
  __int64 v9; // rcx
  unsigned __int16 *v10; // r10
  unsigned __int64 *v11; // r11

  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( pcchDestLength )
    *pcchDestLength = 0LL;
  result = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)ppszDest, (ULONG)pcchDest);
  if ( result >= 0 && v10 )
  {
    *ppszDest = *(wchar_t **)(v9 + 8);
    *pcchDest = (unsigned __int64)v10[1] >> 1;
    if ( v11 )
      *v11 = (unsigned __int64)*v10 >> 1;
  }
  return result;
}
