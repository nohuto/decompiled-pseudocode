/*
 * XREFs of ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x140264534
 * Callers:
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x140258990 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1402CA90C (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14002367C (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 */

__int64 __fastcall SetGhostProp(struct tagWND *a1, HWND a2)
{
  unsigned int v4; // ebx
  __int64 GhostProp; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax

  v4 = 0;
  GhostProp = GetGhostProp(a1, (__int64)a2);
  if ( !GhostProp || GhostProp == -1 && a2 != (HWND)-1LL )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    return (unsigned int)InternalSetProp(
                           (__int64)a1,
                           *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 900LL),
                           (__int64)a2,
                           5u);
  }
  return v4;
}
