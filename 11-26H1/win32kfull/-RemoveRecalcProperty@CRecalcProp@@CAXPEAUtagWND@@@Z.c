/*
 * XREFs of ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x140210060
 * Callers:
 *     ?s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x140160F98 (-s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x14028E8F0 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1402102BC (--_GCRecalcProp@@AEAAPEAXI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRecalcProp::RemoveRecalcProperty(struct tagWND *a1)
{
  struct MOVESIZEDATA *v2; // rdx
  char v3; // bp
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // edx
  CRecalcProp *v8; // rbx
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
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
    v9 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v11) = v4;
    LOBYTE(v12) = v3;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      7,
      63,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v9);
  }
  v5 = W32GetUserSessionState(a1, v2);
  v6 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(v5 + 42278), 1u);
  v8 = (CRecalcProp *)v6;
  if ( v6 )
    *(_QWORD *)(v6 + 16) = 0LL;
  if ( *(_DWORD *)(v6 + 24) == 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2243LL);
  *((_DWORD *)a1 + 95) &= ~0x80u;
  CRecalcProp::`scalar deleting destructor'(v8, v7);
}
