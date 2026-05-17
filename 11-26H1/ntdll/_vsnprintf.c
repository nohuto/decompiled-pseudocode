/*
 * XREFs of _vsnprintf @ 0x180128D30
 * Callers:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpGenerateSnapsUnicodeStrings @ 0x180049370 (LdrpGenerateSnapsUnicodeStrings.c)
 *     RtlStringCbPrintfA @ 0x180063E10 (RtlStringCbPrintfA.c)
 *     RtlStringCbVPrintfA @ 0x1800DE9C0 (RtlStringCbVPrintfA.c)
 *     StringCbPrintfA @ 0x18011F17C (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x180128D4C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
