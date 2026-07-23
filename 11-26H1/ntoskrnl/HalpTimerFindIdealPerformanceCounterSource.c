/*
 * XREFs of HalpTimerFindIdealPerformanceCounterSource @ 0x140579710
 * Callers:
 *     HalpTimerSelectRoles @ 0x14057A3A8 (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1404B2B68 (HalpIsHvPresent.c)
 *     HalpFindTimer @ 0x140583D54 (HalpFindTimer.c)
 */

__int64 HalpTimerFindIdealPerformanceCounterSource()
{
  int v0; // ebx
  __int64 result; // rax

  if ( HalpTimerPlatformSourceForced )
    goto LABEL_11;
  if ( HalpIsHvPresent() )
    goto LABEL_19;
  v0 = 0x2000;
  if ( (unsigned __int8)HalpTimerDeepestIdleState > 1u )
    v0 = 24576;
  result = HalpFindTimer(5, 3, v0, 0, 0);
  if ( !result )
  {
    result = HalpFindTimer(10, 3, v0, 0, 0);
    if ( !result )
    {
LABEL_19:
      if ( !HalpHvCpuManager || qword_140FBB3E8 || (result = HalpFindTimer(3, 2, 24576, 0, 0)) == 0 )
      {
        result = HalpFindTimer(8, 2, 0, 0, 0);
        if ( !result )
        {
LABEL_11:
          result = HalpFindTimer(11, 2, 24576, 0, 0);
          if ( !result )
          {
            result = HalpFindTimer(3, 2, 24576, 0, 0);
            if ( !result )
            {
              result = HalpFindTimer(1, 2, 24576, 0, 0);
              if ( !result )
              {
                if ( HalpIsHvPresent() )
                  return 0LL;
                result = HalpFindTimer(0, 2, 24576, 0, 0);
                if ( !result )
                  return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
