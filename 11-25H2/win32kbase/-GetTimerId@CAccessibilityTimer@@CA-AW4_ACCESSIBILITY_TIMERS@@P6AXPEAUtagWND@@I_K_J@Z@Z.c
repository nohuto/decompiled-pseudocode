/*
 * XREFs of ?GetTimerId@CAccessibilityTimer@@CA?AW4_ACCESSIBILITY_TIMERS@@P6AXPEAUtagWND@@I_K_J@Z@Z @ 0x140211A20
 * Callers:
 *     ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x140211B70 (-SetTimer@CAccessibilityTimer@@SA-AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CAccessibilityTimer::GetTimerId(void (__fastcall *a1)(struct tagWND *a1, __int64 a2))
{
  unsigned int v1; // ebx

  v1 = 1;
  if ( (char *)a1 != (char *)FKActivationTimer )
  {
    if ( (char *)a1 == (char *)xxxFKRepeatRateTimer )
    {
      return 2;
    }
    else if ( a1 == FKBounceKeyTimer )
    {
      return 3;
    }
    else if ( (char *)a1 == (char *)xxxFKAcceptanceDelayTimer )
    {
      return 4;
    }
    else if ( a1 == xxxMKMoveAccelCursorTimer )
    {
      return 5;
    }
    else if ( a1 == xxxMKMoveConstCursorTimer )
    {
      return 6;
    }
    else if ( a1 == xxxToggleKeysTimer )
    {
      return 7;
    }
    else if ( a1 == xxxAccessTimeOutTimer )
    {
      return 8;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 97);
    }
  }
  return v1;
}
