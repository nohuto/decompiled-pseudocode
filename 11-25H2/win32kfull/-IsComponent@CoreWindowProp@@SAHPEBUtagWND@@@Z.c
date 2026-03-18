/*
 * XREFs of ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14001D970
 * Callers:
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14002160C (-GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140024198 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x14005FFA8 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z @ 0x14011AD5C (-SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     ?IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z @ 0x14015BC30 (-IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14015BC98 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ValidateHwndIAMComponetUIAware @ 0x14015C728 (ValidateHwndIAMComponetUIAware.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14015D3E4 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1401D4008 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x14021480C (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x140214894 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x14024E5B0 (NtUserSetWindowCompositionAttribute.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1402C9EF4 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall CoreWindowProp::IsComponent(const struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  tagObjLock **v13; // rdi
  int v14; // esi
  __int64 Prop; // rbx
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  char v17; // [rsp+40h] [rbp-28h]
  char v18; // [rsp+48h] [rbp-20h]

  if ( !a1 || (*((_DWORD *)a1 + 95) & 0x1000) == 0 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *((_QWORD *)a1 + 18);
  v6 = *(unsigned __int16 *)(UserSessionState + 42254);
  v17 = 0;
  W32GetUserSessionState(v8, v7);
  v16 = 0LL;
  v18 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v18 = 1;
    v11 = W32GetUserSessionState(v10, v9);
    v12 = 0LL;
    if ( v5 != v11 + 42456 )
      v12 = v5;
    *(_QWORD *)&v16 = v12;
    v13 = (tagObjLock **)&v16;
    v14 = 0;
    do
    {
      if ( *v13 )
        tagObjLock::LockExclusive(*v13);
      ++v14;
      ++v13;
    }
    while ( !v14 );
    v17 = 1;
  }
  Prop = RealGetProp(*((_QWORD *)a1 + 18), v6, 1LL);
  if ( v17 && v18 )
  {
    if ( (_QWORD)v16 )
      tagObjLock::UnLockExclusive((tagObjLock *)v16);
    v17 = 0;
  }
  if ( Prop )
    return *(unsigned int *)(Prop + 28);
  else
    return 0LL;
}
