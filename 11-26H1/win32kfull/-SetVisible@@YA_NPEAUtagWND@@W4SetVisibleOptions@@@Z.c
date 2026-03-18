/*
 * XREFs of ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38
 * Callers:
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x14000FBF8 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1400452D8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x140121918 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140165EB4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxShowOwnedWindows @ 0x1401C0368 (xxxShowOwnedWindows.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x14025CD50 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxMinimizeHungWindow @ 0x140292240 (xxxMinimizeHungWindow.c)
 *     zzzActiveCursorTracking @ 0x1402A0BB8 (zzzActiveCursorTracking.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 *     NtUserSetVisible @ 0x1402BE300 (NtUserSetVisible.c)
 * Callees:
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x140010520 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1400105EC (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 *     CalcWindowFullScreen @ 0x140010674 (CalcWindowFullScreen.c)
 *     IncCompositedVisWindows @ 0x1400109BC (IncCompositedVisWindows.c)
 *     ?IsTopLevelUnownedWindowWithCaption@@YA_NPEBUtagWND@@@Z @ 0x140010A84 (-IsTopLevelUnownedWindowWithCaption@@YA_NPEBUtagWND@@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14012CD74 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x140179B8C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _IsWindowVisible @ 0x140206F58 (_IsWindowVisible.c)
 *     ?TraceLoggingFirstMainWindowShownForProcess@@YAXPEBUtagWND@@@Z @ 0x140215324 (-TraceLoggingFirstMainWindowShownForProcess@@YAXPEBUtagWND@@@Z.c)
 *     RemoveWindowFullScreen @ 0x14024985C (RemoveWindowFullScreen.c)
 *     ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x140295F3C (-IncVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     DecrementCompositedCount @ 0x1402A43C4 (DecrementCompositedCount.c)
 */

char __fastcall SetVisible(__int64 a1, unsigned int a2)
{
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // bp
  bool v12; // r14
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  char v17; // bp
  bool v18; // r14
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx

  v4 = 0;
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
        return v4;
      if ( (*(_DWORD *)(a1 + 380) & 4) != 0 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
          || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v11 = 0;
        }
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
          LOBYTE(v14) = v12;
          LOBYTE(v15) = v11;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v15,
            v14,
            *(_QWORD *)(UserSessionState + 69152),
            4,
            12,
            18,
            (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
            a1);
        }
        zzzUpdateWindowCompositionCloak(a1, 0LL, 2LL);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
          || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v17 = 0;
        }
        v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v17;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(v19 + 69152),
            4,
            12,
            19,
            (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
            a1);
        }
        *(_DWORD *)(a1 + 380) &= ~4u;
      }
      SetOrClrWF(1LL, a1, 3856LL, 1LL);
      SetOrClrWF(((a2 >> 4) & 1) == 0, a1, 2312LL, 1LL);
      IncVisWindows((struct tagWND *)a1);
      IncCompositedVisWindows(a1);
      if ( (a2 & 4) == 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded((struct tagWND *)a1, 0);
      if ( (a2 & 8) == 0 )
        CalcWindowFullScreen((struct tagWND *)a1, v6);
      if ( (unsigned __int8)IsTrayWindow(a1, 1LL) )
        PostIAMShellHookMessage(0x11u, *(_QWORD *)a1);
      if ( IsTopLevelUnownedWindowWithCaption((const struct tagWND *)a1) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL);
        v10 = *(_QWORD *)(v9 + 808);
        if ( (v10 & 0x20000000) == 0 )
        {
          *(_QWORD *)(v9 + 808) = v10 | 0x20000000;
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
      if ( !(unsigned __int8)IsTrayWindow(a1, 1LL) || (v8 = 1, !(unsigned int)IsWindowVisible(a1)) )
        v8 = 0;
      SetOrClrWF(0LL, a1, 3856LL, 1LL);
      if ( (a2 & 0x10) != 0 )
      {
        SetOrClrWF(1LL, a1, 2312LL, 1LL);
      }
      else
      {
        SetOrClrWF(0LL, a1, 2312LL, 1LL);
        if ( v8 )
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
