/*
 * XREFs of ?IsTimerEnabled@CAccessibilityTimer@@CA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x140211AF0
 * Callers:
 *     ?ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z @ 0x140211900 (-ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x140211B30 (-KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAccessibilityTimer::IsTimerEnabled(__int64 a1, __int64 a2)
{
  return ((unsigned __int16)(1 << a1) & *(_WORD *)(W32GetUserSessionState(a1, a2) + 21852)) != 0;
}
