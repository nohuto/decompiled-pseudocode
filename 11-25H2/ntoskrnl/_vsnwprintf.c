/*
 * XREFs of _vsnwprintf @ 0x1404FAAE0
 * Callers:
 *     RtlStringCbPrintfExW @ 0x140292E0C (RtlStringCbPrintfExW.c)
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x14042CC40 (RtlStringCchPrintfExW.c)
 *     StringCchPrintfW @ 0x140471850 (StringCchPrintfW.c)
 *     RtlStringCchPrintfW @ 0x140476E64 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x14047FA74 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14049FEC0 (RtlUnicodeStringPrintfEx.c)
 *     StringCchPrintfExW @ 0x14068C208 (StringCchPrintfExW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1404FAB00 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
