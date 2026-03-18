/*
 * XREFs of FindRimDevBackedDeviceInfo @ 0x14027281C
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x140272790 (EditionRimDeviceReadNotification.c)
 * Callees:
 *     <none>
 */

struct DEVICEINFO *__fastcall FindRimDevBackedDeviceInfo(void *a1, __int64 a2)
{
  int v2; // ebx
  __int64 UserSessionState; // rax

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return CBaseInput::FindDeviceInfo(*(CBaseInput **)(UserSessionState + 16840), a1, v2);
}
