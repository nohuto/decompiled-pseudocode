/*
 * XREFs of ?IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z @ 0x1800F5348
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x18000FD94 (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z.c)
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800F4540 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CursorNotificationProcessor::IsTimestampNewest(CursorNotificationProcessor *this, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( a2 > *((_QWORD *)this + 6) )
  {
    *((_QWORD *)this + 6) = a2;
    return 1;
  }
  return 0;
}
