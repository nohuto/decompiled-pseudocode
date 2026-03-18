/*
 * XREFs of ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x140029818
 * Callers:
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1400295EC (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReas.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402C4160 (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1402C5BD0 (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?HasRestorableState@CRecalcProp@@AEAA_NXZ @ 0x140022298 (-HasRestorableState@CRecalcProp@@AEAA_NXZ.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14002538C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x140027C50 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1401A44D0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1401CAC78 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C3994 (-AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

char __fastcall CRecalcProp::CreateForTopologyChange(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  char v4; // si
  char v6; // r15
  const struct tagWND *v7; // rax
  __int64 v8; // rdi
  struct CRecalcProp *v9; // rax
  struct CRecalcProp *v10; // rbx
  int v11; // eax
  char v12; // r14
  char v13; // bp
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r9
  char v19; // bp
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // r9
  bool v25; // bp
  char v26; // bl
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  struct CRecalcState *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v36; // rdi
  void (__fastcall ***v37)(_QWORD, __int64); // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int16 v40; // [rsp+30h] [rbp-58h]
  __int16 v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+40h] [rbp-48h]
  __int64 v43; // [rsp+40h] [rbp-48h]
  char ThreadId; // [rsp+48h] [rbp-40h]
  char v45; // [rsp+48h] [rbp-40h]
  int v46; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a2;
  v4 = 1;
  LOBYTE(a2) = 1;
  v6 = a1;
  v7 = (const struct tagWND *)HMValidateHandleNoSecure(a1, a2);
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
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v12 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v13 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v13 = 0;
      }
      if ( !v12 && !v13 )
        return 1;
      ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v8 + 16));
      LOBYTE(v42) = v6;
      v18 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 69160);
      v40 = 77;
      goto LABEL_69;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v19 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v4 = 0;
    }
    if ( v19 || v4 )
    {
      v45 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v8 + 16));
      LOBYTE(v43) = v6;
      v24 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 69160);
      v41 = 78;
LABEL_47:
      LOBYTE(v23) = v4;
      LOBYTE(v22) = v19;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v22,
        v23,
        v24,
        5,
        7,
        v41,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
        v43,
        v45);
    }
    return 0;
  }
  if ( v11 == 2 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v4 = 0;
    }
    v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v26 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v8 + 16));
      UserSessionState = W32GetUserSessionState(v28, v27);
      LOBYTE(v30) = v25;
      LOBYTE(v31) = v4;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(UserSessionState + 69160),
        3,
        7,
        79,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
        v6,
        v26);
    }
    return 0;
  }
  v46 = 0;
  v32 = CRecalcState::CreateRecalcState(v8, v3, a3, &v46);
  if ( !v32 )
    return 0;
  CRecalcProp::AddPendingRecalcWork(v10, v32);
  if ( (*(_DWORD *)(v8 + 380) & 0x10) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v19 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v4 = 0;
    }
    if ( !v19 && !v4 )
      return 0;
    v45 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v8 + 16));
    v43 = *(_QWORD *)v8;
    v24 = *(_QWORD *)(W32GetUserSessionState(v34, v33) + 69160);
    v41 = 80;
    goto LABEL_47;
  }
  if ( v46 == 1 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v12 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v13 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v13 = 0;
    }
    if ( !v12 && !v13 )
      return 1;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v8 + 16));
    v42 = *(_QWORD *)v8;
    v18 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 69160);
    v40 = 81;
LABEL_69:
    LOBYTE(v17) = v13;
    LOBYTE(v16) = v12;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v16,
      v17,
      v18,
      5,
      7,
      v40,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      v42,
      ThreadId);
    return 1;
  }
  if ( !CRecalcProp::HasRestorableState(v10) )
  {
    if ( v46 != 2 )
    {
      if ( v46 == 3 )
      {
        v36 = (_QWORD *)((char *)v10 + 32);
        *(_QWORD *)(*((_QWORD *)v10 + 4) + 8LL) = *((_QWORD *)v10 + 5);
        *((_QWORD *)v10 + 5) = *((_QWORD *)v10 + 4);
        CRecalcProp::PruneRecalcStateList((const struct tagWND **)v10, 0LL);
      }
      else
      {
        if ( v46 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2759LL);
        v36 = (_QWORD *)((char *)v10 + 32);
        v37 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v10 + 4);
        if ( v37 )
          (**v37)(v37, 1LL);
      }
      *v36 = 0LL;
      *((_DWORD *)v10 + 6) = 0;
    }
    return 0;
  }
  return 1;
}
