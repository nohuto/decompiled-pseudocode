/*
 * XREFs of RtlUnicodeStringValidateSrcWorker @ 0x1405EF14C
 * Callers:
 *     RtlUnicodeStringCopy @ 0x14042FE80 (RtlUnicodeStringCopy.c)
 *     CmpDoWritethroughReparse @ 0x1408C77A0 (CmpDoWritethroughReparse.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_1 @ 0x1405EF198 (RtlUnicodeStringValidateWorker_1.c)
 */

NTSTATUS __stdcall RtlUnicodeStringValidateSrcWorker(
        PCUNICODE_STRING SourceString,
        wchar_t **ppszSrc,
        size_t *pcchSrcLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS result; // eax
  __int64 v7; // rcx
  unsigned __int16 *v8; // r10
  unsigned __int64 *v9; // r11

  *ppszSrc = 0LL;
  *pcchSrcLength = 0LL;
  result = RtlUnicodeStringValidateWorker_1(SourceString, (const size_t)ppszSrc, (ULONG)pcchSrcLength);
  if ( result >= 0 )
  {
    if ( v7 )
    {
      *ppszSrc = *(wchar_t **)(v7 + 8);
      *v9 = (unsigned __int64)*v8 >> 1;
    }
  }
  return result;
}
