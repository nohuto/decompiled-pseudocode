/*
 * XREFs of ?BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z @ 0x1402DD554
 * Callers:
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E4C80 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402E510C (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?BeginApplyWindowActionOld@CRecalcProp@@QEAA_NPEAUtagWND@@I@Z @ 0x1402DD234 (-BeginApplyWindowActionOld@CRecalcProp@@QEAA_NPEAUtagWND@@I@Z.c)
 */

char __fastcall DesktopRecalc::BeginApplyWindowActionOld(DesktopRecalc *this, struct tagWND *a2)
{
  int v2; // edi
  CRecalcProp *RecalcProperty; // rax
  __int64 v5; // rdx
  bool v6; // bl
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  v2 = (int)a2;
  RecalcProperty = CRecalcProp::GetRecalcProperty(this, (__int64)a2);
  if ( RecalcProperty )
    return CRecalcProp::BeginApplyWindowActionOld(RecalcProperty, this, v2);
  v6 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69152),
      3,
      7,
      154,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
  }
  return 0;
}
