/*
 * XREFs of InitializePointerDevicesPresenceState @ 0x140220A60
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     FreePointerDeviceClientList @ 0x140220A9C (FreePointerDeviceClientList.c)
 *     ClosePointerDeviceProcessEvents @ 0x140220B34 (ClosePointerDeviceProcessEvents.c)
 */

_QWORD *__fastcall InitializePointerDevicesPresenceState(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  if ( (_DWORD)a1 )
  {
    result = (_QWORD *)(W32GetUserSessionState(a1, a2) + 16712);
    result[1] = result;
    *result = result;
  }
  else
  {
    FreePointerDeviceClientList();
    return (_QWORD *)ClosePointerDeviceProcessEvents();
  }
  return result;
}
