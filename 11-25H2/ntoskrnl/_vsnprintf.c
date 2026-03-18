/*
 * XREFs of _vsnprintf @ 0x1404FAC00
 * Callers:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1403A97C0 (vDbgPrintExWithPrefixInternalHelper.c)
 *     KsepLogEtwMessage @ 0x14048E780 (KsepLogEtwMessage.c)
 *     RtlStringVPrintfWorkerA @ 0x140537BD8 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x140592510 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1404FAC20 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
