/*
 * XREFs of ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8
 * Callers:
 *     xxxHandleNCMouseGuys @ 0x1401BAF84 (xxxHandleNCMouseGuys.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x140029E0C (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C1F8 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140217238 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140227B24 (--0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_sq @ 0x140272638 (WPP_RECORDER_AND_TRACE_SF_sq.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A67FC (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1402A6CD4 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1402A6D78 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?IsWindowVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1402A7804 (-IsWindowVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402A8174 (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D884C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402DAD2C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxArrangeWindow(struct tagWND *a1, const struct tagWND *a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  char v7; // di
  int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rdx
  char v11; // r15
  bool v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // r9
  const char *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  CThreadLockedCurrentMonitorTopologyPtr *v29; // rcx
  struct tagWND *v30; // rdx
  bool v31; // r14
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  bool v36; // r14
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  bool v41; // r14
  __int64 v42; // rbx
  __int64 UserSessionState; // rax
  int v44; // r8d
  int v45; // edx
  int v46; // r8d
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v48[5]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v49[42]; // [rsp+80h] [rbp-80h] BYREF
  char v50; // [rsp+128h] [rbp+28h] BYREF

  v2 = (int)a2;
  if ( WindowArrangement::IsSupported(a1, a2) )
  {
    if ( (unsigned int)(v2 - 16) <= 7 )
    {
      v7 = 1;
      if ( (***(_DWORD ***)(W32GetUserSessionState(v5, v4) + 56968) > 1u || (unsigned int)(v2 - 22) > 1)
        && (v2 != 18 || !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)2, v6)) )
      {
        v8 = EvaluateArrangeState((__int64)a1);
        if ( v8 != 4 )
        {
          v9 = *((_DWORD *)&unk_1403590E0 + 8 * (unsigned int)(v2 - 16) + v8 + 4);
          if ( v9 != 6 )
          {
            if ( (*((_DWORD *)&unk_1403590E0 + 8 * (unsigned int)(v2 - 16) + 3) & 1) == 0 )
            {
              v47 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7342);
            }
            if ( (unsigned int)ArrangeActionCompatibleWithStyle(a1, v9) )
            {
              if ( v9 )
              {
                if ( v9 != 1 )
                {
                  if ( v9 == 2 )
                  {
                    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
                    {
                      v7 = 0;
                    }
                    v41 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      v42 = *(_QWORD *)a1;
                      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
                      LOBYTE(v44) = v41;
                      LOBYTE(v45) = v7;
                      WPP_RECORDER_AND_TRACE_SF_q(
                        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                        v45,
                        v44,
                        *(_QWORD *)(UserSessionState + 69160),
                        4,
                        4,
                        114,
                        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
                        v42);
                    }
                    xxxSysCommand(a1);
                  }
                  else if ( v9 == 3 )
                  {
                    if ( IsWindowVerticallyMaximized((struct tagRECT *)a1) )
                    {
                      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
                      {
                        v7 = 0;
                      }
                      v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        v37 = *(_QWORD *)a1;
                        v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v30);
                        LOBYTE(v39) = v36;
                        LOBYTE(v40) = v7;
                        WPP_RECORDER_AND_TRACE_SF_q(
                          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                          v40,
                          v39,
                          *(_QWORD *)(v38 + 69160),
                          4,
                          4,
                          116,
                          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
                          v37);
                      }
                    }
                    else
                    {
                      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
                      {
                        v7 = 0;
                      }
                      v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        v32 = *(_QWORD *)a1;
                        v33 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v30);
                        LOBYTE(v34) = v31;
                        LOBYTE(v35) = v7;
                        WPP_RECORDER_AND_TRACE_SF_q(
                          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                          v35,
                          v34,
                          *(_QWORD *)(v33 + 69160),
                          4,
                          4,
                          115,
                          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
                          v32);
                      }
                      AdvancedWindowPos::xxxVerticalMaximize((struct tagRECT *)a1, v30);
                    }
                  }
                  else if ( v9 - 4 <= 1 )
                  {
                    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                      || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
                    {
                      v11 = 0;
                    }
                    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      v13 = *(_QWORD *)a1;
                      v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
                      LOBYTE(v15) = v12;
                      LOBYTE(v16) = v11;
                      v17 = *(_QWORD *)(v14 + 69160);
                      v18 = "Right";
                      if ( v9 != 4 )
                        v18 = "Left";
                      WPP_RECORDER_AND_TRACE_SF_sq(
                        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                        v16,
                        v15,
                        v17,
                        4,
                        4,
                        117,
                        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
                        (__int64)v18,
                        v13);
                    }
                    v19 = ValidateHmonitor(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
                    if ( v9 == 4 )
                    {
                      v22 = *(_QWORD *)(v19 + 96);
                      v24 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 56968) + 152LL;
                      if ( v22 == v24 )
                        v22 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v24, v23) + 56968) + 152LL);
                    }
                    else
                    {
                      v22 = *(_QWORD *)(v19 + 104);
                      v26 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 56968) + 152LL;
                      if ( v22 == v26 )
                        v22 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v26, v25) + 56968) + 160LL);
                    }
                    if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
                    {
                      AdvancedWindowPos::CWindowAction::CWindowAction((__int64)v49, 0);
                      AdvancedWindowPos::CWindowAction::SetMonitor(
                        (AdvancedWindowPos::CWindowAction *)v49,
                        (struct tagMONITOR *)(v22 - 96),
                        1,
                        0LL);
                      v49[0] |= 0x80u;
                      AdvancedWindowPos::xxxApplyWindowAction(a1, v49, 4LL);
                      v29 = (CThreadLockedCurrentMonitorTopologyPtr *)&v50;
                    }
                    else
                    {
                      CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr(
                        (CThreadLockedCurrentMonitorTopologyPtr *)v48,
                        v27);
                      v47 = 0;
                      AdvancedWindowPos::xxxMigrateWindow(a1, v22 - 96, v48[0], 0LL, 0LL, 0, &v47, 0LL);
                      v29 = (CThreadLockedCurrentMonitorTopologyPtr *)v48;
                    }
                    CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(v29, v28);
                  }
                  return;
                }
                v46 = 7357;
              }
              else
              {
                v46 = 7353;
              }
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v46);
            }
          }
        }
      }
    }
  }
}
