/*
 * XREFs of ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E97C
 * Callers:
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E754 (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReas.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x140261090 (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402DD64C (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14011D2A8 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14015DA7C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x14015EFB0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x14015F394 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     ?HasRestorableState@CRecalcProp@@AEAA_NXZ @ 0x14015F654 (-HasRestorableState@CRecalcProp@@AEAA_NXZ.c)
 *     ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14016062C (-AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

char __fastcall CRecalcProp::CreateForTopologyChange(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // si
  char v6; // r15
  const struct tagWND *v7; // rax
  __int64 v8; // rdi
  struct CRecalcProp *v9; // rax
  struct CRecalcProp *v10; // rbx
  int v11; // eax
  struct CRecalcState *v12; // rax
  char v14; // bp
  _QWORD *v15; // rdi
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  char v17; // r14
  char v18; // bp
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r9
  bool v29; // bp
  char v30; // bl
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 UserSessionState; // rax
  int v34; // r8d
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int16 v40; // [rsp+30h] [rbp-58h]
  __int16 v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+40h] [rbp-48h]
  __int64 v43; // [rsp+40h] [rbp-48h]
  char ThreadId; // [rsp+48h] [rbp-40h]
  char v45; // [rsp+48h] [rbp-40h]
  int v46; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 1;
  v6 = a1;
  v7 = (const struct tagWND *)HMValidateHandleNoSecure(a1, 1);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0;
  if ( !CRecalcProp::IsWindowEligibleForRecalc(v7) )
    return 0;
  v9 = CRecalcProp::EnsureRecalcProperty((struct tagWND *)v8);
  v10 = v9;
  if ( !v9 )
    return 0;
  v11 = *((_DWORD *)v9 + 6);
  if ( v11 == 1 )
  {
    if ( CRecalcProp::HasRestorableState(v10) && !*((_QWORD *)v10 + 6) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v17 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v18 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v18 = 0;
      }
      if ( !v17 && !v18 )
        return 1;
      ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v8 + 16));
      LOBYTE(v42) = v6;
      v23 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 69152);
      v40 = 77;
      goto LABEL_71;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v14 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v4 = 0;
    }
    if ( !v14 && !v4 )
      return 0;
    v45 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v8 + 16));
    LOBYTE(v43) = v6;
    v28 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 69152);
    v41 = 78;
LABEL_59:
    LOBYTE(v27) = v4;
    LOBYTE(v26) = v14;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v27,
      v28,
      5,
      7,
      v41,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v43,
      v45);
    return 0;
  }
  if ( v11 == 2 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v4 = 0;
    }
    v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v30 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v8 + 16));
      UserSessionState = W32GetUserSessionState(v32, v31);
      LOBYTE(v34) = v29;
      LOBYTE(v35) = v4;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v34,
        *(_QWORD *)(UserSessionState + 69152),
        3,
        7,
        79,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v6,
        v30);
    }
    return 0;
  }
  v46 = 0;
  v12 = CRecalcState::CreateRecalcState(v8, a2, a3, &v46);
  if ( v12 )
  {
    CRecalcProp::AddPendingRecalcWork(v10, v12);
    if ( (*(_DWORD *)(v8 + 380) & 0x10) == 0 )
    {
      if ( v46 != 1 )
      {
        if ( CRecalcProp::HasRestorableState(v10) )
          return 1;
        if ( v46 != 2 )
        {
          if ( v46 == 3 )
          {
            v15 = (_QWORD *)((char *)v10 + 32);
            *(_QWORD *)(*((_QWORD *)v10 + 4) + 8LL) = *((_QWORD *)v10 + 5);
            *((_QWORD *)v10 + 5) = *((_QWORD *)v10 + 4);
            CRecalcProp::PruneRecalcStateList((const struct tagWND **)v10, 0LL);
          }
          else
          {
            if ( v46 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2759LL);
            v15 = (_QWORD *)((char *)v10 + 32);
            v16 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v10 + 4);
            if ( v16 )
              (**v16)(v16, 1LL);
          }
          *v15 = 0LL;
          *((_DWORD *)v10 + 6) = 0;
        }
        return 0;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v17 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v18 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v18 = 0;
      }
      if ( !v17 && !v18 )
        return 1;
      ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v8 + 16));
      v42 = *(_QWORD *)v8;
      v23 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 69152);
      v40 = 81;
LABEL_71:
      LOBYTE(v22) = v18;
      LOBYTE(v21) = v17;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v22,
        v23,
        5,
        7,
        v40,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v42,
        ThreadId);
      return 1;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v14 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v4 = 0;
    }
    if ( !v14 && !v4 )
      return 0;
    v45 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v8 + 16));
    v43 = *(_QWORD *)v8;
    v28 = *(_QWORD *)(W32GetUserSessionState(v37, v36) + 69152);
    v41 = 80;
    goto LABEL_59;
  }
  return 0;
}
