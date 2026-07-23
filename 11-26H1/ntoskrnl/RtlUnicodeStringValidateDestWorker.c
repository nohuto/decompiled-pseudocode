/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1405EF100
 * Callers:
 *     RtlUnicodeStringCopy @ 0x14042FE80 (RtlUnicodeStringCopy.c)
 *     CmpDoWritethroughReparse @ 0x1408C77A0 (CmpDoWritethroughReparse.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_1 @ 0x1405EF198 (RtlUnicodeStringValidateWorker_1.c)
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
  __int64 v9; // r10
  unsigned __int64 *v10; // r11

  *ppszDest = 0LL;
  *pcchDest = 0LL;
  result = RtlUnicodeStringValidateWorker_1(DestinationString, (const size_t)ppszDest, (ULONG)pcchDest);
  if ( result >= 0 )
  {
    if ( v8 )
    {
      *ppszDest = *(wchar_t **)(v8 + 8);
      *v10 = (unsigned __int64)*(unsigned __int16 *)(v9 + 2) >> 1;
    }
  }
  return result;
}
