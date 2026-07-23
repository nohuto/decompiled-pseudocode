/*
 * XREFs of _wctomb_s_l @ 0x14053AE88
 * Callers:
 *     wctomb @ 0x14053AF50 (wctomb.c)
 *     wctomb_s @ 0x14053AF94 (wctomb_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     RtlUnicodeToMultiByteN @ 0x14097D240 (RtlUnicodeToMultiByteN.c)
 */

errno_t __cdecl wctomb_s_l(int *SizeConverted, char *MbCh, size_t SizeInBytes, wchar_t WCh, _locale_t Locale)
{
  ULONG BytesInMultiByteString; // [rsp+48h] [rbp+10h] BYREF
  WCHAR UnicodeString; // [rsp+58h] [rbp+20h] BYREF

  UnicodeString = WCh;
  if ( MbCh || !SizeInBytes )
  {
    if ( SizeConverted )
      *SizeConverted = -1;
    if ( SizeInBytes > 0x7FFFFFFF )
    {
      xHalTimerWatchdogStop();
      return 22;
    }
    if ( MbCh )
    {
      BytesInMultiByteString = 0;
      if ( RtlUnicodeToMultiByteN(MbCh, SizeInBytes, &BytesInMultiByteString, &UnicodeString, 2u) < 0 )
        return 42;
      if ( SizeConverted )
        *SizeConverted = BytesInMultiByteString;
    }
    else if ( SizeConverted )
    {
      *SizeConverted = _mb_cur_max;
    }
  }
  else if ( SizeConverted )
  {
    *SizeConverted = 0;
  }
  return 0;
}
