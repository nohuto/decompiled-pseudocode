/*
 * XREFs of sscanf_s @ 0x140501A70
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x140A9C7D0 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 *     _sinput_s @ 0x1405044E8 (_sinput_s.c)
 */

int sscanf_s(const char *Src, const char *Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Src[v4] );
    return sinput_s(Src, v4, Format, va);
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
