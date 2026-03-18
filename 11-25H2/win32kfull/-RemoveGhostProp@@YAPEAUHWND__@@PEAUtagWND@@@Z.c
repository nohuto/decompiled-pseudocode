/*
 * XREFs of ?RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x140181470
 * Callers:
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401809E0 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401813E0 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x14019CC50 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1402AE980 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x14005BEB0 (InternalRemoveProp.c)
 */

__int64 __fastcall RemoveGhostProp(struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 900LL), 1u);
}
