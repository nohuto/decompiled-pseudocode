/*
 * XREFs of GetPenHoldTime @ 0x1402AE560
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1402196FC (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 __fastcall GetPenHoldTime(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  __int64 result; // rax
  __int64 v6; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(UserSessionState + 18256) && !(unsigned int)LoadPointerDevicePenSettings(v3, v2) )
    return *(unsigned int *)(*(_QWORD *)(UserSessionState + 18264) + 88LL);
  v6 = *(_QWORD *)(UserSessionState + 18264);
  result = *(unsigned int *)(v6 + 92);
  if ( (_DWORD)result == -1 )
    return *(unsigned int *)(v6 + 88);
  return result;
}
