/*
 * XREFs of ?UnInitialize@CCursorClip@@SAJXZ @ 0x1400CF254
 * Callers:
 *     UnInitializeInputComponents @ 0x1400CEE88 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CCursorClip@@AEAA@XZ @ 0x1400CFA3C (--1CCursorClip@@AEAA@XZ.c)
 */

__int64 __fastcall CCursorClip::UnInitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rbx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36240) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    v7 = *(char **)(UserSessionState + 36240);
    if ( v7 )
    {
      CCursorClip::~CCursorClip(*(CCursorClip **)(UserSessionState + 36240));
      GreDeleteFastMutex(v7);
    }
    *(_QWORD *)(W32GetUserSessionState(v6, v5) + 36240) = 0LL;
  }
  return 0LL;
}
