/*
 * XREFs of ?EndKeyboardEventSequence@KeyboardInputTelemetry@@SAXXZ @ 0x1400E3D90
 * Callers:
 *     HandleDeferredInput @ 0x1400E3510 (HandleDeferredInput.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400E4028 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 * Callees:
 *     ?_EndKeyboardEventSequence@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400E4368 (-_EndKeyboardEventSequence@KeyboardInputTelemetry@@AEAAXXZ.c)
 */

void __fastcall KeyboardInputTelemetry::EndKeyboardEventSequence(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  KeyboardInputTelemetry::_EndKeyboardEventSequence((KeyboardInputTelemetry *)(UserSessionState + 14504));
}
