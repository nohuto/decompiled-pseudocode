/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x140005F9B
 * Callers:
 *     IsChangeWindowMessageFilterExPresent @ 0x1400059FC (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterHotKeyPresent @ 0x140005ADC (IsRegisterHotKeyPresent.c)
 *     IsWerReportCreatePresent @ 0x140005D08 (IsWerReportCreatePresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140005DA4 (IsDWMGhostHandleGhostMsgPresent.c)
 *     IsImmDisableIMEPresent @ 0x140005EBC (IsImmDisableIMEPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
