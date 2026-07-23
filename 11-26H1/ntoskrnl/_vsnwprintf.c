/*
 * XREFs of _vsnwprintf @ 0x140537830
 * Callers:
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x140459FE8 (RtlStringCbPrintfExW.c)
 *     StringCchPrintfW @ 0x1404A5DE0 (StringCchPrintfW.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x1404D8620 (RtlUnicodeStringPrintfEx.c)
 *     StringCchPrintfExW @ 0x14071A480 (StringCchPrintfExW.c)
 *     RtlStringCchVPrintfW @ 0x14071A670 (RtlStringCchVPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x140537850 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
