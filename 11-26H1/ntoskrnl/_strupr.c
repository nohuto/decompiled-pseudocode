/*
 * XREFs of _strupr @ 0x140535360
 * Callers:
 *     HalInitializeBios @ 0x1405784A0 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x1405C4B30 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140CBA030 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140CBA110 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140D03E44 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
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
