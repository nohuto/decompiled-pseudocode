/*
 * XREFs of RtlUnicodeStringValidateSrcWorker @ 0x1400863BC
 * Callers:
 *     RtlStringCbCopyUnicodeString @ 0x14008F734 (RtlStringCbCopyUnicodeString.c)
 *     RtlUnicodeStringCopy @ 0x14009A6F8 (RtlUnicodeStringCopy.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x14007E9BC (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringValidateSrcWorker(
        const _UNICODE_STRING *SourceString,
        wchar_t **ppszSrc,
        unsigned __int64 *pcchSrcLength,
        const unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int16 *v7; // r10
  unsigned __int64 *v8; // r11

  *ppszSrc = 0LL;
  *pcchSrcLength = 0LL;
  result = RtlUnicodeStringValidateWorker(SourceString, (const unsigned __int64)ppszSrc, (unsigned int)pcchSrcLength);
  if ( (int)result >= 0 )
  {
    if ( v6 )
    {
      *ppszSrc = *(wchar_t **)(v6 + 8);
      *v8 = (unsigned __int64)*v7 >> 1;
    }
  }
  return result;
}
