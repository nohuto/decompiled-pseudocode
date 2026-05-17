/*
 * XREFs of _vsnwprintf @ 0x180128E20
 * Callers:
 *     RtlStringCchPrintfExW @ 0x1800496E0 (RtlStringCchPrintfExW.c)
 *     StringCbPrintfW @ 0x180056694 (StringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x180059060 (RtlStringCchPrintfW.c)
 *     StringCchPrintfW @ 0x180077D64 (StringCchPrintfW.c)
 *     RtlStringCbPrintfExW @ 0x1800C27B4 (RtlStringCbPrintfExW.c)
 *     RtlStringCbPrintfW @ 0x18011F008 (RtlStringCbPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x180128E3C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
