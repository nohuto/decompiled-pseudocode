/*
 * XREFs of _strupr @ 0x1405377E0
 * Callers:
 *     HalInitializeBios @ 0x14057A9D0 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1405C73A0 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140CC0070 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140CC0150 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140D0A114 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 */

char *__cdecl strupr(char *String)
{
  char v3; // cl
  char *v4; // r8

  if ( String )
  {
    v3 = *String;
    v4 = String;
    while ( v3 )
    {
      if ( (unsigned __int8)(v3 - 97) <= 0x19u )
        *v4 = v3 - 32;
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
