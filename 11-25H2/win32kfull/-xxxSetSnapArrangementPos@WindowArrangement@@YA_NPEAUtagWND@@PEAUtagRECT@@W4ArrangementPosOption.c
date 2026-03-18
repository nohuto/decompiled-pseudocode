/*
 * XREFs of ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x14020C498 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C3448 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402DAD2C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140029D80 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14002EA3C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14004A6D4 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetRect @ 0x140052B80 (GetRect.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140060C80 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x14009047C (GetMonitorWorkRectForWindow.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016C5AC (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x14018CA34 (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     ?ArrangementStyleFromOverlap@@YA?AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z @ 0x14018CB4C (-ArrangementStyleFromOverlap@@YA-AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z.c)
 *     GetNormalRect @ 0x1401A86B0 (GetNormalRect.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401ADA18 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401B3FF8 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401DCD80 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x14021E738 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1402273BC (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x14022C06C (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1402593D8 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x14026B5C0 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline @ 0x140272100 (Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1402A6860 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     ??1DwmNotifyMoveReason@@QEAA@XZ @ 0x1402A68D8 (--1DwmNotifyMoveReason@@QEAA@XZ.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1402A6D78 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     Feature_MigrateCheckpointForSSWP__private_IsEnabledDeviceUsageNoInline @ 0x1402AC36C (Feature_MigrateCheckpointForSSWP__private_IsEnabledDeviceUsageNoInline.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402C2A50 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     ?xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@WindowArrangement@@K@Z @ 0x1402D19CC (-xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOp.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D4CF4 (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall WindowArrangement::xxxSetSnapArrangementPos(__int64 a1, INT *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r13
  int v5; // ebx
  const struct tagWND *v9; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r12
  _OWORD *MonitorWorkRectForWindow; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagWND *v23; // rax
  struct tagWND *v24; // rbx
  __int64 v25; // r14
  struct tagTHREADINFO *v26; // rax
  struct tagMONITOR *v27; // r8
  __int64 v28; // rdx
  unsigned int v29; // ebx
  LONG v30; // ebx
  struct tagWND *v31; // rdx
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v32; // r8
  struct tagRECT v33; // xmm0
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct tagWND *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct tagTHREADINFO *v39; // rax
  struct tagMONITOR *v40; // r8
  __int64 v41; // rdx
  struct tagWND *v42; // rdx
  __int64 v43; // rsi
  bool v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rdx
  int FrameBoundsOverlapInfo; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v48[2]; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v50[40]; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR v51[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v52; // [rsp+90h] [rbp-70h] BYREF
  __int128 v53; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v54; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v56[2]; // [rsp+C8h] [rbp-38h] BYREF
  int v57; // [rsp+E8h] [rbp-18h]
  __int64 v58; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v59; // [rsp+F8h] [rbp-8h]

  v4 = a4;
  v5 = 0;
  v9 = *(const struct tagWND **)(*((_QWORD *)PtiCurrent(a1, (__int64)a2) + 62) + 328LL);
  if ( !v9 )
    return 0;
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v50, (struct tagWND *)a1);
  v13 = PtiCurrent(v12, v11);
  Win32HM_LockIntoThread<1>((__int64)v13, (__int64)v9, (__int64 *)BugCheckParameter3);
  v48[0] = -1LL;
  v48[1] = 0LL;
  if ( !*((_QWORD *)PtiCurrent(v15, v14) + 89) )
  {
    v17 = MonitorFromRect(a2, 0, 0x12u);
    v18 = v17;
    if ( v17 )
    {
      Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v48, v17);
      MonitorWorkRectForWindow = (_OWORD *)GetMonitorWorkRectForWindow((__int64)v51, v18, v9);
      v52 = 0LL;
      *(_OWORD *)v51 = *MonitorWorkRectForWindow;
      if ( (unsigned int)IntersectRect(&v52, a2, (int *)v51) )
      {
        if ( v52 == *(_OWORD *)a2 )
        {
          FrameBoundsOverlapInfo = GetFrameBoundsOverlapInfo(v51, a2, 1);
          if ( (unsigned int)ArrangementStyleFromOverlap(FrameBoundsOverlapInfo) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 4) != 0
              && !IsGhostWindowClass((const struct tagWND *)a1, v20)
              && (unsigned int)EvaluateArrangeState(a1) != 4 )
            {
              if ( (*(_DWORD *)(a1 + 384) & 0x10) != 0 )
              {
                WindowActions::xxxInterceptSetSnapArrangementPos(a1, a2, a3, (unsigned int)v4);
              }
              else
              {
                if ( (unsigned int)Feature_MigrateCheckpointForSSWP__private_IsEnabledDeviceUsageNoInline() )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x21) == 0 && !IsArranged((const struct tagWND *)a1) )
                  {
                    *(_OWORD *)v51 = 0LL;
                    GetRect(a1, (__int64)v51, 66);
                    CHECKPOINT::Restore((struct tagWND *)a1, (const struct tagRECT *)v51);
                  }
                  v23 = (struct tagWND *)MonitorFromRect(a2, 2u, 0x12u);
                  v22 = *(_QWORD *)(a1 + 40);
                  v24 = v23;
                  v25 = *(_QWORD *)v23;
                  if ( *(_QWORD *)(v22 + 256) != *(_QWORD *)v23 )
                  {
                    v26 = PtiCurrent(v22, v21);
                    Win32HM_LockIntoThread<1>((__int64)v26, (__int64)v24, (__int64 *)v51);
                    AdvancedWindowPos::xxxMigrateCheckpoint((struct tagRECT *)a1, v24, v27);
                    Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(v51, v28);
                  }
                }
                else
                {
                  v25 = 0LL;
                }
                v29 = (*(_DWORD *)(W32GetUserSessionState(v22, v21) + 66800) & 0x10000 | 0x4000u) >> 7;
                if ( (a3 & 1) != 0 )
                {
                  v29 |= 0x20u;
                }
                else if ( (a3 & 2) != 0 )
                {
                  v29 |= 1u;
                }
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x21) != 0 )
                {
                  v29 |= 8u;
                }
                else if ( IsArranged((const struct tagWND *)a1) )
                {
                  *(_DWORD *)(a1 + 380) &= ~0x4000000u;
                }
                else if ( !(unsigned int)Feature_MigrateCheckpointForSSWP__private_IsEnabledDeviceUsageNoInline() )
                {
                  *(_OWORD *)v51 = 0LL;
                  GetRect(a1, (__int64)v51, 66);
                  CHECKPOINT::Restore((struct tagWND *)a1, (const struct tagRECT *)v51);
                }
                v58 = *(_QWORD *)a1;
                *(_OWORD *)v51 = 0LL;
                GetNormalRect((const struct tagWND *)a1, v51);
                v55 = 0LL;
                v59 = *(_OWORD *)v51;
                v53 = 0LL;
                v54 = 0LL;
                xxxInitSendValidateMinMaxInfoEx((struct tagWND *)a1, (__int64)&v53, 0LL);
                TransformShellProvidedRectangle(a1, (int *)&v55, (int *)&v54 + 2, v18, FrameBoundsOverlapInfo, a2);
                v30 = v29 | 0x140;
                *(_QWORD *)&v52 = a1;
                WORD4(v52) = 0;
                if ( (unsigned int)Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline() )
                {
                  *(_DWORD *)(a1 + 380) |= 0x200000u;
                  BYTE8(v52) = 1;
                  AdvancedWindowPos::MarkWindowAsArranged((AdvancedWindowPos *)a1, v31);
                }
                else
                {
                  UpdateDwmSnapArrangedInitiated((struct tagWND *)a1, (__int64)v31);
                }
                if ( !(unsigned int)Feature_MigrateCheckpointForSSWP__private_IsEnabledDeviceUsageNoInline() )
                  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL);
                v33 = *(struct tagRECT *)a2;
                *(_QWORD *)&v56[0].left = 0LL;
                v56[0].right = 0;
                v56[1] = v33;
                v56[0].bottom = v30;
                v57 = v4;
                AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)a1, v56, v32);
                *(_DWORD *)(a1 + 380) |= 0x4000000u;
                DwmNotifyMoveReason::~DwmNotifyMoveReason((DwmNotifyMoveReason *)&v52);
                CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint((CSaveRestoreCheckPoint *)&v58);
                v35 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL);
                if ( v25 != v35 )
                {
                  v36 = (struct tagWND *)ValidateHmonitorNoRip(v35, v34);
                  v39 = PtiCurrent(v38, v37);
                  Win32HM_LockIntoThread<1>((__int64)v39, (__int64)v36, (__int64 *)v51);
                  AdvancedWindowPos::xxxMigrateCheckpoint((struct tagRECT *)a1, v36, v40);
                  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(v51, v41);
                }
                if ( !IsArranged((const struct tagWND *)a1) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7740);
                v5 = 1;
              }
            }
          }
        }
      }
      Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v48, v20);
    }
  }
  v43 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v16);
  if ( v43 )
  {
    if ( v5 )
      NotifyShell::ArrangementCompleted((__int64 *)a1, v4, v5);
    if ( (a3 & 1) != 0 )
      LastWokenThread::Set(*(_QWORD *)(v43 + 16), 1LL, 0LL);
    if ( ShellWindowManagement::WindowSubjectToBehavior(a1, 0x10u, 0, 1) )
    {
      LOBYTE(v42) = 1;
      NotifyShell::TrackedWindowPosChanged((NotifyShell *)a1, v42, v44);
    }
  }
  Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(v48, (__int64)v42);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v45);
  CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v50, v46);
  return v5;
}
