/*
 * XREFs of ?SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z @ 0x1402B786C
 * Callers:
 *     SetDesktopPattern @ 0x1400E4610 (SetDesktopPattern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetGlobalDesktopPattern(HBITMAP a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax

  v3 = 0;
  if ( a1 != *(HBITMAP *)(W32GetUserSessionState(a1, a2) + 62800) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 62800) )
    {
      UserSessionState = W32GetUserSessionState(v7, v6);
      GreDeleteObject(*(_QWORD *)(UserSessionState + 62800));
    }
    if ( a1 )
      GreSetBitmapOwner(a1, 0LL);
    v3 = 1;
    *(_QWORD *)(W32GetUserSessionState(v7, v6) + 62800) = a1;
  }
  return v3;
}
