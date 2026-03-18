/*
 * XREFs of __stdio_common_vsprintf_0 @ 0x1802222D1
 * Callers:
 *     _vsnprintf @ 0x1802216A8 (_vsnprintf.c)
 *     _vscprintf @ 0x18022177C (_vscprintf.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl _stdio_common_vsprintf_0(
        unsigned __int64 Options,
        char *Buffer,
        size_t BufferCount,
        const char *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return __stdio_common_vsprintf(Options, Buffer, BufferCount, Format, Locale, ArgList);
}
