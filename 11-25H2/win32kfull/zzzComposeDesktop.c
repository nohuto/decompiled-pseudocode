/*
 * XREFs of zzzComposeDesktop @ 0x140171BD8
 * Callers:
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B4DB4 (-zzzDwmStartRedirection@@YAJXZ.c)
 * Callees:
 *     GreUpdateSpriteVisRgn @ 0x14001BBB0 (GreUpdateSpriteVisRgn.c)
 *     IsWindowContentProtected @ 0x14001D640 (IsWindowContentProtected.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14004B110 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14004BB78 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     ComposeWindow @ 0x14004D908 (ComposeWindow.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x14005BBA4 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x14005C540 (IsWindowBeingDestroyed.c)
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x14005D148 (-FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ.c)
 *     GreZorderSprite @ 0x14008FC58 (GreZorderSprite.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x140122E34 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140122EA8 (GreRemoveDisplayDriverRealizations.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x140123714 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?ReNotifyDwm@CHwndBitmapProp@@SAXPEAUtagWND@@@Z @ 0x140172168 (-ReNotifyDwm@CHwndBitmapProp@@SAXPEAUtagWND@@@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x140172248 (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x140172684 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     MapDesktop @ 0x140172F80 (MapDesktop.c)
 *     MagpComposeDesktop @ 0x14017324C (MagpComposeDesktop.c)
 *     DwmAsyncShellWindowChange @ 0x14017346C (DwmAsyncShellWindowChange.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x14019F480 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x140227DE8 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1402C0AA0 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct tagWND *v18; // rcx
  struct tagWND *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  void *v29; // rax
  struct tagWND *NextLayeredWindow; // r12
  int v31; // eax
  HWND v32; // rdi
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // edi
  __int64 v38; // rbx
  __int64 v39; // rbx
  struct tagDESKTOP *v40; // rax
  struct tagDESKTOP *v41; // rax
  int v42; // eax
  int v43; // eax
  struct tagWND *v44; // rcx
  void *v45; // rax
  __int64 v46; // rbx
  __int64 v47; // r9
  struct tagWND *v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  HDC v56; // rdi
  __int64 **v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rax
  _QWORD v61[5]; // [rsp+40h] [rbp-30h] BYREF
  int v62; // [rsp+68h] [rbp-8h]
  int v63; // [rsp+6Ch] [rbp-4h]
  CVisRgnTrackerProp *v64; // [rsp+A0h] [rbp+30h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *((_QWORD *)a1 + 1);
  v5 = UserSessionState;
  v6 = *(_DWORD *)(*(_QWORD *)v4 + 64LL);
  if ( (v6 & 1) != 0 )
    return 0;
  *(_DWORD *)(*(_QWORD *)v4 + 64LL) = v6 | 1;
  v7 = ReferenceDwmProcess();
  v8 = v7;
  if ( v7 )
  {
    v61[0] = 0LL;
    v61[1] = 0LL;
    v61[2] = 1LL;
    v61[3] = v7;
    v61[4] = a1;
    v62 = 0;
    v63 = 1;
    if ( (int)MapDesktop(v61) < 0 )
    {
      SetLastNtError(-1073741790);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
      DereferenceDwmProcess(v8);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v8);
  }
  v9 = DCompositionDwmInitialize();
  v11 = *((_QWORD *)a1 + 1);
  v12 = v9;
  if ( v9 < 0 )
  {
    *(_DWORD *)(*(_QWORD *)v11 + 64LL) &= ~1u;
    return 3221225473LL;
  }
  v13 = W32GetUserSessionState(v11, v10);
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(*(_QWORD *)(v13 + 56968) + 48LL)) )
  {
    v12 = -1073741823;
LABEL_8:
    v16 = (_QWORD *)*((_QWORD *)a1 + 1);
    if ( v12 >= 0 )
    {
      v18 = (struct tagWND *)v16[3];
      v19 = (struct tagWND *)*((_QWORD *)v18 + 14);
      if ( v19 )
      {
        do
        {
          NextLayeredWindow = v19;
          v19 = (struct tagWND *)*((_QWORD *)v19 + 14);
        }
        while ( v19 );
        if ( NextLayeredWindow != v18 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)NextLayeredWindow + 5) + 26LL) & 8) != 0 )
            goto LABEL_21;
          while ( 1 )
          {
            NextLayeredWindow = GetNextLayeredWindow(NextLayeredWindow);
            if ( !NextLayeredWindow )
              break;
LABEL_21:
            v31 = IsWindowDesktopComposed(NextLayeredWindow);
            v32 = *(HWND *)NextLayeredWindow;
            v33 = v31;
            v36 = W32GetUserSessionState(v35, v34);
            GreZorderSprite(*(Gre::Base **)(*(_QWORD *)(v36 + 56968) + 48LL), v32, 0LL, v33);
          }
        }
      }
      v20 = W32GetUserSessionState(v18, v14);
      MagpComposeDesktop(v20 + 66040, a1);
      BroadcastCompositionChange(a1);
    }
    else
    {
      *(_DWORD *)(*v16 + 64LL) &= ~1u;
    }
    v21 = W32GetUserSessionState(v15, v14);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v21 + 56968) + 48LL));
    v24 = W32GetUserSessionState(v23, v22);
    GreUpdateSpriteVisRgn(*(Gre::Base **)(*(_QWORD *)(v24 + 56968) + 48LL), 0);
    v27 = W32GetUserSessionState(v26, v25);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v27 + 56968) + 48LL));
    if ( v12 >= 0 )
    {
      v29 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 1), v28);
      DwmAsyncShellWindowChange(v29);
    }
    return (unsigned int)v12;
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) )
  {
    v37 = 0;
    W32GetUserSessionState(v15, v14);
    while ( 1 )
    {
      v38 = *(_QWORD *)(v5 + 19888) + 32LL * v37;
      v15 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19832);
      if ( *(_BYTE *)(v38 + 24) == 1 )
      {
        v39 = *(_QWORD *)(v15 + 40LL * v37);
        v40 = *(struct tagDESKTOP **)(v39 + 24);
        if ( v40 )
        {
          if ( v40 == a1
            && !(unsigned int)IsWindowBeingDestroyed(*(_QWORD *)(v15 + 40LL * v37))
            && (*(_BYTE *)(*(_QWORD *)(v39 + 40) + 31LL) & 0x10) != 0 )
          {
            if ( IsTopLevelWindow(v39) || (LOBYTE(v42) = IsDesktopWindow(v39), v42) )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v39 + 40) + 31LL) & 1) != 0 )
                PostEventMessageEx(
                  *(struct tagTHREADINFO **)(v39 + 16),
                  *(struct tagQ **)(*(_QWORD *)(v39 + 16) + 472LL),
                  0x10u,
                  (LARGE_INTEGER *)v39,
                  0,
                  0LL,
                  0LL,
                  0LL);
              LOBYTE(v43) = IsDesktopWindow(v39);
              v12 = ComposeWindow(v44, v43 != 0 ? 5 : 1);
              if ( v12 < 0 )
                break;
            }
          }
        }
        if ( (unsigned int)IsWindowContentProtected(v39, v14) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v39 + 40) + 27LL) & 0x20) == 0 )
            ComposeWindowIfNeeded((struct tagWND *)v39);
          ChangeWindowTreeProtection((struct tagWND *)v39, 1u);
        }
        v41 = *(struct tagDESKTOP **)(v39 + 24);
        if ( v41 && v41 == a1 && !(unsigned int)IsWindowBeingDestroyed(v39) )
        {
          CHwndTargetProp::ReNotifyDwm((struct tagWND *)v39);
          CHwndBitmapProp::ReNotifyDwm((struct tagWND *)v39);
          if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
            || (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
          {
            v64 = 0LL;
            if ( (unsigned int)CWindowProp::GetProp<CSwapChainProp>(v39, &v64) )
              CSwapChainProp::NotifyDwm(v64, (struct tagWND *const)v39);
          }
          v64 = 0LL;
          if ( (unsigned int)CWindowProp::GetProp<CVisRgnTrackerProp>(v39, (__int64 *)&v64) )
          {
            CVisRgnTrackerProp::FreeTrackedRegions(v64);
            CVisRgnTrackerProp::MarkDirty(v64);
          }
        }
        if ( v12 < 0 )
          break;
      }
      if ( ++v37 > *(_DWORD *)(W32GetUserSessionState(v15, v14) + 19816) )
      {
        if ( v12 >= 0 )
          goto LABEL_8;
        break;
      }
    }
    while ( v37 <= *(_DWORD *)(W32GetUserSessionState(v15, v14) + 19816) )
    {
      v46 = *(_QWORD *)(v5 + 19888) + 32LL * v37;
      v47 = *(_QWORD *)(W32GetUserSessionState(v50, v49) + 19832);
      if ( *(_BYTE *)(v46 + 24) == 1 && IsWindowComposedOnDesktop(*(struct tagWND *const *)(v47 + 40LL * v37), a1) )
        ComposeWindow(v48, 2);
      --v37;
    }
    v51 = W32GetUserSessionState(v50, v49);
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(*(_QWORD *)(v51 + 56968) + 48LL), v52, v53);
    zzzEnableDwmPointerSupport(0LL, 0LL);
    v56 = *(HDC *)(W32GetUserSessionState(v55, v54) + 43248);
    v57 = (__int64 **)*((_QWORD *)a1 + 1);
    v58 = **v57;
    v60 = W32GetUserSessionState(*v57, v59);
    GreTransferDwmStateToSpriteState(*(Gre::Base **)(*(_QWORD *)(v60 + 56968) + 48LL), v58, v56);
    goto LABEL_8;
  }
  v45 = (void *)ReferenceDwmApiPort(v15, v14);
  DwmAsyncShellWindowChange(v45);
  return 0LL;
}
