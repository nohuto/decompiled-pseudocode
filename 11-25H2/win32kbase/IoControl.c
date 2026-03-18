/*
 * XREFs of IoControl @ 0x140216750
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     NlsKbdSendIMENotification @ 0x14018D8F0 (NlsKbdSendIMENotification.c)
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 *     UpdateToggleKeyAndLights @ 0x140217B90 (UpdateToggleKeyAndLights.c)
 * Callees:
 *     ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1402138CC (-KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z.c)
 */

void __fastcall IoControl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 UserSessionState; // rax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  CKeyboardSensor::KeyboardIoControl(*(_QWORD *)(UserSessionState + 3184), v2);
}
