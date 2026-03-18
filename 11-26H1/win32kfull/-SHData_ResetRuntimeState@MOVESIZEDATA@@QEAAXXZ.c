/*
 * XREFs of ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x14019DA2C
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14019EC58 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x14028A9FC (-UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402C43E4 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall MOVESIZEDATA::SHData_ResetRuntimeState(MOVESIZEDATA *this, __int64 a2)
{
  char v3; // si
  char v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v3 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v4 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      1,
      10,
      (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids);
  }
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_BYTE *)this + 372) = 0;
  *((_WORD *)this + 196) = 0;
}
