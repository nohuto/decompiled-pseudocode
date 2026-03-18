/*
 * XREFs of _strupr @ 0x1404FAA90
 * Callers:
 *     HalInitializeBios @ 0x140539590 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x14058BAE0 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140C09150 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140C09230 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140C4D308 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
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
