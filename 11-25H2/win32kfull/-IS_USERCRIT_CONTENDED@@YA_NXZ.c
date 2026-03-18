/*
 * XREFs of ?IS_USERCRIT_CONTENDED@@YA_NXZ @ 0x1402EA4C8
 * Callers:
 *     MNAnimate @ 0x140045C18 (MNAnimate.c)
 * Callees:
 *     <none>
 */

bool __fastcall IS_USERCRIT_CONTENDED(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  return (unsigned __int8)ExIsFastResourceContended(*UserSessionState) != 0;
}
