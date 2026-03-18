/*
 * XREFs of _SetBrokeredForeground @ 0x140230CD8
 * Callers:
 *     NtUserSetBrokeredForeground @ 0x140221650 (NtUserSetBrokeredForeground.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     InternalSetProp @ 0x14005BFA8 (InternalSetProp.c)
 */

__int64 __fastcall SetBrokeredForeground(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax

  v3 = PtiCurrent(a1, a2);
  UserSessionState = W32GetUserSessionState(v5, v4);
  return InternalSetProp(a1, *(unsigned __int16 *)(UserSessionState + 41354), (__int64)v3, 5u);
}
