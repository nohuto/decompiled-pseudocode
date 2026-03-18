/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1400654C0
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x140051B10 (NtUserUpdateLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401E8AB0 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x140233760 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x140284B18 (xxxForceWindowToDpiForTest.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x140284CA8 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402C7B44 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1401A808C (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1401BAD30 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1402405D0 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1402840C4 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1402847CC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z @ 0x140287508 (-RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxNotifyMonitorChanged(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  BOOL v8; // eax
  __int64 v9; // rdx
  BOOL v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r9
  __int16 ScaledLogPixels; // bx
  __int64 v19; // rdx

  v8 = IsTopLevelWindow((__int64)a1);
  v10 = v8;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 && v8 )
    SetDeferredDpiStateForWindowAndChildren(a1, 0LL, 0LL);
  v11 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( (_DWORD)v11 == 2 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 2) + 688LL) & 0x2000000) == 0 )
    {
      xxxSendDpiChangedMsgs(a1, a2, a3, a4);
      goto LABEL_18;
    }
  }
  else if ( (_DWORD)v11 == 3 )
  {
    xxxConsiderPreferredDpiChange(a1);
    goto LABEL_18;
  }
  if ( PtiCurrent(v11, v9) )
  {
    if ( *((_QWORD *)PtiCurrent(v13, v12) + 62) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v15, v14) + 62) + 8LL) + 64LL) & 1) != 0 )
      {
        v16 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        if ( (v16 & 0xF) == 0 && (v16 & 0x40000000) != 0 && IsTopLevelWindow((__int64)a1) )
        {
          if ( !a4
            || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v17 + 284)),
                (unsigned __int16)GreGetScaledLogPixels(a4) != ScaledLogPixels) )
          {
            xxxSendGDIScaledDpiChangedMsgs(a1, a3);
          }
        }
      }
    }
  }
LABEL_18:
  if ( v10 )
  {
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 15) )
    {
      PostIAMShellHookMessage(0x18u, *(_QWORD *)a1);
    }
    else if ( IsTrayWindow(a1, 1LL) )
    {
      PostShellHookMessagesEx((LastWokenThread *)0x10, *(_QWORD *)a1);
      PostIAMShellHookMessage(0x14u, *(_QWORD *)a1);
      xxxCallHook(16, *(_QWORD *)a1, 0LL, 10);
    }
  }
  RecreateRedirectionBitmapIfAdapterChanged(a1);
  if ( a3 )
    FreeHwndList(a3, v19);
}
