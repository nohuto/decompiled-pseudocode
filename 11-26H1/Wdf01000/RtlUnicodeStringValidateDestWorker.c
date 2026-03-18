/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x140086370
 * Callers:
 *     RtlUnicodeStringPrintf @ 0x1400860C4 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringCopy @ 0x14009A6F8 (RtlUnicodeStringCopy.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x14007E9BC (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringValidateDestWorker(
        const _UNICODE_STRING *DestinationString,
        wchar_t **ppszDest,
        unsigned __int64 *pcchDest,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // r10
  unsigned __int64 *v8; // r11

  *ppszDest = 0LL;
  *pcchDest = 0LL;
  result = RtlUnicodeStringValidateWorker(DestinationString, (const unsigned __int64)ppszDest, (unsigned int)pcchDest);
  if ( (int)result >= 0 )
  {
    if ( v6 )
    {
      *ppszDest = *(wchar_t **)(v6 + 8);
      *v8 = (unsigned __int64)*(unsigned __int16 *)(v7 + 2) >> 1;
    }
  }
  return result;
}
