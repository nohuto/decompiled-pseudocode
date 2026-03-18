/*
 * XREFs of ?ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402DE340
 * Callers:
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14016062C (-AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRecalcProp::ReattachRecalcState(CRecalcProp *this, struct CRecalcState *a2)
{
  __int64 v4; // rcx
  char v5; // r14
  bool v6; // r15
  int v7; // edi
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx

  v4 = *((_QWORD *)this + 2);
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 0x20) == 0 && (*(_DWORD *)(v4 + 384) & 0x10) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4506);
  if ( *((_DWORD *)this + 6) != 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4507);
  if ( a2 != *((struct CRecalcState **)this + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4508);
  if ( *((_QWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4509);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = *(_DWORD *)(*((_QWORD *)a2 + 2) + 12LL);
    v8 = **((_QWORD **)this + 2);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v10) = v6;
    LOBYTE(v11) = v5;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      7,
      125,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v8,
      v7);
  }
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = 0LL;
  *((_BYTE *)a2 + 60) = 1;
  CRecalcProp::AddPendingRecalcWork(this, a2);
}
