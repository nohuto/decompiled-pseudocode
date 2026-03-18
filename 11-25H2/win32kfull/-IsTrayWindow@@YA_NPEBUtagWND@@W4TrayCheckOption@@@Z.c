/*
 * XREFs of ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34
 * Callers:
 *     xxxRedrawTitle @ 0x140021BF8 (xxxRedrawTitle.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1400232D8 (_anonymous_namespace_--xxxUpdateTray.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140029D80 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     NtUserGetWindowMinimizeRect @ 0x14002A900 (NtUserGetWindowMinimizeRect.c)
 *     xxxSetSysMenu @ 0x140046248 (xxxSetSysMenu.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1400654C0 (xxxNotifyMonitorChanged.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1401A73E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ParkIcon @ 0x1401EA1E8 (ParkIcon.c)
 *     xxxRedrawFrameAndHook @ 0x14021EE48 (xxxRedrawFrameAndHook.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x14025D7D0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxArrangeIconicWindows @ 0x1402EB4A4 (xxxArrangeIconicWindows.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

char __fastcall IsTrayWindow(_QWORD *a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  char *v12; // rdx

  v2 = a2 & 2;
  if ( !a1 || !a1[3] )
    return 0;
  if ( (a2 & 1) != 0 )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
    if ( (*(_DWORD *)(v5 + 2120) & 8) == 0 )
      return 0;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v5, v4);
    if ( CurrentThreadNonPaged )
      v9 = *CurrentThreadNonPaged;
    else
      v9 = 0LL;
    v10 = W32GetCurrentThreadNonPaged(v8, v7);
    if ( v10 )
      v10 = *(_QWORD *)v10;
    if ( ((*(_DWORD *)(v9 + 720) | *(_DWORD *)(**(_QWORD **)(v10 + 504) + 16LL)) & 0x800) == 0
      && !*(_QWORD *)(*(_QWORD *)(a1[3] + 8LL) + 184LL) )
    {
      return 0;
    }
  }
  if ( (!v2 || (*(_BYTE *)(a1[5] + 30LL) & 1) != 0)
    && (unsigned int)IsTopLevelWindow(a1)
    && ((v12 = (char *)a1[5], (v12[26] & 4) != 0) || v12[24] >= 0 && (v12[27] & 8) == 0 && !a1[15]) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
