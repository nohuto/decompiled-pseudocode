/*
 * XREFs of ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x140058F0C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxShowOwnedWindows @ 0x14018786C (xxxShowOwnedWindows.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1401CF77C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1401DB0A4 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x140222B10 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14025542C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x14026BDFC (xxxMinimizeHungWindow.c)
 *     zzzActiveCursorTracking @ 0x14028203C (zzzActiveCursorTracking.c)
 *     xxxCreateWindowStation @ 0x14028CAA0 (xxxCreateWindowStation.c)
 *     NtUserSetVisible @ 0x1402A05B0 (NtUserSetVisible.c)
 * Callees:
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14004B110 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x1400586A4 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?IsTopLevelUnownedWindowWithCaption@@YA_NPEBUtagWND@@@Z @ 0x14005A864 (-IsTopLevelUnownedWindowWithCaption@@YA_NPEBUtagWND@@@Z.c)
 *     ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x14005A898 (-IncVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     IncCompositedVisWindows @ 0x14005A968 (IncCompositedVisWindows.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1401C8208 (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 *     _IsWindowVisible @ 0x1401D72AC (_IsWindowVisible.c)
 *     ?TraceLoggingFirstMainWindowShownForProcess@@YAXPEBUtagWND@@@Z @ 0x1401E5C00 (-TraceLoggingFirstMainWindowShownForProcess@@YAXPEBUtagWND@@@Z.c)
 *     CalcWindowFullScreen @ 0x1401F3F0C (CalcWindowFullScreen.c)
 *     RemoveWindowFullScreen @ 0x14021536C (RemoveWindowFullScreen.c)
 *     DecrementCompositedCount @ 0x14028796C (DecrementCompositedCount.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x1402D3C1C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 */

char __fastcall SetVisible(__int64 a1, unsigned int a2)
{
  char v4; // di
  __int64 v5; // rdx
  int v7; // ebp
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // bp
  bool v11; // r14
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rdx
  char v16; // bp
  bool v17; // r14
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx

  v4 = 0;
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
        return v4;
      if ( (*(_DWORD *)(a1 + 380) & 4) != 0 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
          || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v10 = 0;
        }
        v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
          LOBYTE(v13) = v11;
          LOBYTE(v14) = v10;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v14,
            v13,
            *(_QWORD *)(UserSessionState + 69160),
            4,
            12,
            18,
            (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
            a1);
        }
        zzzUpdateWindowCompositionCloak(a1, 0LL, 2LL);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
          || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v16 = 0;
        }
        v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v15);
          LOBYTE(v19) = v17;
          LOBYTE(v20) = v16;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v20,
            v19,
            *(_QWORD *)(v18 + 69160),
            4,
            12,
            19,
            (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
            a1);
        }
        *(_DWORD *)(a1 + 380) &= ~4u;
      }
      SetOrClrWF(1, (struct tagWND *)a1, 0xF10u, 1);
      SetOrClrWF(((a2 >> 4) & 1) == 0, (struct tagWND *)a1, 0x908u, 1);
      IncVisWindows((struct tagWND *)a1);
      IncCompositedVisWindows(a1);
      if ( (a2 & 4) == 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded((struct tagWND *)a1);
      if ( (a2 & 8) == 0 )
        CalcWindowFullScreen((struct tagWND *)a1);
      if ( IsTrayWindow((_QWORD *)a1, 1LL) )
        PostIAMShellHookMessage(0x11u, *(_QWORD *)a1);
      if ( IsTopLevelUnownedWindowWithCaption((const struct tagWND *)a1) )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL);
        v9 = *(_QWORD *)(v8 + 808);
        if ( (v9 & 0x20000000) == 0 )
        {
          *(_QWORD *)(v8 + 808) = v9 | 0x20000000;
          TraceLoggingFirstMainWindowShownForProcess((const struct tagWND *)a1);
        }
      }
    }
    else
    {
      if ( (a2 & 2) != 0 )
        ClrFTrueVis((struct tagWND *)a1);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) == 0 )
        return v4;
      if ( !IsTrayWindow((_QWORD *)a1, 1LL) || (v7 = 1, !(unsigned int)IsWindowVisible(a1)) )
        v7 = 0;
      SetOrClrWF(0, (struct tagWND *)a1, 0xF10u, 1);
      if ( (a2 & 0x10) != 0 )
      {
        SetOrClrWF(1, (struct tagWND *)a1, 0x908u, 1);
      }
      else
      {
        SetOrClrWF(0, (struct tagWND *)a1, 0x908u, 1);
        if ( v7 )
          PostIAMShellHookMessage(0x16u, *(_QWORD *)a1);
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 2) != 0 )
        DecrementCompositedCount();
      DecVisWindows((struct tagWND *)a1);
      if ( (a2 & 8) == 0 && (*(_DWORD *)(a1 + 380) & 0x400) != 0 )
        RemoveWindowFullScreen(a1);
    }
    v4 = 1;
    tagWND::ComputeDominantState((tagWND *)a1);
    return v4;
  }
  return 0;
}
