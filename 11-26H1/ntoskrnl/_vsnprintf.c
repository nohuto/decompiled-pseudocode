/*
 * XREFs of _vsnprintf @ 0x1405354D0
 * Callers:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x140397670 (vDbgPrintExWithPrefixInternalHelper.c)
 *     KsepLogEtwMessage @ 0x1404CCBF4 (KsepLogEtwMessage.c)
 *     RtlStringCchPrintfA @ 0x14051055C (RtlStringCchPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1405769A8 (RtlStringVPrintfWorkerA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1405354F0 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
