/*
 * XREFs of ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x1402191E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x140219088 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     ?IsTimerEnabled@CAccessibilityTimer@@CA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x1402191A0 (-IsTimerEnabled@CAccessibilityTimer@@CA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     ?SetTimerState@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@_N@Z @ 0x140219270 (-SetTimerState@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@_N@Z.c)
 */

char __fastcall CAccessibilityTimer::KillTimer(unsigned int a1, int a2, int a3)
{
  if ( !CAccessibilityTimer::IsTimerEnabled(a1, a2, a3) )
    return 0;
  CAccessibilityTimer::SetTimerState(a1, 0LL);
  CAccessibilityTimer::ForwardInputToISMTimers(a1, 0, 1, 1);
  return 1;
}
