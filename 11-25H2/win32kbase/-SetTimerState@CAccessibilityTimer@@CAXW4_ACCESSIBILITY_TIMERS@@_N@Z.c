/*
 * XREFs of ?SetTimerState@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@_N@Z @ 0x140211BC0
 * Callers:
 *     ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x140211B30 (-KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x140211B70 (-SetTimer@CAccessibilityTimer@@SA-AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAccessibilityTimer::SetTimerState(__int64 a1, __int64 a2)
{
  char v2; // bl
  char v3; // di
  __int64 result; // rax
  __int16 v5; // dx
  __int16 v6; // dx

  v2 = a2;
  v3 = a1;
  result = W32GetUserSessionState(a1, a2);
  v5 = *(_WORD *)(result + 21852);
  if ( v2 )
    v6 = v5 | (1 << (v3 & 0xF));
  else
    v6 = v5 & ~(1 << (v3 & 0xF));
  *(_WORD *)(result + 21852) = v6;
  return result;
}
