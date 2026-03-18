/*
 * XREFs of RemoveKeyboardLayoutFile @ 0x14015A79C
 * Callers:
 *     DestroyKF @ 0x1400F6304 (DestroyKF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RemoveKeyboardLayoutFile(_QWORD *a1, __int64 a2)
{
  _QWORD *UserSessionState; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  __int64 result; // rax
  _QWORD *i; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v4 = UserSessionState;
  if ( UserSessionState[1758] == a1[4] )
    UserSessionState[1758] = UserSessionState + 1760;
  if ( UserSessionState[1759] == a1[6] )
    UserSessionState[1759] = 0LL;
  v5 = (_QWORD *)UserSessionState[1774];
  if ( a1 == v5 )
  {
    result = a1[2];
    v4[1774] = result;
  }
  else
  {
    for ( i = (_QWORD *)v5[2]; a1 != i; i = (_QWORD *)i[2] )
      v5 = i;
    result = i[2];
    v5[2] = result;
  }
  return result;
}
