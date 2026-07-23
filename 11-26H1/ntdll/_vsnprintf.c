/*
 * XREFs of _vsnprintf @ 0x180128AA0
 * Callers:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpGenerateSnapsUnicodeStrings @ 0x1800338F0 (LdrpGenerateSnapsUnicodeStrings.c)
 *     RtlStringCbPrintfA @ 0x180084260 (RtlStringCbPrintfA.c)
 *     RtlStringCbVPrintfA @ 0x1800DB930 (RtlStringCbVPrintfA.c)
 *     StringCbPrintfA @ 0x18011EF2C (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x180128ABC (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
