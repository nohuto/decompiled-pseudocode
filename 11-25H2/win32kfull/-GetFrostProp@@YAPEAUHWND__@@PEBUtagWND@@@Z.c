/*
 * XREFs of ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14001EF1C
 * Callers:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x14001ED60 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x14014C01C (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x140181368 (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1401B681C (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402AE8D8 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1402AEBB0 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1402AECDC (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AEE5C (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GetFrostProp(const struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edi
  tagObjLock **v13; // rbx
  __int64 Prop; // rbx
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  char v17; // [rsp+40h] [rbp-20h]
  char v18; // [rsp+48h] [rbp-18h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *((_QWORD *)a1 + 18);
  v5 = *(_QWORD *)(UserSessionState + 19872);
  v6 = *(unsigned __int16 *)(v5 + 1378);
  v17 = 0;
  W32GetUserSessionState(v7, v5);
  v16 = 0LL;
  v18 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v18 = 1;
    v10 = W32GetUserSessionState(v9, v8);
    v11 = 0LL;
    if ( v4 != v10 + 42456 )
      v11 = v4;
    *(_QWORD *)&v16 = v11;
    v12 = 0;
    v13 = (tagObjLock **)&v16;
    do
    {
      if ( *v13 )
        tagObjLock::LockExclusive(*v13);
      ++v12;
      ++v13;
    }
    while ( !v12 );
    v17 = 1;
  }
  Prop = RealGetProp(*((_QWORD *)a1 + 18), v6, 1LL);
  if ( v17 && v18 && (_QWORD)v16 )
    tagObjLock::UnLockExclusive((tagObjLock *)v16);
  return Prop;
}
