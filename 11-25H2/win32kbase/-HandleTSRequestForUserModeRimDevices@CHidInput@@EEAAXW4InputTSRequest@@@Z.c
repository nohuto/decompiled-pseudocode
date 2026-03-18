/*
 * XREFs of ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1402128C0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x14011F640 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x14011F78C (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1401DA400 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 */

void __fastcall CHidInput::HandleTSRequestForUserModeRimDevices(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  if ( a2 )
  {
    v2 = (unsigned int)(a2 - 1);
    if ( (_DWORD)v2 )
    {
      v3 = (unsigned int)(v2 - 1);
      if ( (_DWORD)v3 )
      {
        if ( (_DWORD)v3 == 1 )
          RIMDirectStopUserModeRimDeviceClassNotifications(a1, v3);
        else
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1004);
      }
      else
      {
        RIMDirectStartUserModeRimDeviceClassNotifications(a1, v3);
      }
    }
    else
    {
      RIMDirectPnpRemoveUserModeRimDevices(a1, v2);
    }
  }
}
