/*
 * XREFs of _vsnwprintf @ 0x1401A2ED8
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14006A82C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A87F8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringCchPrintfW @ 0x14014F7E4 (StringCchPrintfW.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x14015024C (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14019C7E4 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1401A2EF8 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
