/*
 * XREFs of ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140038F00
 * Callers:
 *     UserVisrgnFromHwnd @ 0x140037FA0 (UserVisrgnFromHwnd.c)
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x14004DB50 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     DWP_GetEnabledPopup @ 0x1401AF13C (DWP_GetEnabledPopup.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1401DA998 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1401E8B50 (NtUserGhostWindowFromHungWindow.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 */

struct tagWND *__fastcall _GhostWindowFromHungWindow(const struct tagWND *a1)
{
  __int64 v2; // rdi
  __int16 *v3; // rdx
  __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // esi
  tagObjLock **v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 Prop; // rsi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // esi
  tagObjLock **v36; // rbx
  bool v37; // zf
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 *v49; // r14
  __int128 v50; // [rsp+30h] [rbp-50h] BYREF
  char v51; // [rsp+40h] [rbp-40h]
  char v52; // [rsp+48h] [rbp-38h]
  __int64 v53; // [rsp+50h] [rbp-30h]
  char v54; // [rsp+58h] [rbp-28h]
  __int128 v55; // [rsp+60h] [rbp-20h] BYREF
  char v56; // [rsp+70h] [rbp-10h]
  char v57; // [rsp+78h] [rbp-8h]

  v2 = 0LL;
  v3 = *(__int16 **)(*((_QWORD *)a1 + 17) + 8LL);
  v4 = *v3;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, v3) + 19904);
  if ( v4 != *(_WORD *)(v5 + 900) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    v8 = *((_QWORD *)a1 + 18);
    v9 = *(_QWORD *)(UserSessionState + 19904);
    v10 = *(unsigned __int16 *)(v9 + 900);
    v51 = 0;
    W32GetUserSessionState(v9, v11);
    v50 = 0LL;
    v52 = 0;
    if ( (unsigned int)GET_USERCRIT_DISPOSITION(v13, v12) == 1 )
    {
      v52 = 1;
      v16 = W32GetUserSessionState(v15, v14);
      v17 = 0LL;
      if ( v8 != v16 + 42480 )
        v17 = v8;
      *(_QWORD *)&v50 = v17;
      v18 = 0;
      v19 = (tagObjLock **)&v50;
      do
      {
        if ( *v19 )
          tagObjLock::LockExclusive(*v19);
        ++v18;
        ++v19;
      }
      while ( !v18 );
      v51 = 1;
    }
    Prop = RealGetProp(*((_QWORD *)a1 + 18), v10, 1LL);
    if ( v51 && v52 )
    {
      v21 = v50;
      if ( (_QWORD)v50 )
        tagObjLock::UnLockExclusive((tagObjLock *)v50);
      v51 = 0;
    }
    if ( Prop )
    {
      v37 = Prop == -1;
    }
    else
    {
      v23 = W32GetUserSessionState(v21, v20);
      v24 = *((_QWORD *)a1 + 18);
      v25 = *(_QWORD *)(v23 + 19904);
      v26 = *(unsigned __int16 *)(v25 + 1378);
      v28 = W32GetUserSessionState(v25, v27);
      v54 = 0;
      v56 = 0;
      v53 = v28 + 42384;
      v55 = 0LL;
      v57 = 0;
      if ( (unsigned int)GET_USERCRIT_DISPOSITION(v30, v29) == 1 )
      {
        v57 = 1;
        v33 = W32GetUserSessionState(v32, v31);
        v34 = 0LL;
        if ( v24 != v33 + 42480 )
          v34 = v24;
        *(_QWORD *)&v55 = v34;
        if ( !v56 )
        {
          v35 = 0;
          v36 = (tagObjLock **)&v55;
          do
          {
            if ( *v36 )
              tagObjLock::LockExclusive(*v36);
            ++v35;
            ++v36;
          }
          while ( !v35 );
          v56 = 1;
        }
      }
      Prop = RealGetProp(*((_QWORD *)a1 + 18), v26, 1LL);
      if ( v56 && v57 )
      {
        v21 = v55;
        if ( (_QWORD)v55 )
          tagObjLock::UnLockExclusive((tagObjLock *)v55);
        v56 = 0;
      }
      v37 = Prop == 0;
    }
    if ( !v37 )
    {
      PsGetCurrentThreadWin32Thread(v21);
      v42 = *(_QWORD *)(W32GetUserSessionState(v40, v39) + 19904);
      if ( (unsigned __int64)(unsigned __int16)Prop < *(_QWORD *)(v42 + 8) )
      {
        v43 = W32GetUserSessionState(v42, v41);
        v46 = *(_DWORD *)(W32GetUserSessionState(v45, v44) + 19928) * (unsigned int)(unsigned __int16)Prop
            + *(_QWORD *)(v43 + 19920);
        v49 = (__int64 *)HMPkheFromPhe(v46);
        LOWORD(Prop) = WORD1(Prop) & 0x7FFF;
        if ( ((WORD1(Prop) & 0x7FFF) == *(_WORD *)(v46 + 26)
           || (_WORD)Prop == 0x7FFF
           || !(_WORD)Prop && PsGetCurrentProcessWow64Process(v48, v47))
          && (*(_BYTE *)(v46 + 25) & 1) == 0 )
        {
          if ( *(_BYTE *)(v46 + 24) != 1 )
            return (struct tagWND *)v2;
          v2 = *v49;
        }
      }
      if ( v2 && (unsigned int)IsWindowBeingDestroyed(v2) )
        return 0LL;
    }
  }
  return (struct tagWND *)v2;
}
