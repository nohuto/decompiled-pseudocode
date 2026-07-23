/*
 * XREFs of sscanf_s @ 0x14053E9D0
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1405BAC20 (HvlDebuggerSupportInitialize.c)
 *     RtlIncrementCorrelationVector @ 0x14080BF20 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     _sinput_s @ 0x140541460 (_sinput_s.c)
 *     strlen @ 0x140742910 (strlen.c)
 */

int sscanf_s(const char *Src, const char *Format, ...)
{
  size_t v5; // rax
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v5 = strlen(Src);
    return sinput_s(Src, v5, Format, va);
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
