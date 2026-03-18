/*
 * XREFs of ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x14001D2DC
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x14001BBB0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UserVisrgnFromHwnd @ 0x140033A34 (UserVisrgnFromHwnd.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1400381B0 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x14018718C (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1401B39F0 (NtUserGhostWindowFromHungWindow.c)
 *     DWP_GetEnabledPopup @ 0x1401CB488 (DWP_GetEnabledPopup.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     IsWindowBeingDestroyed @ 0x14005C540 (IsWindowBeingDestroyed.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct tagWND *__fastcall _GhostWindowFromHungWindow(const struct tagWND *a1)
{
  __int64 v2; // rsi
  __int16 v3; // bx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  int v11; // edi
  tagObjLock **v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 Prop; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // edi
  tagObjLock **v27; // rbx
  bool v28; // zf
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 *v40; // r14
  __int128 v41; // [rsp+30h] [rbp-29h] BYREF
  char v42; // [rsp+40h] [rbp-19h]
  char v43; // [rsp+48h] [rbp-11h]
  __int64 v44; // [rsp+50h] [rbp-9h]
  char v45; // [rsp+58h] [rbp-1h]
  __int128 v46; // [rsp+60h] [rbp+7h] BYREF
  char v47; // [rsp+70h] [rbp+17h]
  char v48; // [rsp+78h] [rbp+1Fh]

  v2 = 0LL;
  v3 = **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
  if ( v3 != *(_WORD *)(*(_QWORD *)(((__int64 (*)(void))W32GetUserSessionState)() + 19872) + 900LL) )
  {
    v4 = ((__int64 (*)(void))W32GetUserSessionState)();
    v5 = *((_QWORD *)a1 + 18);
    v6 = *(unsigned __int16 *)(*(_QWORD *)(v4 + 19872) + 900LL);
    v42 = 0;
    ((__int64 (*)(void))W32GetUserSessionState)();
    v41 = 0LL;
    v43 = 0;
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
    {
      v43 = 1;
      UserSessionState = W32GetUserSessionState(v8, v7);
      v10 = 0LL;
      if ( v5 != UserSessionState + 42456 )
        v10 = v5;
      *(_QWORD *)&v41 = v10;
      v11 = 0;
      v12 = (tagObjLock **)&v41;
      do
      {
        if ( *v12 )
          tagObjLock::LockExclusive(*v12);
        ++v11;
        ++v12;
      }
      while ( !v11 );
      v42 = 1;
    }
    Prop = RealGetProp(*((_QWORD *)a1 + 18), v6, 1LL);
    if ( v42 && v43 )
    {
      v14 = v41;
      if ( (_QWORD)v41 )
        tagObjLock::UnLockExclusive((tagObjLock *)v41);
      v42 = 0;
    }
    if ( Prop )
    {
      v28 = Prop == -1;
    }
    else
    {
      v16 = W32GetUserSessionState(v14, v13);
      v17 = *((_QWORD *)a1 + 18);
      v18 = *(_QWORD *)(v16 + 19872);
      v19 = *(unsigned __int16 *)(v18 + 1378);
      v21 = W32GetUserSessionState(v18, v20);
      v45 = 0;
      v47 = 0;
      v44 = v21 + 42360;
      v46 = 0LL;
      v48 = 0;
      if ( IS_USERCRIT_OWNED_SHAREDONLY() )
      {
        v48 = 1;
        v24 = W32GetUserSessionState(v23, v22);
        v25 = 0LL;
        if ( v17 != v24 + 42456 )
          v25 = v17;
        *(_QWORD *)&v46 = v25;
        if ( !v47 )
        {
          v26 = 0;
          v27 = (tagObjLock **)&v46;
          do
          {
            if ( *v27 )
              tagObjLock::LockExclusive(*v27);
            ++v26;
            ++v27;
          }
          while ( !v26 );
          v47 = 1;
        }
      }
      Prop = RealGetProp(*((_QWORD *)a1 + 18), v19, 1LL);
      if ( v47 && v48 )
      {
        v14 = v46;
        if ( (_QWORD)v46 )
          tagObjLock::UnLockExclusive((tagObjLock *)v46);
        v47 = 0;
      }
      v28 = Prop == 0;
    }
    if ( !v28 )
    {
      W32GetCurrentThreadNonPaged(v14, v13);
      v33 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19872);
      if ( (unsigned __int64)(unsigned __int16)Prop < *(_QWORD *)(v33 + 8) )
      {
        v34 = W32GetUserSessionState(v33, v32);
        v37 = *(_DWORD *)(W32GetUserSessionState(v36, v35) + 19896) * (unsigned int)(unsigned __int16)Prop
            + *(_QWORD *)(v34 + 19888);
        v40 = (__int64 *)HMPkheFromPhe(v37);
        LOWORD(Prop) = WORD1(Prop) & 0x7FFF;
        if ( ((WORD1(Prop) & 0x7FFF) == *(_WORD *)(v37 + 26)
           || (_WORD)Prop == 0x7FFF
           || !(_WORD)Prop && PsGetCurrentProcessWow64Process(v39, v38))
          && (*(_BYTE *)(v37 + 25) & 1) == 0
          && *(_BYTE *)(v37 + 24) == 1 )
        {
          v2 = *v40;
        }
      }
      if ( v2 && (unsigned int)IsWindowBeingDestroyed(v2) )
        return 0LL;
    }
  }
  return (struct tagWND *)v2;
}
