/*
 * XREFs of ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CDFBC
 * Callers:
 *     NtUserApplyWindowAction @ 0x1402945A0 (NtUserApplyWindowAction.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB78 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401CAE4C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140217238 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsAppModelFeatureEnabled@@YA_NK@Z @ 0x140274150 (-IsAppModelFeatureEnabled@@YA_NK@Z.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A67FC (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?OnApplyWindowActionReRunRequest@CRecalcProp@@QEAA_NPEAUtagWND@@@Z @ 0x1402C4A94 (-OnApplyWindowActionReRunRequest@CRecalcProp@@QEAA_NPEAUtagWND@@@Z.c)
 *     ?ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@AdvancedWindowPos@@@Z @ 0x1402CAA24 (-ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@Advance.c)
 *     ?ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402CAB40 (-ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     ?PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402CB7B4 (-PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?ResolvePublicWindowAction@@YA_NPEAU_WINDOW_ACTION@@PEAVCWindowAction@AdvancedWindowPos@@PEAW4ApplyWindowActionError@3@@Z @ 0x1402CC004 (-ResolvePublicWindowAction@@YA_NPEAU_WINDOW_ACTION@@PEAVCWindowAction@AdvancedWindowPos@@PEAW4Ap.c)
 *     ?RestorePendingDisplayChangeInfo@CInterceptWindowProp@@SA_NPEAUtagWND@@_NIPEAVCWindowAction@AdvancedWindowPos@@PEAW4ApplyWindowActionError@4@@Z @ 0x1402CC4F8 (-RestorePendingDisplayChangeInfo@CInterceptWindowProp@@SA_NPEAUtagWND@@_NIPEAVCWindowAction@Adva.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall WindowActions::xxxApplyAction(
        WindowActions *this,
        struct _WINDOW_ACTION *a2,
        struct _WINDOW_ACTION *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  struct tagTHREADINFO *v9; // r12
  int v10; // eax
  char v11; // r15
  char v12; // bl
  struct tagWND *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // r13
  char v17; // bl
  __int64 v18; // rbx
  __int64 UserSessionState; // rax
  int v20; // edx
  int v21; // r8d
  CRecalcProp *RecalcProperty; // rax
  __int64 v23; // rax
  int v24; // eax
  __int128 v25; // xmm1
  unsigned int v26; // r8d
  __int64 v27; // rdx
  unsigned int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rdx
  bool v31; // [rsp+50h] [rbp-B0h]
  unsigned int v32; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h]
  __int128 v35; // [rsp+68h] [rbp-98h] BYREF
  __int128 v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+88h] [rbp-78h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp-70h] BYREF
  int v39; // [rsp+A0h] [rbp-60h] BYREF
  int v40; // [rsp+A4h] [rbp-5Ch]
  __int128 v41; // [rsp+10Ch] [rbp+Ch]
  __int128 v42; // [rsp+11Ch] [rbp+1Ch]
  int v43; // [rsp+12Ch] [rbp+2Ch]
  __int64 v44; // [rsp+130h] [rbp+30h]
  _BYTE v45[40]; // [rsp+148h] [rbp+48h] BYREF

  if ( (W32GetCurrentThreadDpiAwarenessContext(this) & 0xF) != 2 )
  {
    v7 = 1;
    return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v7);
  }
  v9 = PtiCurrent(v6, v5);
  LOBYTE(v10) = IAMThreadAccessGranted(v9);
  v11 = 1;
  if ( v10 )
  {
    v12 = 1;
    CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)&v33);
    v13 = (struct tagWND *)ValidateHwnd(this);
    if ( (_BYTE)v34 )
      *(_BYTE *)(v33 + 1708) = 1;
  }
  else
  {
    v12 = 0;
    v13 = (struct tagWND *)ValidateHwnd(this);
  }
  if ( !v13 )
  {
    v7 = 2;
    return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v7);
  }
  if ( !IsTopLevelWindow((__int64)v13) )
  {
    v7 = 3;
    return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v7);
  }
  v16 = (struct tagTHREADINFO *)*((_QWORD *)v13 + 2);
  if ( !v12 )
  {
    if ( v16 != v9 )
    {
      v7 = 5;
      return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v7);
    }
    if ( !IsAppModelFeatureEnabled(v15) )
    {
      v7 = 4;
      return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v7);
    }
  }
  if ( (*(_DWORD *)a2 & 0x200) == 0 )
  {
    v17 = 0;
LABEL_33:
    AdvancedWindowPos::CWindowAction::CWindowAction((__int64)&v39, 0);
    v32 = 0;
    if ( v16 == v9 )
    {
      v40 |= 0x2000u;
    }
    else
    {
      v23 = *((_QWORD *)v13 + 2);
      v40 |= 0x800u;
      v44 = v23;
    }
    if ( (*(_DWORD *)a2 & 0x400) != 0 )
    {
      v24 = 0;
      v25 = 0LL;
      v37 = 0;
      v35 = 0LL;
      v36 = 0LL;
      if ( v16 == v9 )
      {
        if ( !PopFrontSystemOperationData(v13, (struct AdvancedWindowPos::SystemOperationData *)&v35) )
        {
          v26 = 8;
          goto LABEL_46;
        }
        v24 = v37;
        v25 = v36;
      }
      else
      {
        LODWORD(v35) = 1;
      }
      v39 |= 0x400u;
      v42 = v25;
      v43 = v24;
      v41 = v35;
    }
    if ( (!v17
       || CInterceptWindowProp::RestorePendingDisplayChangeInfo(
            v13,
            v16 == v9,
            *((_DWORD *)a2 + 22),
            (struct AdvancedWindowPos::CWindowAction *)&v39,
            (enum AdvancedWindowPos::ApplyWindowActionError *)&v32))
      && ResolvePublicWindowAction(
           a2,
           (struct AdvancedWindowPos::CWindowAction *)&v39,
           (enum AdvancedWindowPos::ApplyWindowActionError *)&v32) )
    {
      if ( v16 != v9 && (*(_DWORD *)a2 & 0x10) != 0 && (*((_DWORD *)a2 + 1) & 2) != 0 )
      {
        v39 |= 0x10u;
        v40 |= 2u;
      }
      Win32HM_LockIntoThread<0>((__int64)v9, (__int64)v13, BugCheckParameter3);
      v34 = 0LL;
      LOBYTE(v33) = 0;
      AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v33, v29);
      if ( v16 == v9 )
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v33);
      AdvancedWindowPos::xxxApplyWindowAction(v13, &v39, 0LL);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v33);
      if ( v17 )
        CInterceptWindowProp::ClearPendingDisplayChangeInfo(v13);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v30);
      v28 = 0;
      goto LABEL_57;
    }
    v26 = v32;
LABEL_46:
    v28 = ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v26);
LABEL_57:
    CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
      (CThreadLockedCurrentMonitorTopologyPtr *)v45,
      v27);
    return v28;
  }
  v17 = 1;
  if ( *((_DWORD *)a2 + 22) )
    goto LABEL_33;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v11 = 0;
  }
  v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v18 = *(_QWORD *)v13;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
    LOBYTE(v20) = v11;
    LOBYTE(v21) = v31;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v20,
      v21,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      4,
      14,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v18);
  }
  if ( v16 != v9 )
  {
    v7 = 6;
    return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v7);
  }
  RecalcProperty = CRecalcProp::GetRecalcProperty(v13, v14);
  if ( !RecalcProperty || !CRecalcProp::OnApplyWindowActionReRunRequest(RecalcProperty, v13) )
  {
    v7 = 7;
    return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v7);
  }
  return 0LL;
}
