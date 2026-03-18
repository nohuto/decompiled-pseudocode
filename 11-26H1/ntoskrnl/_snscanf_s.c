/*
 * XREFs of _snscanf_s @ 0x14053BA60
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
 *     _sinput_s @ 0x14053EFDC (_sinput_s.c)
 */

int snscanf_s(const char *Src, size_t MaxCount, const char *Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sinput_s(Src, MaxCount, Format, va);
  xHalTimerWatchdogStop();
  return -1;
}
