/*
 * XREFs of ?SetTimerState@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@_N@Z @ 0x140219270
 * Callers:
 *     ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x1402191E0 (-KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x140219220 (-SetTimer@CAccessibilityTimer@@SA-AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAccessibilityTimer::SetTimerState(int a1, int a2, int a3)
{
  char v3; // bl
  char v4; // di
  __int64 result; // rax
  __int16 v6; // dx
  __int16 v7; // dx

  v3 = a2;
  v4 = a1;
  result = W32GetUserSessionState(a1, a2, a3);
  v6 = *(_WORD *)(result + 21884);
  if ( v3 )
    v7 = v6 | (1 << (v4 & 0xF));
  else
    v7 = v6 & ~(1 << (v4 & 0xF));
  *(_WORD *)(result + 21884) = v7;
  return result;
}
