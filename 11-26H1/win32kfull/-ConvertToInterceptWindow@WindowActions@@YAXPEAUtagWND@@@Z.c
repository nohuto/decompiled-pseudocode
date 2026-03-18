/*
 * XREFs of ?ConvertToInterceptWindow@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402E1EAC
 * Callers:
 *     NtUserConvertToInterceptWindow @ 0x1402B08D0 (NtUserConvertToInterceptWindow.c)
 * Callees:
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x14023DE70 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 */

void __fastcall WindowActions::ConvertToInterceptWindow(WindowActions *this, struct tagWND *a2)
{
  struct MOVESIZEDATA *v3; // rdx
  bool v4; // si
  bool v5; // bp
  __int64 v6; // rbx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  struct CRecalcProp *RecalcProperty; // rax

  *((_DWORD *)this + 96) |= 0x10u;
  v3 = WPP_GLOBAL_Control;
  v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(this, WPP_GLOBAL_Control);
    LOBYTE(v8) = v5;
    LOBYTE(v9) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      4,
      10,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v6);
  }
  RecalcProperty = CRecalcProp::GetRecalcProperty(this, (__int64)v3);
  if ( RecalcProperty )
  {
    if ( *((_DWORD *)RecalcProperty + 6) == 1 )
      CRecalcProp::SignalRecalcWork((__int64)RecalcProperty, 0);
  }
}
