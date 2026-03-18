/*
 * XREFs of ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140029D80
 * Callers:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140036370 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1401BAF84 (xxxHandleNCMouseGuys.c)
 *     NtUserSetWindowPos @ 0x14024EC50 (NtUserSetWindowPos.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1402597B4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x14025C310 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     NtUserGetWindowTrackInfoAsync @ 0x140299A90 (NtUserGetWindowTrackInfoAsync.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1402A77A0 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402C2A50 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x140029E0C (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     IsImmersiveApplicationBandId @ 0x140029E44 (IsImmersiveApplicationBandId.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 */

char __fastcall ShellWindowManagement::WindowSubjectToBehavior(__int64 a1, unsigned int a2, int a3, int a4)
{
  if ( !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)a2, a2) )
    return 0;
  if ( a4 == 1 )
  {
    if ( a3 && (a3 & *(_DWORD *)(a1 + 388)) == a3 )
      return 1;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) == 1 || (unsigned int)IsImmersiveApplicationBandId() )
      return IsTrayWindow(a1, 2LL);
    return 0;
  }
  return (a3 & *(_DWORD *)(a1 + 388)) == a3;
}
