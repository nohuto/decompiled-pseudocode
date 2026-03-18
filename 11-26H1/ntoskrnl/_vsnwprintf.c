/*
 * XREFs of _vsnwprintf @ 0x1405353B0
 * Callers:
 *     RtlStringCbPrintfW @ 0x140433060 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x14044E030 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x140460AA8 (RtlStringCbPrintfExW.c)
 *     StringCchPrintfW @ 0x1404AC750 (StringCchPrintfW.c)
 *     RtlStringCchPrintfW @ 0x1404B0AA4 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x1404B9F90 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x1404DEF40 (RtlUnicodeStringPrintfEx.c)
 *     StringCchPrintfExW @ 0x140715790 (StringCchPrintfExW.c)
 *     RtlStringCchVPrintfW @ 0x140715980 (RtlStringCchVPrintfW.c)
 *     StringCbPrintfW @ 0x14071EB7C (StringCbPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1405353D0 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
