/*
 * XREFs of ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14019DC18
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14019EC58 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x14019FD9C (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14027B320 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402C72E8 (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     DwmAsyncSendShrinkMoveSizeWindow @ 0x1403472C8 (DwmAsyncSendShrinkMoveSizeWindow.c)
 */

void __fastcall DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm(DWM_ARRANGEMENT_DATA *this, const struct MOVESIZEDATA *a2)
{
  void *v3; // rax
  __int64 v4; // rdx
  bool v5; // di
  bool v6; // si
  int v7; // ebx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  if ( *((_BYTE *)this + 4) )
  {
    *((_BYTE *)this + 4) = 0;
    v3 = (void *)UserReferenceDwmApiPort(this);
    DwmAsyncSendShrinkMoveSizeWindow(v3);
    v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = *(_DWORD *)this;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
      LOBYTE(v9) = v6;
      LOBYTE(v10) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        1,
        26,
        (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids,
        v7);
    }
  }
}
