/*
 * XREFs of ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402AE8D8
 * Callers:
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AEE5C (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14001EF1C (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     InternalSetProp @ 0x14005BFA8 (InternalSetProp.c)
 */

__int64 __fastcall SetFrostProp(struct tagWND *a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax

  v4 = 0;
  if ( !GetFrostProp(a1, a2) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    return (unsigned int)InternalSetProp(
                           (__int64)a1,
                           *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 1378LL),
                           a2,
                           5u);
  }
  return v4;
}
