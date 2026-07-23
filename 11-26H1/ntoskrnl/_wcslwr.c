/*
 * XREFs of _wcslwr @ 0x140538A50
 * Callers:
 *     EtwpCovSampSplitSegments @ 0x140837144 (EtwpCovSampSplitSegments.c)
 *     SiGetBootDeviceNameFromRegistry @ 0x140AC225C (SiGetBootDeviceNameFromRegistry.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 */

wchar_t *__cdecl wcslwr(wchar_t *String)
{
  wchar_t v3; // cx
  wchar_t *v4; // r8

  if ( String )
  {
    v3 = *String;
    v4 = String;
    while ( v3 )
    {
      if ( (unsigned __int16)(v3 - 65) <= 0x19u )
        *v4 = v3 + 32;
      v3 = *++v4;
    }
    return String;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
}
