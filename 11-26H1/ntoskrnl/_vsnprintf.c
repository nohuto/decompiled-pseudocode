/*
 * XREFs of _vsnprintf @ 0x140537950
 * Callers:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1403993F0 (vDbgPrintExWithPrefixInternalHelper.c)
 *     KsepLogEtwMessage @ 0x1404C6394 (KsepLogEtwMessage.c)
 *     RtlStringCchPrintfA @ 0x140509FCC (RtlStringCchPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x140578E58 (RtlStringVPrintfWorkerA.c)
 * Callees:
 *     _vsnprintf_l @ 0x140537970 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
