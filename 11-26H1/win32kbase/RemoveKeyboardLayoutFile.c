/*
 * XREFs of RemoveKeyboardLayoutFile @ 0x140199E24
 * Callers:
 *     DestroyKF @ 0x140118D3C (DestroyKF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RemoveKeyboardLayoutFile(_QWORD *a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rcx
  __int64 result; // rax
  _QWORD *i; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, a2, a3);
  v5 = UserSessionState;
  if ( UserSessionState[1757] == a1[4] )
    UserSessionState[1757] = UserSessionState + 1759;
  if ( UserSessionState[1758] == a1[6] )
    UserSessionState[1758] = 0LL;
  v6 = (_QWORD *)UserSessionState[1773];
  if ( a1 == v6 )
  {
    result = a1[2];
    v5[1773] = result;
  }
  else
  {
    for ( i = (_QWORD *)v6[2]; a1 != i; i = (_QWORD *)i[2] )
      v6 = i;
    result = i[2];
    v6[2] = result;
  }
  return result;
}
