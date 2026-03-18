/*
 * XREFs of ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x140211B30
 * Callers:
 *     <none>
 * Callees:
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x1402119D8 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     ?IsTimerEnabled@CAccessibilityTimer@@CA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x140211AF0 (-IsTimerEnabled@CAccessibilityTimer@@CA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     ?SetTimerState@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@_N@Z @ 0x140211BC0 (-SetTimerState@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@_N@Z.c)
 */

char __fastcall CAccessibilityTimer::KillTimer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a1;
  if ( !CAccessibilityTimer::IsTimerEnabled(a1, a2) )
    return 0;
  CAccessibilityTimer::SetTimerState(v2, 0LL);
  CAccessibilityTimer::ForwardInputToISMTimers(v2, 0, 1, 1);
  return 1;
}
