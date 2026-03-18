/*
 * XREFs of zzzUpdateLayeredWindow @ 0x14005335C
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x140051B10 (NtUserUpdateLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     zzzUpdateShadowAlpha @ 0x1400E12FC (zzzUpdateShadowAlpha.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400E1A4C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1401E9B50 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     zzzMoveShadow @ 0x140220F8C (zzzMoveShadow.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     GreClientRgnUpdated @ 0x14001B35C (GreClientRgnUpdated.c)
 *     GreUpdateSpriteVisRgn @ 0x14001BBB0 (GreUpdateSpriteVisRgn.c)
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     DwmChildRectChange @ 0x140036870 (DwmChildRectChange.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x140053B74 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     GetRedirectionFlags @ 0x140053D08 (GetRedirectionFlags.c)
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x140058298 (UnsetRedirectedWindow.c)
 *     OffsetChildren @ 0x14005B830 (OffsetChildren.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14005DC60 (DeleteOrSetRedirectionBitmap.c)
 *     UpdateSprite @ 0x14007B8E4 (UpdateSprite.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     InvalidateGDIWindows @ 0x14026E8E4 (InvalidateGDIWindows.c)
 *     ?IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z @ 0x14026EA44 (-IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1402876B4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        WindowActions *this,
        __int64 a2,
        const struct tagPOINT *a3,
        const struct tagSIZE *a4,
        HDC a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v10; // rax
  HBITMAP v11; // rdi
  __int128 v15; // xmm1
  __int64 v16; // rdx
  char v17; // si
  __int64 v18; // rcx
  char RedirectionFlags; // al
  const struct tagWND *v20; // rdx
  unsigned int v21; // r15d
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r14d
  HDC v29; // r12
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int updated; // r12d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // edi
  __int64 v39; // rdx
  __int64 v40; // rcx
  bool v41; // r14
  __int64 UserSessionState; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  int v52; // [rsp+68h] [rbp-39h] BYREF
  __int64 v53; // [rsp+70h] [rbp-31h] BYREF
  __int64 RedirectionBitmap; // [rsp+78h] [rbp-29h]
  __int128 v55; // [rsp+80h] [rbp-21h]
  __int128 v56; // [rsp+90h] [rbp-11h]
  int v57; // [rsp+E8h] [rbp+47h] BYREF
  __int64 v58; // [rsp+F0h] [rbp+4Fh]
  struct tagPOINT *v59; // [rsp+F8h] [rbp+57h]
  struct tagSIZE *v60; // [rsp+100h] [rbp+5Fh]

  v60 = (struct tagSIZE *)a4;
  v59 = (struct tagPOINT *)a3;
  v58 = a2;
  v10 = *((_QWORD *)this + 5);
  v11 = 0LL;
  v57 = 0;
  v52 = 0;
  v53 = 0LL;
  v15 = *(_OWORD *)(v10 + 104);
  v55 = *(_OWORD *)(v10 + 88);
  v56 = v15;
  W32GetUserSessionState(this, a2);
  v17 = 1;
  if ( (unsigned int)IsWindowDesktopComposed(this) && (*((_DWORD *)this + 95) & 0x8000) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 27LL) & 0x20) != 0 )
      UnsetRedirectedWindow(this);
    *((_DWORD *)this + 95) &= ~0x8000u;
  }
  v18 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v18 + 26) & 8) == 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v18 + 232) & 2) != 0 )
    return 3221225485LL;
  RedirectionBitmap = GetRedirectionBitmap((__int64)this, v16);
  RedirectionFlags = GetRedirectionFlags(this);
  if ( RedirectionBitmap )
  {
    if ( (RedirectionFlags & 8) == 0 )
      return 3221225485LL;
  }
  v21 = a9;
  v22 = a9 & 8;
  if ( (a9 & 8) != 0 || WindowActions::IsInterceptWindow(this, v20) )
  {
    LOBYTE(v20) = a4
               && ((v20 = (const struct tagWND *)*((_QWORD *)this + 5),
                    a4->cx != *((_DWORD *)v20 + 24) - *((_DWORD *)v20 + 22))
                || a4->cy != *((_DWORD *)v20 + 25) - *((_DWORD *)v20 + 23));
    if ( v22 )
    {
      if ( (_BYTE)v20 )
      {
        UserSetLastError(1462);
        return 2151546881LL;
      }
      v21 &= ~8u;
    }
    if ( WindowActions::IsInterceptWindow(this, v20) )
    {
      if ( (_BYTE)v39
        || a3 && ((v40 = *((_QWORD *)this + 5), a3->x != *(_DWORD *)(v40 + 88)) || a3->y != *(_DWORD *)(v40 + 92)) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v17 = 0;
        }
        v41 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v39);
          LOBYTE(v43) = v41;
          LOBYTE(v44) = v17;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v44,
            v43,
            *(_QWORD *)(UserSessionState + 69160),
            3,
            4,
            10,
            (__int64)&WPP_6d10b4c26386318284d747cce75ed676_Traceguids,
            (char)this);
        }
        return 3221225485LL;
      }
    }
  }
  UpdateWindowRects(this, a3, a4, &v57, &v52);
  if ( RedirectionBitmap )
  {
    if ( v57 )
    {
      v51 = RecreateRedirectionBitmap(this, 0, (__int64)&v53);
      v11 = (HBITMAP)v53;
      updated = v51;
      if ( v51 < 0 )
        goto LABEL_53;
    }
  }
  v25 = W32GetUserSessionState(v24, v23);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v25 + 56968) + 48LL));
  v28 = v52;
  if ( v57 || v52 )
  {
    if ( (unsigned int)IsWindowDesktopComposed(this) )
    {
      DwmChildRectChange(this);
      DirtyVisRgnTrackers(this, v47);
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v46, v45) + 43272) )
    {
      InvalidateGDIWindows(this);
      GreClientRgnUpdated((Gre::Base *)1);
    }
    v50 = W32GetUserSessionState(v49, v48);
    GreUpdateSpriteVisRgn(*(Gre::Base **)(*(_QWORD *)(v50 + 56968) + 48LL), 0);
  }
  v29 = a5;
  if ( a5 )
    v21 |= 0x20000000u;
  v30 = W32GetUserSessionState(v27, v26);
  updated = UpdateSprite(*(HDEV *)(*(_QWORD *)(v30 + 56968) + 48LL), this, v59, v60, v29, a6, a7, a8, v21, a10);
  if ( updated >= 0 && v28 )
    OffsetChildren(this);
  v34 = W32GetUserSessionState(v32, v31);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v34 + 56968) + 48LL));
  if ( updated < 0 )
  {
LABEL_53:
    *(_OWORD *)(*((_QWORD *)this + 5) + 88LL) = v55;
    *(_OWORD *)(*((_QWORD *)this + 5) + 104LL) = v56;
    if ( v11 && !(unsigned int)RestoreOldRedirectionBitmap(this, v11) )
      DeleteOrSetRedirectionBitmap(this, v11, 1LL);
  }
  else
  {
    if ( v11 )
      DeleteOrSetRedirectionBitmap(this, v11, 1LL);
    if ( v57 || v28 )
      GenerateMouseMove(0LL);
    if ( (v21 & 0x20) == 0 || v57 || v28 )
    {
      v37 = 3;
      if ( !*(_DWORD *)(W32GetUserSessionState(v36, v35) + 70600) )
        v37 = 1;
      xxxWindowEvent(0x800Bu, this, 0, 0, v37);
    }
  }
  return (unsigned int)updated;
}
