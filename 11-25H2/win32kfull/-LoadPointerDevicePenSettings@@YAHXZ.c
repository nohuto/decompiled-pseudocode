/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1402196FC
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x14025517C (ReadPointerDeviceSettingsFull.c)
 *     GetPenDoubleClickTime @ 0x14026A654 (GetPenDoubleClickTime.c)
 *     GetPenHoldTime @ 0x1402AE560 (GetPenHoldTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LoadPointerDevicePenSettings(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  result = GetDWORDSettingValues(4LL, *(_QWORD *)(UserSessionState + 18264), 10LL);
  if ( (_DWORD)result )
  {
    result = 1LL;
    *(_DWORD *)(UserSessionState + 18256) = 1;
  }
  return result;
}
