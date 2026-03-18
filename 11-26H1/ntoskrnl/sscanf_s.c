/*
 * XREFs of sscanf_s @ 0x14053C550
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1405B83B0 (HvlDebuggerSupportInitialize.c)
 *     RtlIncrementCorrelationVector @ 0x140806480 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
 *     _sinput_s @ 0x14053EFDC (_sinput_s.c)
 *     strlen @ 0x14073DD10 (strlen.c)
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
