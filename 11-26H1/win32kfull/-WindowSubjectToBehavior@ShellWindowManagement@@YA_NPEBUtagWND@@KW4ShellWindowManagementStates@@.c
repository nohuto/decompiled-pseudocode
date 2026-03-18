/*
 * XREFs of ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x14001122C
 * Callers:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140051270 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     xxxHandleNCMouseGuys @ 0x140220C94 (xxxHandleNCMouseGuys.c)
 *     NtUserSetWindowPos @ 0x14025CDA0 (NtUserSetWindowPos.c)
 *     NtUserGetWindowTrackInfoAsync @ 0x1402B5D30 (NtUserGetWindowTrackInfoAsync.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C7A78 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1402DB9D8 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402DC0C4 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1400112B8 (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     IsImmersiveApplicationBandId @ 0x1400112F8 (IsImmersiveApplicationBandId.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
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
