/*
 * XREFs of swscanf_s @ 0x14053EE70
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgParseVersionString @ 0x1407ACFE8 (PiDevCfgParseVersionString.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407AEB68 (PiDevCfgSplitDriverConfigurationId.c)
 *     ExProcessorCounterSetCallback @ 0x140A75530 (ExProcessorCounterSetCallback.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     _swinput_s @ 0x14054189C (_swinput_s.c)
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
