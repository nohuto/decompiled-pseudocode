/*
 * XREFs of ?RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x1401B8ED8
 * Callers:
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401B8D74 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401B8E04 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x140258990 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1402CA90C (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 */

__int64 __fastcall RemoveGhostProp(struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 900LL), 1u);
}
