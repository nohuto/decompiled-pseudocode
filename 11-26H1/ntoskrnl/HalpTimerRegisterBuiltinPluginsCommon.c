/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x140582E04
 * Callers:
 *     HalpInitializeTimers @ 0x140576C98 (HalpInitializeTimers.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x14057797C (HalpTimerInitializeEarlyStallSource.c)
 * Callees:
 *     HalpHvDiscover @ 0x140597190 (HalpHvDiscover.c)
 *     HalpWdatDiscover @ 0x1405974A4 (HalpWdatDiscover.c)
 *     HalpPmTimerDiscover @ 0x140598580 (HalpPmTimerDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x140598710 (HalpHvWatchdogDiscover.c)
 *     HalpArtDiscover @ 0x140598844 (HalpArtDiscover.c)
 *     HalpHpetDiscover @ 0x140598928 (HalpHpetDiscover.c)
 *     HalpApicTimerDiscover @ 0x140598E58 (HalpApicTimerDiscover.c)
 *     HalpTscDiscover @ 0x140599198 (HalpTscDiscover.c)
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
