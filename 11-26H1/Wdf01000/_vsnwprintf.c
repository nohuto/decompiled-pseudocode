/*
 * XREFs of _vsnwprintf @ 0x1400847C8
 * Callers:
 *     RtlStringCchPrintfW @ 0x140086048 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x1400860C4 (RtlUnicodeStringPrintf.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1400847E8 (_vsnwprintf_l.c)
 */

int __fastcall vsnwprintf(wchar_t *string, unsigned __int64 count, const wchar_t *format, char *ap)
{
  return vsnwprintf_l(string, count, format, 0LL, ap);
}
