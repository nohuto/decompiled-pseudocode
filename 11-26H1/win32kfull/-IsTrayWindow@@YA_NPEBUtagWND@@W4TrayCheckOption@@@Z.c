/*
 * XREFs of ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324
 * Callers:
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxRedrawTitle @ 0x14001111C (xxxRedrawTitle.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x14001122C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x14001144C (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x140175A04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     ParkIcon @ 0x1401E63DC (ParkIcon.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1401FD9F8 (_anonymous_namespace_--xxxUpdateTray.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x14021CBCC (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     NtUserGetWindowMinimizeRect @ 0x1402B55B0 (NtUserGetWindowMinimizeRect.c)
 *     NtUserRedrawFrameAndHook @ 0x1402B9620 (NtUserRedrawFrameAndHook.c)
 *     xxxArrangeIconicWindows @ 0x1402FAF24 (xxxArrangeIconicWindows.c)
 * Callees:
 *     <none>
 */

char __fastcall IsTrayWindow(_QWORD *a1, __int64 a2)
{
  int v2; // edi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  char *v12; // rdx

  v2 = a2 & 2;
  if ( !a1 || !a1[3] )
    return 0;
  if ( (a2 & 1) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 2120LL) & 8) == 0 )
      return 0;
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      v5 = *CurrentThreadWin32Thread;
    else
      v5 = 0LL;
    v6 = *(_DWORD *)(v5 + 712);
    v7 = PsGetCurrentThreadWin32Thread();
    if ( v7 )
      v7 = *(_QWORD *)v7;
    if ( ((*(_DWORD *)(**(_QWORD **)(v7 + 496) + 16LL) | v6) & 0x800) == 0
      && !*(_QWORD *)(*(_QWORD *)(a1[3] + 8LL) + 184LL) )
    {
      return 0;
    }
  }
  if ( (!v2 || (*(_BYTE *)(a1[5] + 30LL) & 1) != 0)
    && (v8 = a1[13]) != 0
    && (v9 = a1[3]) != 0
    && (v10 = *(_QWORD *)(v9 + 8)) != 0
    && v8 == *(_QWORD *)(v10 + 24)
    && ((v12 = (char *)a1[5], (v12[26] & 4) != 0) || v12[24] >= 0 && (v12[27] & 8) == 0 && !a1[15]) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
