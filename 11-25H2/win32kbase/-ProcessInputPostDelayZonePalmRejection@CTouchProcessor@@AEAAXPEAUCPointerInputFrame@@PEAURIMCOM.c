/*
 * XREFs of ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x140207C38
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188830 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1401FE720 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GetWorkspaceId @ 0x140066AA0 (GetWorkspaceId.c)
 *     ?EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionFrameRateBoostCandidateEvent@InputHelper@@@Z @ 0x1400DD28C (-EvaluateEventForCompositionFrameRateBoost@CCompositionRefreshRateBooster@@QEAAXPEBUCompositionF.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1401FE898 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x140206828 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 */

void __fastcall CTouchProcessor::ProcessInputPostDelayZonePalmRejection(
        PERESOURCE *this,
        struct CPointerInputFrame *a2,
        struct RIMCOMPLETEFRAME *a3)
{
  struct RIMCOMPLETEFRAME *v3; // rbp
  struct CPointerInputFrame *v4; // rdi
  char v6; // bl
  __int64 v7; // rcx
  unsigned int WorkspaceId; // eax
  struct RIMCOMPLETEFRAME *v9; // r9
  const struct CPointerInputFrame *v10; // rax
  const struct RIMCOMPLETEFRAME *v11; // rdx
  char v12; // di
  bool v13; // si
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  _QWORD *v17; // rcx
  void *v18; // r8
  unsigned int i; // edi
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  __int16 v24; // [rsp+30h] [rbp-38h]
  _QWORD v25[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a3;
  v4 = a2;
  if ( (*((_DWORD *)a2 + 57) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1051);
  v6 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      33,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v7 = *((_QWORD *)v4 + 8);
  *((_DWORD *)v4 + 57) |= 0x200u;
  WorkspaceId = GetWorkspaceId(v7, (__int64)a2);
  v10 = CTouchProcessor::PopulateReferencedInputFrame(this, v4, WorkspaceId, v9);
  if ( v10 )
  {
    CTouchProcessor::DoContactVisualizationAndGenerateMessages(
      (CTouchProcessor *)this,
      v11,
      v10,
      *((_QWORD *)v10 + 8),
      -__CFSHR__(*(_DWORD *)(*((_QWORD *)v10 + 32) + 368LL), 4),
      -__CFSHR__(*(_DWORD *)(*((_QWORD *)v10 + 32) + 368LL), 5),
      0);
    for ( i = 0; i < *((_DWORD *)v3 + 6); ++i )
    {
      v20 = 192LL * i;
      v21 = v20 + *((_QWORD *)v3 + 29) + 16LL;
      if ( *(_QWORD *)(W32GetUserSessionState(v20, v11) + 3104) )
      {
        v25[0] = 0LL;
        v25[1] = v21;
        UserSessionState = W32GetUserSessionState(v22, v11);
        CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
          (CCompositionRefreshRateBooster *)(*(_QWORD *)(UserSessionState + 3104) + 88LL),
          (const struct InputHelper::CompositionFrameRateBoostCandidateEvent *)v25);
      }
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v6 = 0;
    if ( (_BYTE)v11 || v6 )
    {
      v18 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
      v24 = 36;
      goto LABEL_45;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(v14 + 69144),
        2,
        4,
        34,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v6 = 0;
    if ( (_BYTE)v11 || v6 )
    {
      v18 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
      v24 = 35;
LABEL_45:
      LOBYTE(v18) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        v17[3],
        (_DWORD)v11,
        (_DWORD)v18,
        v17[8],
        5,
        4,
        v24,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
}
