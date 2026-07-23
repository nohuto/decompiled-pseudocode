/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x140585324
 * Callers:
 *     HalpInitializeTimers @ 0x1405791C8 (HalpInitializeTimers.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x140579EAC (HalpTimerInitializeEarlyStallSource.c)
 * Callees:
 *     HalpHvDiscover @ 0x140599910 (HalpHvDiscover.c)
 *     HalpWdatDiscover @ 0x140599C24 (HalpWdatDiscover.c)
 *     HalpPmTimerDiscover @ 0x14059AD00 (HalpPmTimerDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x14059AE90 (HalpHvWatchdogDiscover.c)
 *     HalpArtDiscover @ 0x14059AFC4 (HalpArtDiscover.c)
 *     HalpHpetDiscover @ 0x14059B0A8 (HalpHpetDiscover.c)
 *     HalpApicTimerDiscover @ 0x14059B5D8 (HalpApicTimerDiscover.c)
 *     HalpTscDiscover @ 0x14059B918 (HalpTscDiscover.c)
 */

__int64 __fastcall HalpTimerRegisterBuiltinPluginsCommon(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0:
      return HalpTscDiscover();
    case 1:
      result = HalpApicTimerDiscover();
      if ( (int)result >= 0 )
        return HalpHvDiscover();
      break;
    case 2:
      result = HalpPmTimerDiscover();
      if ( (int)result >= 0 )
      {
        result = HalpHpetDiscover();
        if ( (int)result >= 0 )
        {
          result = HalpArtDiscover();
          if ( (int)result >= 0 )
          {
            result = HalpHvWatchdogDiscover();
            if ( (int)result >= 0 )
              return HalpWdatDiscover();
          }
        }
      }
      break;
    default:
      return 0LL;
  }
  return result;
}
