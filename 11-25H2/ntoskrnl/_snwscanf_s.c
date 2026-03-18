/*
 * XREFs of _snwscanf_s @ 0x1405010D0
 * Callers:
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140806FE8 (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     SiGetBootDeviceName @ 0x140A241AC (SiGetBootDeviceName.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x140504954 (_swinput_s.c)
 */

int snwscanf_s(const wchar_t *Src, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return swinput_s(Src, MaxCount, Format, (__int64 *)va);
  xHalTimerWatchdogStop();
  return -1;
}
