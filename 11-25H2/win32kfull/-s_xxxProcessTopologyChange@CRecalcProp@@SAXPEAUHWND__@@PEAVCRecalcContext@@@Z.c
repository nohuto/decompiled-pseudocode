/*
 * XREFs of ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C6EFC
 * Callers:
 *     ?s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z @ 0x1400292B4 (-s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z.c)
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401CB264 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z @ 0x1402C6A30 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402C6C34 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z @ 0x140022304 (-IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14002237C (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x140027C50 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14002EA3C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1401A44D0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401CAE4C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x140204E88 (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 *     ?HandleDesktopRecalcForWindow@DesktopRecalc@InputTraceLogging@@SAXQEAUHWND__@@PEBDII@Z @ 0x14021EF08 (-HandleDesktopRecalcForWindow@DesktopRecalc@InputTraceLogging@@SAXQEAUHWND__@@PEBDII@Z.c)
 *     ?GetResultString@CRecalcContext@@QEAAPEBDXZ @ 0x140259854 (-GetResultString@CRecalcContext@@QEAAPEBDXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1402C5680 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8210 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 */

void __fastcall CRecalcProp::s_xxxProcessTopologyChange(__int64 a1, struct CRecalcContext *a2)
{
  struct CRecalcContext *v2; // r14
  char v3; // di
  bool v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagTHREADINFO **v7; // rsi
  __int64 v8; // rdx
  struct CRecalcProp *RecalcProperty; // rax
  struct CRecalcProp *v10; // rbx
  bool IsPendingAndEquivalentMonitorSet; // al
  int v12; // ecx
  bool v13; // r12
  struct CRecalcState *RestorableRecalcState; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // bp
  struct tagTHREADINFO *v18; // rax
  __int64 UserSessionState; // rax
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rdx
  struct tagTHREADINFO *v24; // rbx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  const char *ResultString; // rax
  ULONG_PTR BugCheckParameter3[9]; // [rsp+50h] [rbp-48h] BYREF
  char v30; // [rsp+A0h] [rbp+8h]
  bool v31; // [rsp+B0h] [rbp+18h]

  v30 = a1;
  v2 = a2;
  v3 = 1;
  LOBYTE(a2) = 1;
  v4 = 0;
  v7 = (struct tagTHREADINFO **)HMValidateHandleNoSecure(a1, (__int64)a2);
  if ( v7 )
  {
    if ( v7[2] != PtiCurrent(v6, v5) && (unsigned int)(*((_DWORD *)v2 + 8) - 3) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3735);
    RecalcProperty = CRecalcProp::GetRecalcProperty((const struct tagWND *)v7, v8);
    v10 = RecalcProperty;
    if ( RecalcProperty )
    {
      if ( *((_QWORD *)RecalcProperty + 4) && !*((_QWORD *)RecalcProperty + 6) )
      {
        if ( *((_DWORD *)RecalcProperty + 6) != 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3746);
        IsPendingAndEquivalentMonitorSet = CRecalcState::IsPendingAndEquivalentMonitorSet(
                                             *((CRecalcState **)v10 + 4),
                                             *((const struct tagWND **)v10 + 2));
        v12 = *((_DWORD *)v2 + 8);
        v13 = IsPendingAndEquivalentMonitorSet;
        RestorableRecalcState = 0LL;
        if ( v12 != 3 && v12 != 4 && !IsPendingAndEquivalentMonitorSet )
          RestorableRecalcState = CRecalcProp::FindRestorableRecalcState((const struct tagWND **)v10);
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
          v4 = CRecalcProp::IsWindowEligibleForRecalc((const struct tagWND *)v7) == 0;
        v17 = 0;
        if ( CRecalcState::ShouldDeferRecalc(*((_QWORD *)v10 + 4), (__int64)v7) )
        {
          *(_DWORD *)v2 = 1;
        }
        else
        {
          v18 = PtiCurrent(v16, v15);
          Win32HM_LockIntoThread<1>((__int64)v18, (__int64)v7, (__int64 *)BugCheckParameter3);
          if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( v4 )
            {
              if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0 )
              {
                v17 = *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
              }
              v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
                LOBYTE(v20) = v17;
                LOBYTE(v21) = v31;
                WPP_RECORDER_AND_TRACE_SF_q(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v20,
                  v21,
                  *(_QWORD *)(UserSessionState + 69160),
                  4,
                  7,
                  114,
                  (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
                  v30);
              }
              *(_DWORD *)v2 = 2;
              v17 = 0;
            }
            else
            {
              CRecalcProp::xxxProcessPendingRecalcState(v10, RestorableRecalcState, v13, v2);
            }
          }
          else
          {
            CRecalcProp::xxxProcessPendingRecalcStateOld(v10, (struct tagWND *)v7, RestorableRecalcState, v13, v2);
          }
          if ( v13 )
            RestorableRecalcState = (struct CRecalcState *)*((_QWORD *)v10 + 5);
          CRecalcProp::PruneRecalcStateList((const struct tagWND **)v10, RestorableRecalcState);
          if ( !Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v22) )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
            {
              v17 = 1;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
            {
              v3 = 0;
            }
            if ( v17 || v3 )
            {
              v24 = *v7;
              v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
              LOBYTE(v26) = v3;
              LOBYTE(v27) = v17;
              WPP_RECORDER_AND_TRACE_SF_q(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v27,
                v26,
                *(_QWORD *)(v25 + 69160),
                5,
                7,
                115,
                (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
                (char)v24);
            }
            Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v23);
            return;
          }
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v23);
        }
        ResultString = CRecalcContext::GetResultString(v2);
        InputTraceLogging::DesktopRecalc::HandleDesktopRecalcForWindow((HWND)*v7, ResultString);
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( v4 )
          {
LABEL_51:
            CRecalcProp::RemoveRecalcProperty((struct tagWND *)v7);
            return;
          }
        }
        else if ( !CRecalcProp::IsWindowEligibleForRecalc((const struct tagWND *)v7) )
        {
          goto LABEL_51;
        }
        if ( !*((_QWORD *)v10 + 4) && !*((_QWORD *)v10 + 5) && !*((_QWORD *)v10 + 10) )
          goto LABEL_51;
      }
    }
  }
}
