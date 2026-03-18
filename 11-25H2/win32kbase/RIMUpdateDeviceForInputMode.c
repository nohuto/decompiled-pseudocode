/*
 * XREFs of RIMUpdateDeviceForInputMode @ 0x14007A364
 * Callers:
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     RIMHandlePowerDeviceArrival @ 0x14012E098 (RIMHandlePowerDeviceArrival.c)
 *     RIMSetDeviceInputMode @ 0x140180708 (RIMSetDeviceInputMode.c)
 * Callees:
 *     RIMSendLatencyMgtDeviceRequest @ 0x14007A488 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400B2938 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400B2DEC (RIMConfigurePointerDevice.c)
 *     RIMSetDevicePDOSuppression @ 0x140148D60 (RIMSetDevicePDOSuppression.c)
 *     RIMConfigureDeviceFeedback @ 0x1401DEB80 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1401DEFE0 (RIMConfigureTouchpadClickForceSensitivity.c)
 */

__int64 __fastcall RIMUpdateDeviceForInputMode(struct RIMDEV *a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rsi

  if ( (*((_DWORD *)a1 + 46) & 0x80u) != 0 && (*((_DWORD *)a1 + 42) & 0x2000) == 0 )
  {
    v4 = *((_QWORD *)a1 + 40);
    if ( !a2 )
    {
      RIMConfigurePointerDevice(*((_QWORD *)a1 + 40), a1, *((_QWORD *)a1 + 55));
      if ( *(_DWORD *)(*((_QWORD *)a1 + 57) + 24LL) == 7 )
      {
        RIMApiSetSetUserPTPEnabledPreference(a1, *((_QWORD *)a1 + 55), v4);
        UserSessionState = W32GetUserSessionState(v8, v7);
        if ( (*((_DWORD *)a1 + 46) & 0x400) != 0 )
          RIMConfigureDeviceFeedback(a1);
        if ( (*((_DWORD *)a1 + 46) & 0x800) != 0 )
          RIMConfigureTouchpadClickForceSensitivity(a1, *(_DWORD *)(UserSessionState + 16800));
      }
    }
    RIMSendLatencyMgtDeviceRequest(a1);
  }
  if ( *(_BYTE *)W32GetUserGdiSessionState() || (*((_DWORD *)a1 + 43) & 4) != 0 )
  {
    LOBYTE(v5) = a2 == 1;
    RIMSetDevicePDOSuppression(a1, v5);
  }
  return 0LL;
}
