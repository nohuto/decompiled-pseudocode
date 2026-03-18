/*
 * XREFs of ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x14028E8F0
 * Callers:
 *     ?s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z @ 0x14015D1C8 (-s_xxxProcessRecalcSignal@CRecalcProp@@SAXW4SignalReason@DesktopRecalc@@PEAUHWND__@@@Z.c)
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401F3684 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z @ 0x1402DEDD4 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402DEFD8 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x14011CF74 (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14011D2A8 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x14015EFB0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z @ 0x14015F6C0 (-IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14015F738 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x140210060 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     ?HandleDesktopRecalcForWindow@DesktopRecalc@InputTraceLogging@@SAXQEAUHWND__@@PEBDII@Z @ 0x140245D98 (-HandleDesktopRecalcForWindow@DesktopRecalc@InputTraceLogging@@SAXQEAUHWND__@@PEBDII@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetResultString@CRecalcContext@@QEAAPEBDXZ @ 0x1402DD948 (-GetResultString@CRecalcContext@@QEAAPEBDXZ.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402DFB54 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 */

void __fastcall CRecalcProp::s_xxxProcessTopologyChange(__int64 a1, struct CRecalcContext *a2)
{
  char v3; // si
  bool v4; // r13
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // eax
  struct CRecalcProp *RecalcProperty; // rax
  struct CRecalcProp *v10; // rbx
  bool IsPendingAndEquivalentMonitorSet; // al
  int v12; // ecx
  bool v13; // r12
  struct CRecalcState *RestorableRecalcState; // r15
  int v15; // ebp
  char ShouldDeferRecalc; // al
  __int64 v17; // rcx
  bool v18; // bp
  struct tagTHREADINFO *v19; // rax
  __int64 UserSessionState; // rax
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rdx
  HWND v24; // rbx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  const char *ResultString; // rax
  ULONG_PTR BugCheckParameter3[9]; // [rsp+50h] [rbp-48h] BYREF
  char v30; // [rsp+A0h] [rbp+8h]
  bool v31; // [rsp+B0h] [rbp+18h]

  v30 = a1;
  v3 = 1;
  v4 = 0;
  v6 = HMValidateHandleNoSecure(a1, 1);
  if ( v6 )
  {
    if ( *(struct tagTHREADINFO **)(v6 + 16) != PtiCurrent(v5) )
    {
      v8 = *((_DWORD *)a2 + 8);
      if ( v8 != 3 && v8 != 4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3778);
    }
    RecalcProperty = CRecalcProp::GetRecalcProperty((const struct tagWND *)v6, v7);
    v10 = RecalcProperty;
    if ( RecalcProperty )
    {
      if ( *((_QWORD *)RecalcProperty + 4) && !*((_QWORD *)RecalcProperty + 6) )
      {
        if ( *((_DWORD *)RecalcProperty + 6) != 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3789);
        IsPendingAndEquivalentMonitorSet = CRecalcState::IsPendingAndEquivalentMonitorSet(
                                             *((CRecalcState **)v10 + 4),
                                             *((const struct tagWND **)v10 + 2));
        v12 = *((_DWORD *)a2 + 8);
        v13 = IsPendingAndEquivalentMonitorSet;
        RestorableRecalcState = 0LL;
        v15 = 0;
        if ( v12 == 3 )
        {
          v15 = 1;
        }
        else if ( v12 == 4 )
        {
          v15 = 3;
        }
        else if ( !IsPendingAndEquivalentMonitorSet )
        {
          RestorableRecalcState = CRecalcProp::FindRestorableRecalcState((const struct tagWND **)v10);
          if ( RestorableRecalcState )
            v15 = (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x20) != 0;
        }
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
          v4 = CRecalcProp::IsWindowEligibleForRecalc((const struct tagWND *)v6) == 0;
        ShouldDeferRecalc = CRecalcState::ShouldDeferRecalc(*((_QWORD *)v10 + 4), v6, v15);
        v18 = 0;
        if ( ShouldDeferRecalc )
        {
          *(_DWORD *)a2 = 1;
        }
        else
        {
          v19 = PtiCurrent(v17);
          Win32HM_LockIntoThread<1>((__int64)v19, v6, (__int64 *)BugCheckParameter3);
          if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( v4 )
            {
              if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0 )
              {
                v18 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
              }
              v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
                LOBYTE(v21) = v18;
                LOBYTE(v22) = v31;
                WPP_RECORDER_AND_TRACE_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v21,
                  v22,
                  *(_QWORD *)(UserSessionState + 69152),
                  4,
                  7,
                  114,
                  (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                  v30);
              }
              *(_DWORD *)a2 = 2;
              v18 = 0;
            }
            else
            {
              CRecalcProp::xxxProcessPendingRecalcState(v10, RestorableRecalcState, v13, a2);
            }
          }
          else
          {
            CRecalcProp::xxxProcessPendingRecalcStateOld(v10, (struct tagWND *)v6, RestorableRecalcState, v13, a2);
          }
          if ( v13 )
            RestorableRecalcState = (struct CRecalcState *)*((_QWORD *)v10 + 5);
          CRecalcProp::PruneRecalcStateList((const struct tagWND **)v10, RestorableRecalcState);
          if ( !Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3) )
          {
            if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
            {
              v18 = 1;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || !*((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              v3 = 0;
            }
            if ( v18 || v3 )
            {
              v24 = *(HWND *)v6;
              v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
              LOBYTE(v26) = v3;
              LOBYTE(v27) = v18;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v27,
                v26,
                *(_QWORD *)(v25 + 69152),
                5,
                7,
                115,
                (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                (char)v24);
            }
            Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
            return;
          }
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
        }
        ResultString = CRecalcContext::GetResultString(a2);
        InputTraceLogging::DesktopRecalc::HandleDesktopRecalcForWindow(*(HWND *)v6, ResultString);
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( v4 )
          {
LABEL_55:
            CRecalcProp::RemoveRecalcProperty((struct tagWND *)v6);
            return;
          }
        }
        else if ( !CRecalcProp::IsWindowEligibleForRecalc((const struct tagWND *)v6) )
        {
          goto LABEL_55;
        }
        if ( !*((_QWORD *)v10 + 4) && !*((_QWORD *)v10 + 5) && !*((_QWORD *)v10 + 10) )
          goto LABEL_55;
      }
    }
  }
}
