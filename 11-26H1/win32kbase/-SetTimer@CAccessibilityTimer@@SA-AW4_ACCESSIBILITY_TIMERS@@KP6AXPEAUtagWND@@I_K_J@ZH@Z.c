/*
 * XREFs of ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x140219220
 * Callers:
 *     <none>
 * Callees:
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x140219088 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     ?GetTimerId@CAccessibilityTimer@@CA?AW4_ACCESSIBILITY_TIMERS@@P6AXPEAUtagWND@@I_K_J@Z@Z @ 0x1402190D0 (-GetTimerId@CAccessibilityTimer@@CA-AW4_ACCESSIBILITY_TIMERS@@P6AXPEAUtagWND@@I_K_J@Z@Z.c)
 *     ?SetTimerState@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@_N@Z @ 0x140219270 (-SetTimerState@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@_N@Z.c)
 */

__int64 __fastcall CAccessibilityTimer::SetTimer(
        int a1,
        void (__fastcall *a2)(struct tagWND *a1, int a2, int a3),
        int a3)
{
  unsigned int TimerId; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx

  TimerId = CAccessibilityTimer::GetTimerId(a2);
  LOBYTE(v6) = 1;
  v7 = TimerId;
  CAccessibilityTimer::SetTimerState(TimerId, v6);
  CAccessibilityTimer::ForwardInputToISMTimers(v7, a1, a3, 0);
  return v7;
}
