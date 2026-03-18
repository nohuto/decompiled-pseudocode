/*
 * XREFs of _snwscanf_s @ 0x14053BB90
 * Callers:
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x1408959AC (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     SiGetBootDeviceName @ 0x140B07A70 (SiGetBootDeviceName.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x14053F418 (_swinput_s.c)
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
