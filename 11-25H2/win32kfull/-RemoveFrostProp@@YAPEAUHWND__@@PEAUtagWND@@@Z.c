/*
 * XREFs of ?RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x14026E4E4
 * Callers:
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401809E0 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401813E0 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AEE5C (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x14005BEB0 (InternalRemoveProp.c)
 */

__int64 __fastcall RemoveFrostProp(struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 1378LL), 1u);
}
