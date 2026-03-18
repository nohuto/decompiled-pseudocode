/*
 * XREFs of RemoveInputDevices @ 0x140127000
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401263A8 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 * Callees:
 *     RemoveRimManagedInputDevices @ 0x140127088 (RemoveRimManagedInputDevices.c)
 */

__int64 __fastcall RemoveInputDevices(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _QWORD *UserSessionState; // rax

  v2 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
      if ( v2 )
        break;
      CBaseInput::HandleTSRequest(UserSessionState[387], 3LL);
      v2 = 1;
    }
    if ( v2 == 2 )
      break;
    CBaseInput::HandleTSRequest(UserSessionState[1616], 3LL);
    if ( (unsigned int)++v2 > 2 )
      goto LABEL_5;
  }
  CBaseInput::HandleTSRequest(UserSessionState[2105], 3LL);
LABEL_5:
  RemoveRimManagedInputDevices();
  return ForceUpdatePointerDeviceSystemMetrics();
}
