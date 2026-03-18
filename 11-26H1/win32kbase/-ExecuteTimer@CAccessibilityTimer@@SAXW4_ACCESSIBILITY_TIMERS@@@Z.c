/*
 * XREFs of ?ExecuteTimer@CAccessibilityTimer@@SAXW4_ACCESSIBILITY_TIMERS@@@Z @ 0x140218FB0
 * Callers:
 *     NtMITAccessibilityTimerNotification @ 0x1401E0920 (NtMITAccessibilityTimerNotification.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsTimerEnabled@CAccessibilityTimer@@CA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x1402191A0 (-IsTimerEnabled@CAccessibilityTimer@@CA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CAccessibilityTimer::ExecuteTimer(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  void (__fastcall *v3)(struct tagWND *, int, __int64); // rbx

  v1 = (int)a1;
  result = CAccessibilityTimer::IsTimerEnabled(a1);
  v3 = 0LL;
  if ( (_BYTE)result )
  {
    switch ( (_DWORD)v1 )
    {
      case 1:
        v3 = FKActivationTimer;
        break;
      case 2:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxFKRepeatRateTimer)(0LL, 0LL, v1, 0LL);
      case 3:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))FKBounceKeyTimer)(0LL, 0LL, v1, 0LL);
      case 4:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxFKAcceptanceDelayTimer)(0LL, 0LL, v1, 0LL);
      case 5:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxMKMoveAccelCursorTimer)(0LL, 0LL, v1, 0LL);
      case 6:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxMKMoveConstCursorTimer)(0LL, 0LL, v1, 0LL);
      case 7:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxToggleKeysTimer)(0LL, 0LL, v1, 0LL);
      case 8:
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))xxxAccessTimeOutTimer)(0LL, 0LL, v1, 0LL);
      default:
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 218);
        break;
    }
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v3)(0LL, 0LL, v1, 0LL);
  }
  return result;
}
