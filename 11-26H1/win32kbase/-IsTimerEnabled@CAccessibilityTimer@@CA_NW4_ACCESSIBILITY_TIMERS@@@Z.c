/*
 * XREFs of ?IsTimerEnabled@CAccessibilityTimer@@CA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x1402191A0
 * Callers:
 *     ?ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z @ 0x140218FB0 (-ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x1402191E0 (-KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAccessibilityTimer::IsTimerEnabled(int a1, int a2, int a3)
{
  return ((unsigned __int16)(1 << a1) & *(_WORD *)(W32GetUserSessionState(a1, a2, a3) + 21884)) != 0;
}
