/*
 * XREFs of ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x1400110B0
 * Callers:
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402638F4 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1402C0AF0 (NtUserUpdateWindowTrackingInfo.c)
 *     ?MarkActionForMoveSizeShellNotifications@@YAXPEAUMOVESIZEDATA@@PEAVCWindowAction@AdvancedWindowPos@@@Z @ 0x1402C48F8 (-MarkActionForMoveSizeShellNotifications@@YAXPEAUMOVESIZEDATA@@PEAVCWindowAction@AdvancedWindowP.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1402C4D20 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1402DB9D8 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1400112B8 (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 */

char __fastcall IsShellParticipatesInSizing(const struct tagWND *a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edx
  char v5; // bl
  __int64 v6; // rax

  v2 = *((_QWORD *)a1 + 2);
  v5 = 0;
  if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x40, a2)
    && !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)8, v4) )
  {
    v6 = *(_QWORD *)(v2 + 704);
    if ( v6 )
    {
      if ( *(const struct tagWND **)(v6 + 16) == a1 )
        return *(_DWORD *)(v6 + 380) != 0;
    }
  }
  return v5;
}
