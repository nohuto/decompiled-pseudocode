/*
 * XREFs of IoControl @ 0x1401C4530
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 *     UpdateToggleKeyAndLights @ 0x1401B0C10 (UpdateToggleKeyAndLights.c)
 *     NlsKbdSendIMENotification @ 0x1401B0DF0 (NlsKbdSendIMENotification.c)
 * Callees:
 *     ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1401B0948 (-KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z.c)
 */

void __fastcall IoControl(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v5; // r8d

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  CKeyboardSensor::KeyboardIoControl(*(_QWORD *)(UserSessionState + 3184), a1, v5);
}
