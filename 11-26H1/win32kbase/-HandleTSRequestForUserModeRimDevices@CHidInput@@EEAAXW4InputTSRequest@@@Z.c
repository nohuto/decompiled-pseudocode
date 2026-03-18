/*
 * XREFs of ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1400E9030
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x1400E8ED8 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1400E9684 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1400E9A1C (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CHidInput::HandleTSRequestForUserModeRimDevices(__int64 a1, int a2, int a3)
{
  int v3; // edx
  int v4; // edx
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          return RIMDirectStopUserModeRimDeviceClassNotifications();
        else
          return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1002LL);
      }
      else
      {
        return RIMDirectStartUserModeRimDeviceClassNotifications();
      }
    }
    else
    {
      return RIMDirectPnpRemoveUserModeRimDevices(a1, 0, a3);
    }
  }
  return result;
}
