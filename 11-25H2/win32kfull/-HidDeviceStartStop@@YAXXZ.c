/*
 * XREFs of ?HidDeviceStartStop@@YAXXZ @ 0x14011E4F0
 * Callers:
 *     FreeProcessHidTable @ 0x14011D098 (FreeProcessHidTable.c)
 *     _RegisterRawInputDevices @ 0x14011DA34 (_RegisterRawInputDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall HidDeviceStartStop(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(UserSessionState + 16840));
}
