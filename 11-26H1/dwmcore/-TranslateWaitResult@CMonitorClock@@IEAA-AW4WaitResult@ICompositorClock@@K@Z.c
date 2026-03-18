/*
 * XREFs of ?TranslateWaitResult@CMonitorClock@@IEAA?AW4WaitResult@ICompositorClock@@K@Z @ 0x18018EF90
 * Callers:
 *     ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1801663B0 (-WaitForNextTick@CMonitorClock@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorClock::TranslateWaitResult(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( !a2 )
    return 3LL;
  result = 1LL;
  if ( a2 != 1 )
  {
    result = 4LL;
    if ( a2 != 258 )
      return 0LL;
  }
  return result;
}
