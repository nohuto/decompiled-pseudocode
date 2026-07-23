/*
 * XREFs of _snwscanf_s @ 0x14053E010
 * Callers:
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x14089BDAC (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     SiGetBootDeviceName @ 0x140B09BA0 (SiGetBootDeviceName.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x14054189C (_swinput_s.c)
 */

int snwscanf_s(const wchar_t *Src, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return swinput_s(Src, MaxCount, Format, va);
  xHalTimerWatchdogStop();
  return -1;
}
