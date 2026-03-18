/*
 * XREFs of RIMUpdateDeviceForInputMode @ 0x1400F2534
 * Callers:
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     RIMHandlePowerDeviceArrival @ 0x1400EB09C (RIMHandlePowerDeviceArrival.c)
 *     RIMSetDeviceInputMode @ 0x1401BC3F0 (RIMSetDeviceInputMode.c)
 * Callees:
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400F074C (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400F0E9C (RIMConfigurePointerDevice.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1400F2658 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDevicePDOSuppression @ 0x1401852CC (RIMSetDevicePDOSuppression.c)
 *     RIMConfigureDeviceFeedback @ 0x140203F80 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1402043F0 (RIMConfigureTouchpadClickForceSensitivity.c)
 */

__int64 __fastcall RIMUpdateDeviceForInputMode(struct RIMDEV *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v6; // rsi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rsi

  if ( (*((_DWORD *)a1 + 46) & 0x80u) != 0 && (*((_DWORD *)a1 + 42) & 0x2000) == 0 )
  {
    if ( !a2 )
    {
      v6 = *((_QWORD *)a1 + 40);
      RIMConfigurePointerDevice(v6, (__int64)a1, *((_QWORD *)a1 + 55));
      if ( *(_DWORD *)(*((_QWORD *)a1 + 57) + 24LL) == 7 )
      {
        RIMApiSetSetUserPTPEnabledPreference((__int64)a1, *((_QWORD *)a1 + 55), v6);
        UserSessionState = W32GetUserSessionState(v8, v7, v9);
        if ( (*((_DWORD *)a1 + 46) & 0x400) != 0 )
          RIMConfigureDeviceFeedback(a1);
        if ( (*((_DWORD *)a1 + 46) & 0x800) != 0 )
          RIMConfigureTouchpadClickForceSensitivity(a1, *(_DWORD *)(UserSessionState + 16792));
      }
    }
    RIMSendLatencyMgtDeviceRequest(a1);
  }
  if ( *(_BYTE *)W32GetUserGdiSessionState() || (*((_DWORD *)a1 + 43) & 4) != 0 )
  {
    LOBYTE(v4) = a2 == 1;
    RIMSetDevicePDOSuppression(a1, v4);
  }
  return 0LL;
}
