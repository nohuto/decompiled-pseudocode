/*
 * XREFs of swscanf_s @ 0x14053C9F0
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407A8DA0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407ABB48 (PiDevCfgSplitDriverConfigurationId.c)
 *     ExProcessorCounterSetCallback @ 0x140A68560 (ExProcessorCounterSetCallback.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
 *     wcslen @ 0x1405380A0 (wcslen.c)
 *     _swinput_s @ 0x14053F418 (_swinput_s.c)
 */

int swscanf_s(const wchar_t *Src, const wchar_t *Format, ...)
{
  size_t v5; // rax
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v5 = wcslen(Src);
    return swinput_s(Src, v5, Format, va);
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
