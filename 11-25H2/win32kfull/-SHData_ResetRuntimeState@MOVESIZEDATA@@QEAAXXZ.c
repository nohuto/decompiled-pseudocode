/*
 * XREFs of ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x1402288C0
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x140253DE8 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402A7000 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A8740 (-UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall MOVESIZEDATA::SHData_ResetRuntimeState(MOVESIZEDATA *this, __int64 a2)
{
  char v3; // si
  char v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v3 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v3 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v4 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      1,
      10,
      (__int64)&WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids);
  }
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_BYTE *)this + 308) = 0;
  *((_WORD *)this + 164) = 0;
}
