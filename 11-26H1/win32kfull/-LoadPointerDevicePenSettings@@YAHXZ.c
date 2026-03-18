/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x140251DDC
 * Callers:
 *     GetPenDoubleClickTime @ 0x14028F5F4 (GetPenDoubleClickTime.c)
 *     GetPenHoldTime @ 0x1402CA320 (GetPenHoldTime.c)
 *     ReadPointerDeviceSettingsFull @ 0x1402CA3AC (ReadPointerDeviceSettingsFull.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LoadPointerDevicePenSettings(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  result = GetDWORDSettingValues(4LL, *(_QWORD *)(UserSessionState + 18256));
  if ( (_DWORD)result )
  {
    result = 1LL;
    *(_DWORD *)(UserSessionState + 18248) = 1;
  }
  return result;
}
