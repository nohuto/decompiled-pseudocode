/*
 * XREFs of _vsnprintf @ 0x1401C7580
 * Callers:
 *     ?RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x140141FB0 (-RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1401B86CC (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     _vsnprintf_l @ 0x1401C75A0 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
