/*
 * XREFs of _vsnwprintf @ 0x180128B90
 * Callers:
 *     RtlStringCchPrintfExW @ 0x180033C60 (RtlStringCchPrintfExW.c)
 *     StringCbPrintfW @ 0x180040C14 (StringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x1800435E0 (RtlStringCchPrintfW.c)
 *     StringCchPrintfW @ 0x180066584 (StringCchPrintfW.c)
 *     RtlStringCbPrintfExW @ 0x1800BFE84 (RtlStringCbPrintfExW.c)
 *     RtlStringCbPrintfW @ 0x18011EDB8 (RtlStringCbPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x180128BAC (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
