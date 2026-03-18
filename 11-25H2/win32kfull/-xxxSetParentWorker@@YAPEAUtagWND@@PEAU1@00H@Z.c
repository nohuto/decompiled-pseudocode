/*
 * XREFs of ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60
 * Callers:
 *     NtUserSetParent @ 0x140060E30 (NtUserSetParent.c)
 *     xxxSetModernAppWindow @ 0x140254280 (xxxSetModernAppWindow.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1402ACA34 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1402ACB30 (xxxSetBridgeWindowChild.c)
 *     xxxSetWindowData @ 0x1402DE828 (xxxSetWindowData.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14001D970 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     CalcForegroundInsertAfter @ 0x140023FF0 (CalcForegroundInsertAfter.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     UnlinkWindow @ 0x14004BBDC (UnlinkWindow.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x14004EE38 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x140058438 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1400587E0 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x140059EA8 (RedirectDCEs.c)
 *     GetStyleWindow @ 0x14005A130 (GetStyleWindow.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?_GetWindowCloakState@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x140060190 (-_GetWindowCloakState@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     IsImmersiveAppIORestricted @ 0x140060C58 (IsImmersiveAppIORestricted.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140060C80 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     ValidateNewParent @ 0x140061A04 (ValidateNewParent.c)
 *     GetMessageWindow @ 0x140062A3C (GetMessageWindow.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x140064C08 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x140065C00 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z @ 0x14015BC30 (-IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14015BC98 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ResetWindowTransform @ 0x1401A5840 (ResetWindowTransform.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x1401A86E0 (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401ADA18 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1401ADB3C (SetWindowSubtreeCoreWindowStatus.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1401C7E1C (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     ?s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1401CA958 (-s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     zzzAttachThreadInput @ 0x1401E910C (zzzAttachThreadInput.c)
 *     CalcWindowFullScreen @ 0x1401F3F0C (CalcWindowFullScreen.c)
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1401FB028 (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     xxxTurnOffCompositing @ 0x1402062A8 (xxxTurnOffCompositing.c)
 *     RemoveWindowFullScreen @ 0x14021536C (RemoveWindowFullScreen.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1402599A0 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x14025CD28 (-SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z.c)
 *     ?IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z @ 0x14026EA44 (-IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1402847CC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     HasMessageRootWindow @ 0x1402ACAB4 (HasMessageRootWindow.c)
 *     LinkWindow @ 0x1402B6200 (LinkWindow.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1402C9B7C (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x1402D3C1C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 */

struct tagWND *__fastcall xxxSetParentWorker(struct tagWND **a1, struct tagWND *a2, struct tagWND **a3, int a4)
{
  struct tagWND *v7; // rdi
  struct tagWND *DesktopWindow; // r13
  __int64 v9; // rcx
  struct tagWND *MessageWindow; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagWND *v13; // rsi
  struct tagTHREADINFO *v14; // rax
  struct tagWND *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  struct tagWND *v19; // rcx
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 StyleWindow; // rax
  __int64 v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rcx
  struct tagWND *v28; // rdx
  char v29; // r8
  unsigned int v30; // r9d
  unsigned int v31; // r10d
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  struct tagWND *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  struct tagWND *v39; // rsi
  int v40; // r12d
  unsigned int v41; // r9d
  unsigned __int16 v42; // r10
  struct tagWND *i; // rdx
  struct tagFREELIST *v44; // rdi
  struct tagWND *v45; // rax
  struct tagWND *v46; // rcx
  __int64 v47; // rax
  struct tagWND *v48; // rcx
  struct tagWND *v49; // rdx
  struct tagWND *v50; // rax
  struct tagWND *v51; // rcx
  __int64 v52; // rax
  struct tagWND *v53; // rcx
  struct tagWND *v54; // rdx
  struct tagWND *v55; // rax
  struct tagWND *v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  struct tagTHREADINFO *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  struct tagTHREADINFO *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  struct tagTHREADINFO *v68; // rax
  int v70; // ecx
  struct tagWND *v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rcx
  const struct tagWND *v74; // rcx
  struct tagWND *v75; // rdx
  int v76; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v78; // rdx
  CHECKPOINT *v79; // rax
  struct tagTHREADINFO *v80; // rax
  __int64 v81; // rdx
  struct tagWND *TopLevelHostForComponent; // rsi
  __int64 v83; // rdx
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-69h] BYREF
  __int64 v85; // [rsp+50h] [rbp-61h]
  int v86; // [rsp+58h] [rbp-59h] BYREF
  unsigned int v87; // [rsp+5Ch] [rbp-55h]
  struct tagFREELIST *v88; // [rsp+60h] [rbp-51h]
  int v89; // [rsp+68h] [rbp-49h]
  _QWORD v90[2]; // [rsp+78h] [rbp-39h] BYREF
  struct tagWND *v91; // [rsp+88h] [rbp-29h]
  char v92[8]; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v93[16]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v94; // [rsp+A8h] [rbp-9h]
  ULONG_PTR v95[2]; // [rsp+B8h] [rbp+7h] BYREF
  _BYTE v96[64]; // [rsp+C8h] [rbp+17h] BYREF
  unsigned int v97; // [rsp+118h] [rbp+67h]

  BugCheckParameter3 = -1LL;
  v85 = 0LL;
  v88 = 0LL;
  v86 = 0;
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v92, (struct tagWND *)a1);
  v7 = 0LL;
  if ( a2 != (struct tagWND *)-3LL )
    v7 = a2;
  DesktopWindow = (struct tagWND *)GetDesktopWindow((__int64)a1);
  MessageWindow = (struct tagWND *)GetMessageWindow(v9);
  v91 = MessageWindow;
  v13 = MessageWindow;
  if ( a1 == (struct tagWND **)DesktopWindow || a1 == (struct tagWND **)MessageWindow )
    goto LABEL_140;
  if ( !v7 )
    v7 = DesktopWindow;
  if ( a3 && (a3[13] != v7 || a3 == a1) )
    goto LABEL_142;
  v14 = PtiCurrent(v12, v11);
  if ( IsImmersiveAppIORestricted(*((_QWORD *)v14 + 58))
    && (unsigned int)HasMessageRootWindow(a1)
    && !(unsigned int)HasMessageRootWindow(v7) )
  {
LABEL_140:
    v70 = 5;
    goto LABEL_141;
  }
  if ( v7 != DesktopWindow && v7 != v13 )
  {
    v15 = a1[2];
    if ( *((_QWORD *)v15 + 58) == *(_QWORD *)(*((_QWORD *)v7 + 2) + 464LL) )
    {
      v15 = a1[5];
      if ( (((unsigned __int8)*(_DWORD *)(*((_QWORD *)v7 + 5) + 288LL) ^ *((_BYTE *)v15 + 288)) & 0xF) != 0
        && !IsChildWindowDpiIsolationEnabled((struct tagWND *)a1, v7) )
      {
        TraceChildWindowDpiTelemetry(a1, v7, 1LL);
        goto LABEL_95;
      }
    }
  }
  if ( WindowActions::IsInterceptWindow((WindowActions *)a1, v15) )
  {
LABEL_95:
    v70 = 5023;
LABEL_141:
    UserSetLastError(v70);
LABEL_142:
    CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v92);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&BugCheckParameter3, v83);
    return 0LL;
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v95, (__int64)v7);
  if ( !(unsigned int)ValidateNewParent(a1, v7, 0LL)
    || (W32GetUserSessionState(v17, v16),
        v18 = xxxShowWindowEx(a1, 0LL, 0LL),
        v19 = a1[5],
        v20 = v18,
        v89 = v18,
        (*((_BYTE *)v19 + 31) & 0x10) != 0) )
  {
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v95, v16);
    goto LABEL_142;
  }
  if ( (*((_DWORD *)v19 + 58) & 2) != 0 )
    DecomposeWindowIfNeeded((struct tagWND *)a1);
  if ( !(unsigned int)ValidateNewParent(a1, v7, 0LL) )
  {
    if ( v20 && *((char *)a1[5] + 19) >= 0 )
    {
      W32GetUserSessionState(v22, v21);
      xxxShowWindowEx(a1, 1LL, 0LL);
    }
    v80 = PtiCurrent(v22, v21);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v80, v95);
    if ( v92[0] && v94 )
      PopAndFreeW32ThreadLock((__int64)v93, v81);
    return 0LL;
  }
  UserSessionState = W32GetUserSessionState(v22, v21);
  ++*(_DWORD *)(UserSessionState + 70600);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v96);
  StyleWindow = GetStyleWindow((__int64)a1, 2848);
  v25 = (__int64)a1[13];
  v90[0] = StyleWindow;
  v26 = StyleWindow;
  Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)&BugCheckParameter3, v25);
  v27 = *(_QWORD *)(v25 + 40);
  v28 = a1[5];
  v29 = *(_BYTE *)(v27 + 26) & 0x40;
  if ( v29 )
    v30 = *((_DWORD *)v28 + 24);
  else
    v30 = *((_DWORD *)v28 + 22);
  v31 = *((_DWORD *)v28 + 23);
  v32 = *(_WORD *)(v27 + 42) & 0x2FFF;
  v97 = v30;
  v87 = v31;
  if ( v32 != 669 )
  {
    if ( v29 )
      v97 = *(_DWORD *)(v27 + 112) - v30;
    else
      v97 = v30 - *(_DWORD *)(v27 + 104);
    v87 = v31 - *(_DWORD *)(v27 + 108);
  }
  if ( *((_DWORD *)v28 + 59) != 1 )
  {
    if ( v7 != DesktopWindow && v7 != v91 )
      goto LABEL_24;
    SetOrClrWF(1, (struct tagWND *)a1, 0x808u, 1);
  }
  if ( v7 != DesktopWindow )
  {
LABEL_24:
    if ( (struct tagWND *)v25 != DesktopWindow )
      goto LABEL_25;
    TopLevelHostForComponent = (struct tagWND *)a1;
    if ( (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)a1, (__int64)v28) )
      TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent((const struct tagWND *)a1);
    if ( TopLevelHostForComponent && (*(_BYTE *)(*((_QWORD *)TopLevelHostForComponent + 5) + 233LL) & 0x20) != 0 )
      zzzUpdateWindowCompositionCloak(a1, 1LL, 2LL);
    ResetWindowTransform(a1);
    CRecalcProp::s_OnWindowBecomingChild((struct tagWND *)a1);
    WindowMargins::CheckForChanges((struct tagWND *)a1, 4LL);
    goto LABEL_118;
  }
  if ( (struct tagWND *)v25 == DesktopWindow )
    goto LABEL_25;
  v71 = (struct tagWND *)v25;
  if ( !(unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v25, (__int64)v28) )
    goto LABEL_102;
  v74 = (const struct tagWND *)v25;
LABEL_101:
  v71 = CoreWindowProp::GetTopLevelHostForComponent(v74);
LABEL_102:
  while ( v71 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v71 + 5) + 233LL) & 0x20) != 0 )
    {
      zzzUpdateWindowCompositionCloak(a1, 0LL, 2LL);
      break;
    }
    v71 = (struct tagWND *)*((_QWORD *)v71 + 13);
    if ( (unsigned int)CoreWindowProp::IsComponent(v71, v72) )
    {
      v74 = v71;
      goto LABEL_101;
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v73);
  v78 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v78 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( (*(_BYTE *)(v78 + 808) & 0x30) == 0x10 && (_GetWindowCloakState((__int64)a1) & 1) != 0 )
    zzzUpdateWindowCompositionCloak(a1, 1LL, 1LL);
  if ( (*((_DWORD *)a1 + 95) & 0x400) != 0 )
    RemoveWindowFullScreen(a1);
  WindowMargins::CheckForChanges((struct tagWND *)a1, 3LL);
  v79 = CHECKPOINT::Get((const struct tagWND *)a1);
  if ( v79 )
    CHECKPOINT::SendNormalToDwm(v79, (const struct tagWND *)a1);
LABEL_118:
  v26 = v90[0];
LABEL_25:
  UnlinkWindow((__int64 *)a1, (__int64 *)v25);
  v33 = 0LL;
  if ( v7 )
    v33 = *((_QWORD *)v7 + 6);
  *((_QWORD *)a1[5] + 6) = v33;
  v90[0] = a1 + 13;
  v90[1] = v7;
  HMAssignmentLock(v90, 0LL);
  if ( !v7 || (v34 = 1LL, (*((_DWORD *)v7 + 95) & 0x1000) == 0) )
    v34 = 0LL;
  SetWindowSubtreeCoreWindowStatus(a1, v34);
  if ( (*((_BYTE *)a1[5] + 31) & 0x40) != 0 )
  {
    v55 = a1[15];
    if ( v55 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v55 + 5) + 24LL) & 8) != 0 )
        SetOrClrWF(1, (struct tagWND *)a1, 0x808u, 1);
    }
  }
  if ( v7 == (struct tagWND *)GetDesktopWindow((__int64)a1) && (*(_BYTE *)(v35 + 24) & 8) == 0 )
  {
    CalcWindowFullScreen(v36);
    CalcForegroundInsertAfter((__int64)a1);
  }
  LinkWindow((struct tagWND *)a1);
  if ( a2 == (struct tagWND *)-3LL && !IsWindowShellCloakedComponentUIAware((const struct tagWND *)a1, 1) )
    zzzUpdateWindowCompositionCloak(a1, 0LL, 2LL);
  v37 = GetStyleWindow((__int64)a1, 2848);
  if ( v26 )
  {
    if ( v37 )
    {
      if ( v26 != v37 )
        ChangeRedirectionParentInDCEs((__int64)a1, 1LL);
    }
    else
    {
      UnredirectDCEs((__int64)a1);
    }
  }
  else if ( v37 )
  {
    RedirectDCEs((__int64)a1, v38);
  }
  if ( v7 == (struct tagWND *)GetDesktopWindow((__int64)a1) && (*((_BYTE *)a1[5] + 31) & 4) == 0 )
  {
    SetOrClrWF(1, (struct tagWND *)a1, 0xF04u, 1);
    zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)a1, 1LL, 0LL);
  }
  if ( (*((_BYTE *)a1[5] + 31) & 0xC0) == 0x40 )
  {
    v45 = a1[3];
    v46 = 0LL;
    if ( v45 )
    {
      v47 = *((_QWORD *)v45 + 1);
      if ( v47 )
        v46 = *(struct tagWND **)(v47 + 24);
    }
    if ( a1[13] != v46 )
    {
      v48 = a1[2];
      v49 = *(struct tagWND **)(v25 + 16);
      if ( v48 != v49 )
        zzzAttachThreadInput(v48, v49, 0LL);
    }
    v50 = a1[3];
    v51 = 0LL;
    if ( v50 )
    {
      v52 = *((_QWORD *)v50 + 1);
      if ( v52 )
        v51 = *(struct tagWND **)(v52 + 24);
    }
    if ( v7 != v51 )
    {
      v53 = a1[2];
      v54 = (struct tagWND *)*((_QWORD *)v7 + 2);
      if ( v53 != v54 )
        zzzAttachThreadInput(v53, v54, a4 != 0 ? 32769 : 1);
    }
  }
  v39 = v91;
  if ( v7 == v91 || (struct tagWND *)v25 == v91 )
    v40 = 21;
  else
    v40 = 5;
  if ( _bittest((const signed __int32 *)(v25 + 380), 0x13u) || _bittest((const signed __int32 *)a1 + 95, 0x13u) )
  {
    v75 = a1[5];
    v76 = *((_DWORD *)v75 + 72);
    if ( (v76 & 0xF) == 2 && (v76 & 0xF0) == 0x10 )
      *((_DWORD *)a1 + 95) &= ~0x80000u;
    *((_DWORD *)v75 + 58) &= ~0x400u;
    v40 |= 0x20u;
  }
  if ( !IsTopLevelWindow((__int64)a1) && v7 )
    LOBYTE(v41) = *(_WORD *)(*((_QWORD *)v7 + 5) + 286LL) != v42;
  SetDeferredDpiStateForWindowAndChildren(a1, v41, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v96);
  zzzEndDeferWinEventNotify();
  for ( i = a1[13]; i && (*(_BYTE *)(*((_QWORD *)i + 5) + 27LL) & 2) == 0; i = (struct tagWND *)*((_QWORD *)i + 13) )
    ;
  if ( i )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, (struct tagWND *)a1, 0, 0, 1);
  if ( !v7 || (struct tagWND *)v25 == DesktopWindow || v7 == DesktopWindow )
  {
    v44 = 0LL;
    goto LABEL_74;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v25 + 40) + 256LL) == *(_QWORD *)(*((_QWORD *)v7 + 5) + 256LL) )
  {
    v44 = v88;
LABEL_74:
    xxxSetWindowPos((struct tagWND *)a1, 0LL, v97, v87, 0, 0, v40);
    goto LABEL_75;
  }
  v44 = BuildWindowListWithDpiBoundaryInfo((struct tagWND *)a1, (struct tagWND *)v25, 0LL, &v86);
  if ( !v86 )
    goto LABEL_74;
LABEL_75:
  v56 = a1[13];
  if ( !v56
    || (((unsigned __int8)*((_DWORD *)a1[5] + 72) ^ *(_BYTE *)(*((_QWORD *)v56 + 5) + 288LL)) & 0xF) == 0
    || v56 == DesktopWindow
    || v56 == v39
    || IsChildWindowDpiIsolationEnabled((struct tagWND *)a1, v56) )
  {
    xxxInheritWindowMonitor((struct tagWND *)a1);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext((struct tagWND *)a1, *(_DWORD *)(*((_QWORD *)a1[13] + 5) + 288LL));
  }
  if ( v44 )
  {
    xxxUpdateWindowPositionsForDpiBoundaryChange(v44);
    FreeListFree(v44);
  }
  if ( v89 )
  {
    W32GetUserSessionState(v58, v57);
    LOBYTE(v59) = 1;
    xxxShowWindowEx(a1, v59, 0LL);
  }
  v60 = PtiCurrent(v58, v57);
  v61 = Win32HM_UnlockFromThread<1>((ULONG_PTR)v60, &BugCheckParameter3);
  BugCheckParameter3 = -1LL;
  v62 = v61;
  v85 = 0LL;
  v65 = PtiCurrent(v64, v63);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v65, v95);
  if ( v92[0] && v94 )
    PopAndFreeW32ThreadLock((__int64)v93, v66);
  if ( BugCheckParameter3 != -1LL )
  {
    v68 = PtiCurrent(v67, v66);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v68, &BugCheckParameter3);
  }
  return (struct tagWND *)v62;
}
