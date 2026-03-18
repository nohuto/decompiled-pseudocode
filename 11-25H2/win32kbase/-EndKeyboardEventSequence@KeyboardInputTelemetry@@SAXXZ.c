/*
 * XREFs of ?EndKeyboardEventSequence@KeyboardInputTelemetry@@SAXXZ @ 0x1400C1D18
 * Callers:
 *     HandleDeferredInput @ 0x1400C1830 (HandleDeferredInput.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400C1FCC (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 * Callees:
 *     ?_EndKeyboardEventSequence@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400C1DDC (-_EndKeyboardEventSequence@KeyboardInputTelemetry@@AEAAXXZ.c)
 */

void __fastcall KeyboardInputTelemetry::EndKeyboardEventSequence(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  KeyboardInputTelemetry::_EndKeyboardEventSequence((KeyboardInputTelemetry *)(UserSessionState + 14512));
}
