/*
 * XREFs of ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC
 * Callers:
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1400268A8 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140027A5C (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x140221DBC (_anonymous_namespace_--xxxAwpMinMaximizeEx.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A9840 (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402AB8B4 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x14002ADF4 (xxxSendMinRectMessages.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x14004A2FC (IsToplevelWindowDesktopComposed.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14004A6D4 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x14004E1DC (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x14004EA98 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetRect @ 0x140052B80 (GetRect.c)
 *     IsVisible @ 0x140053FD8 (IsVisible.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x14005BB80 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140060C80 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     DwmSyncNotifyMinimizing @ 0x1401190E4 (DwmSyncNotifyMinimizing.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x14014ED28 (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     xxxShowOwnedWindows @ 0x14018786C (xxxShowOwnedWindows.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140187CB8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1401A77E4 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401ADA18 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401BB244 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1401BD1F4 (-CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1401C8208 (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 *     ParkIcon @ 0x1401EA1E8 (ParkIcon.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x14020AB98 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 *     DwmAsyncNotifyAnimationChange @ 0x140224764 (DwmAsyncNotifyAnimationChange.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x14026B5C0 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline @ 0x140272100 (Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ??1DwmNotifyMoveReason@@QEAA@XZ @ 0x1402A68D8 (--1DwmNotifyMoveReason@@QEAA@XZ.c)
 *     ?RestoreArrangedState@@YAXPEAUtagWND@@PEBUCHECKPOINT@@@Z @ 0x1402A7F54 (-RestoreArrangedState@@YAXPEAUtagWND@@PEBUCHECKPOINT@@@Z.c)
 *     xxxFlushPalette @ 0x1402BE7C0 (xxxFlushPalette.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z @ 0x1402C6A30 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402C6C34 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402D0B40 (-xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D4CF4 (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     ?MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D4DD4 (-MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1402DF754 (xxxDrawAnimatedRects.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxMinMaximizeEx(__int64 a1, unsigned int a2, int a3, __int64 **a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v8; // r14
  __m128i v9; // xmm6
  char v10; // cl
  struct tagTHREADINFO *v11; // rax
  __int64 *v12; // rcx
  bool v13; // r13
  char v14; // si
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // ebx
  int v21; // ecx
  int v22; // r15d
  const struct tagTHREADINFO *v23; // rax
  int v24; // eax
  void *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 UserSessionState; // rax
  struct CHECKPOINT *Prop; // rax
  struct CHECKPOINT *v30; // r14
  int v31; // eax
  unsigned int v32; // esi
  struct tagWND *v33; // rdx
  bool v34; // al
  __int64 v35; // rdx
  int v36; // edx
  LONG v37; // eax
  bool v38; // zf
  __m128i *v39; // r13
  __m128i v40; // xmm7
  __m128i v41; // xmm8
  struct tagTHREADINFO *v42; // rbx
  __int64 v43; // rax
  int v44; // edx
  char v45; // cl
  unsigned int v46; // r15d
  int v47; // r13d
  int v48; // r14d
  int v49; // ebx
  struct tagWND *v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // edx
  __int64 v53; // rax
  char v54; // dl
  int v55; // esi
  char v56; // bl
  char v57; // r15
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  struct tagWND *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  void *v66; // rbx
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rdx
  struct tagTHREADINFO *v72; // rcx
  __int64 i; // rdx
  __int64 v74; // rdx
  __int64 v75; // rax
  unsigned int v76; // edx
  __int64 v77; // rdx
  int v78; // ecx
  struct tagWND *v79; // rdx
  bool v80; // al
  char v81; // cl
  struct tagWND *v82; // r14
  char v83; // cl
  __int64 v84; // rax
  int v85; // eax
  struct tagWND *v86; // rdx
  struct tagWND *v87; // rdx
  struct tagWND *v88; // rdx
  __int64 v89; // rdx
  bool v90; // r13
  int v91; // ebx
  __int64 v92; // rax
  int v93; // r8d
  int v94; // edx
  int v95; // ebx
  ULONG_PTR v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdx
  char v101; // r9
  __int64 v102; // r10
  int v103; // r11d
  __m128i v104; // xmm7
  unsigned int v105; // edx
  __int64 v106; // rcx
  struct tagWND *v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  int v111; // r13d
  unsigned int v112; // ebx
  __int64 v113; // rax
  __int64 v114; // rax
  int v115; // ecx
  __int64 v116; // rcx
  struct tagWND *v117; // rcx
  __int64 v118; // rax
  void *v119; // rax
  char v120; // [rsp+50h] [rbp-B8h]
  char v121; // [rsp+58h] [rbp-B0h]
  int v122; // [rsp+60h] [rbp-A8h]
  int v123; // [rsp+60h] [rbp-A8h]
  char v124; // [rsp+68h] [rbp-A0h]
  bool v125; // [rsp+69h] [rbp-9Fh] BYREF
  char v126; // [rsp+6Ah] [rbp-9Eh]
  char v127; // [rsp+6Bh] [rbp-9Dh]
  int v128; // [rsp+6Ch] [rbp-9Ch]
  int v129; // [rsp+70h] [rbp-98h]
  int v130; // [rsp+74h] [rbp-94h]
  struct tagTHREADINFO *v131; // [rsp+78h] [rbp-90h]
  int v132; // [rsp+80h] [rbp-88h]
  int v133; // [rsp+84h] [rbp-84h]
  __m128i v134; // [rsp+88h] [rbp-80h]
  int v135; // [rsp+98h] [rbp-70h]
  unsigned int v136; // [rsp+9Ch] [rbp-6Ch]
  int v137; // [rsp+A0h] [rbp-68h]
  int v138; // [rsp+A4h] [rbp-64h]
  int v139; // [rsp+A8h] [rbp-60h]
  int v140; // [rsp+ACh] [rbp-5Ch]
  int v141; // [rsp+B0h] [rbp-58h]
  __int64 *v142; // [rsp+B8h] [rbp-50h]
  __int64 *v143; // [rsp+C0h] [rbp-48h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v145; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v146; // [rsp+E0h] [rbp-28h]
  ULONG_PTR v147[2]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v148[40]; // [rsp+F8h] [rbp-10h] BYREF
  struct tagRECT v149; // [rsp+120h] [rbp+18h] BYREF
  struct tagRECT v150; // [rsp+130h] [rbp+28h] BYREF
  __int128 v151; // [rsp+140h] [rbp+38h]
  __int128 v152; // [rsp+150h] [rbp+48h]
  __int64 v153; // [rsp+160h] [rbp+58h]

  *(_QWORD *)&v149.left = a1;
  v4 = a2;
  v153 = 0LL;
  v5 = a1;
  v147[0] = *(_QWORD *)(a1 + 104);
  v6 = *(_QWORD *)(a1 + 40);
  v151 = 0LL;
  v8 = a3;
  v152 = 0LL;
  LOBYTE(v6) = *(_BYTE *)(v6 + 31);
  v9 = 0LL;
  BugCheckParameter3[0] = (ULONG_PTR)a4;
  v10 = v6;
  v130 = a3;
  v134 = 0LL;
  LOBYTE(v128) = v6 & 0x20;
  v143 = a4[2];
  v11 = (struct tagTHREADINFO *)a4[1];
  v127 = v10 & 1;
  v12 = *a4;
  v129 = 0;
  v139 = 0;
  v138 = 0;
  v137 = 0;
  v133 = 0;
  v132 = 0;
  v140 = 0;
  v136 = 0;
  v135 = 0;
  v141 = 1;
  v142 = v12;
  v131 = v11;
  v150 = 0LL;
  if ( v11 && (a3 & 8) != 0 )
  {
    v13 = 1;
    v121 = 1;
  }
  else
  {
    v121 = 0;
    v13 = 0;
    if ( !v11 )
    {
LABEL_6:
      v14 = 0;
      goto LABEL_7;
    }
  }
  v14 = 1;
  if ( (a3 & 0x200000) == 0 )
    goto LABEL_6;
LABEL_7:
  v124 = v14;
  if ( !v12 || (v126 = 1, a2 != 9) )
    v126 = 0;
  v125 = 0;
  if ( (unsigned int)((__int64 (*)(void))Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline)() )
  {
    v121 = v13;
    v125 = (v8 & 0x800000) != 0;
  }
  if ( v14 )
  {
    if ( (_DWORD)v4 != 3 && (_DWORD)v4 != 6 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1577LL);
    if ( v13 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1579LL);
  }
  if ( v142 && (_DWORD)v4 != 9 && (_DWORD)v4 != 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1581LL);
  if ( v126 && (v8 & 0x80u) == 0LL )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1583LL);
  if ( (v8 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *(struct tagTHREADINFO **)(v5 + 16),
      *(struct tagQ **)(*(_QWORD *)(v5 + 16) + 472LL),
      0x17u,
      (struct tagWND *)v5,
      0,
      v4,
      v8 & 0xFFFFFFFFFFFDFFFFuLL,
      0LL);
    return;
  }
  if ( (v8 & 0x40000) == 0 && (*(_DWORD *)(v5 + 384) & 0x10) != 0 )
  {
    WindowActions::xxxInterceptMinMaximize(v5, (unsigned int)v4, (unsigned int)v8, a4);
    return;
  }
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v148, (struct tagWND *)v5);
  v145 = v5;
  v146 = 0;
  v15 = ((v8 & 0x20) << 15) | 0x10;
  if ( (v8 & 0x10) == 0 )
    v15 = (v8 & 0x20) << 15;
  v16 = v15 | 4;
  if ( (v8 & 0x40) == 0 )
    v16 = v15;
  v17 = v16 | 0x80000;
  if ( (v8 & 0x80u) == 0LL )
    v17 = v16;
  v18 = v17 | 0x400000;
  if ( (v8 & 0x100) == 0 )
    v18 = v17;
  v19 = v18 | 0x800000;
  if ( (v8 & 0x200) == 0 )
    v19 = v18;
  v20 = v19 | 0x1000000;
  if ( (v8 & 0x40000) == 0 )
    v20 = v19;
  if ( !(unsigned int)((__int64 (*)(void))Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline)() )
  {
    v121 = v13;
    if ( (v8 & 0x400) != 0 )
    {
      v20 |= 0x200000u;
      v121 = v13;
    }
  }
  v21 = v20 | 0x80;
  if ( (v8 & 0x100000) == 0 )
    v21 = v20;
  v22 = v21 | 0x200;
  if ( (v8 & 0x400000) == 0 )
    v22 = v21;
  v23 = PtiCurrent();
  if ( (unsigned int)IsThreadDesktopComposed(v23) )
  {
    v24 = v8;
    LODWORD(v8) = v8 & 0xFFFEFFFF;
    v130 = v8;
    v141 = v24 & 0x10000;
    if ( (v24 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed(v5) )
      {
        v25 = (void *)ReferenceDwmApiPort();
        DwmAsyncNotifyAnimationChange(v25);
      }
    }
  }
  GetRect(v5, &v150, 66LL);
  if ( (v8 & 4) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v27, v26);
    Prop = (struct CHECKPOINT *)GetProp(v5, *(unsigned __int16 *)(UserSessionState + 41334), 1u);
  }
  else
  {
    Prop = CHECKPOINT::Restore((struct tagWND *)v5, &v150);
  }
  v30 = Prop;
  if ( !Prop )
    goto LABEL_260;
  v31 = ((__int64 (*)(void))Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline)();
  v32 = v22;
  LOBYTE(v33) = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL);
  if ( v31 )
  {
    if ( ((unsigned __int8)v33 & 0x20) == 0 )
      goto LABEL_64;
    v34 = CRecalcProp::s_xxxOnWindowRestoreFromMinimized((struct tagWND *)v5, v13);
  }
  else
  {
    if ( ((unsigned __int8)v33 & 0x20) == 0 )
      goto LABEL_64;
    v34 = CRecalcProp::s_xxxOnWindowRestoreFromMinimizedOld(
            (struct tagWND *)v5,
            v13,
            (bool *)(BugCheckParameter3[0] + 28),
            (unsigned int *)(BugCheckParameter3[0] + 24),
            (struct tagRECT *)(BugCheckParameter3[0] + 32));
  }
  if ( v34 )
    v32 = v22 | 0x80000;
LABEL_64:
  WindowMargins::OnBecomingMinMaximized((WindowMargins *)v5, v33);
  v35 = *(_QWORD *)(v147[0] + 40);
  if ( (*(_BYTE *)(v35 + 26) & 0x40) != 0 && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x40) == 0 )
  {
    v36 = *(_DWORD *)(v35 + 96);
    v37 = v36 - v150.right;
    v150.right = v36 - v150.left;
    v150.left = v37;
    v135 = 1;
  }
  v38 = !v13;
  v39 = (__m128i *)v131;
  if ( v38 )
  {
    v40 = *(__m128i *)((char *)v30 + 20);
  }
  else
  {
    v40 = *(__m128i *)v131;
    *((_DWORD *)v30 + 4) &= 0xFFFFFFF1;
  }
  v41 = *(__m128i *)((char *)v30 + 36);
  v42 = PtiCurrent();
  if ( ((*((_BYTE *)v42 + 720) | *(_BYTE *)(**((_QWORD **)PtiCurrent() + 63) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(1, *(_QWORD *)v5, v4, 5) )
  {
    goto LABEL_260;
  }
  if ( (_DWORD)v4 == 204 )
  {
    v32 |= 0x14u;
    if ( (*((_DWORD *)v30 + 4) & 4) != 0 )
    {
      LODWORD(v4) = 2;
      v131 = PtiCurrent();
      goto LABEL_75;
    }
    LODWORD(v4) = 1;
    PtiCurrent();
    goto LABEL_79;
  }
  v131 = PtiCurrent();
  if ( (_DWORD)v4 == 1 )
    goto LABEL_79;
  if ( (_DWORD)v4 != 2 )
  {
    if ( (_DWORD)v4 == 3 )
    {
LABEL_82:
      v51 = *(_QWORD *)(v5 + 40);
      v52 = v32;
      if ( (_DWORD)v4 == 3 )
      {
        v53 = ValidateHmonitorNoRip(*(_QWORD *)(v51 + 256), v32);
        v54 = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL);
        if ( (v54 & 1) != 0 && (!v142 || (__int64 *)v53 == v142) && (v54 & 0x10) != 0 && (v130 & 2) == 0 )
          goto LABEL_260;
        v55 = v32 | 0x8000;
        v133 = 1;
        if ( (v54 & 0x20) != 0 )
          *((_DWORD *)v30 + 4) |= 4u;
        v56 = v124;
        v57 = 0;
        if ( !v124 )
          xxxInitSendValidateMinMaxInfoEx((struct tagWND *)v5);
      }
      else
      {
        v83 = *(_BYTE *)(v51 + 31);
        v55 = v32 | 0x8000;
        v56 = v124;
        if ( (v83 & 0x21) == 0 )
          v55 = v52;
        v57 = 0;
        if ( (v83 & 1) != 0 )
          v133 = 1;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) != 0 )
      {
        if ( !xxxSendTransformableMessageTimeout((struct tagWND *)v5, 0x13u, 0, 0, 0LL, 1, 1) )
          goto LABEL_260;
        v132 = 1;
        v138 = 1;
        if ( (v55 & 0x10) == 0 )
        {
          v84 = *(_QWORD *)(v5 + 40);
          v139 = 1;
          v38 = (*(_BYTE *)(v84 + 31) & 0x40) == 0;
          v85 = v137;
          if ( v38 )
            v85 = 1;
          v137 = v85;
        }
        v55 |= 0x100u;
      }
      else
      {
        v132 = 3;
      }
      if ( (_DWORD)v4 == 3 )
      {
        if ( v56 )
        {
          v134 = *v39;
          v9 = v134;
          v47 = _mm_cvtsi128_si32(_mm_srli_si128(v134, 12));
          v123 = _mm_cvtsi128_si32(_mm_srli_si128(v134, 4));
          v49 = _mm_cvtsi128_si32(_mm_srli_si128(v134, 8));
          v46 = _mm_cvtsi128_si32(v134);
        }
        else
        {
          v46 = v152;
          v49 = v152 + DWORD2(v151);
          v47 = DWORD1(v152) + HIDWORD(v151);
          v134.m128i_i64[0] = v152;
          v134.m128i_i32[3] = DWORD1(v152) + HIDWORD(v151);
          v134.m128i_i32[2] = v152 + DWORD2(v151);
          v9 = v134;
          v123 = DWORD1(v152);
        }
        SetOrClrWF(1LL, v5, 3841LL, 1LL);
        AdvancedWindowPos::MarkWindowAsNotArranged((AdvancedWindowPos *)v5, v86);
      }
      else
      {
        if ( (_DWORD)v4 == 12 )
        {
          v9 = v41;
          v134 = v41;
          if ( (unsigned int)((__int64 (*)(void))Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline)() )
          {
            *(_DWORD *)(v5 + 380) |= 0x200000u;
            LOBYTE(v146) = 1;
            AdvancedWindowPos::MarkWindowAsArranged((AdvancedWindowPos *)v5, v87);
            if ( *((_BYTE *)v30 + 54) )
            {
              LODWORD(v131) = *((_DWORD *)v30 + 14);
              if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
              {
                v57 = 1;
              }
              v90 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !v57 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              {
                v95 = (int)v131;
              }
              else
              {
                v91 = *(_DWORD *)(BugCheckParameter3[0] + 24);
                v92 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v89);
                LOBYTE(v93) = v90;
                v120 = v91;
                LOBYTE(v94) = v57;
                v95 = (int)v131;
                WPP_RECORDER_AND_TRACE_SF_Dd(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v94,
                  v93,
                  *(_QWORD *)(v92 + 69160),
                  4,
                  4,
                  12,
                  (__int64)&WPP_c2c1bc94dfb934c622fe5c54a621ad61_Traceguids,
                  (char)v131,
                  v120);
              }
              v96 = BugCheckParameter3[0];
              *(_DWORD *)(BugCheckParameter3[0] + 24) = v95;
              *(_BYTE *)(v96 + 28) = 1;
              *((_BYTE *)v30 + 54) = 0;
            }
          }
          else if ( (unsigned int)Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline() )
          {
            *(_DWORD *)(v5 + 380) |= 0x200000u;
            LOBYTE(v146) = 1;
            AdvancedWindowPos::MarkWindowAsArranged((AdvancedWindowPos *)v5, v88);
            *(_DWORD *)(v5 + 380) |= 0x4000000u;
          }
          else
          {
            RestoreArrangedState((struct tagWND *)v5, v30);
          }
        }
        else
        {
          v9 = v40;
          v134 = v40;
        }
        SetOrClrWF(0LL, v5, 3841LL, 1LL);
        v46 = _mm_cvtsi128_si32(v9);
        v47 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12));
        v123 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
        v49 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) != 0 )
      {
        if ( *((_WORD *)v30 + 26) )
          v55 |= 0x80000u;
        SetMinimize(v5, 0LL);
        v97 = *(_QWORD *)(v5 + 40);
        v136 = 23;
        LOBYTE(v98) = *(_BYTE *)(v97 + 31);
        if ( (v98 & 0xC0) != 0x40 && (v98 & 0x10) != 0 && *(_DWORD *)(*(_QWORD *)(v5 + 16) + 948LL) == 1 )
        {
          v99 = W32GetUserSessionState(v98, 1LL);
          v100 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 472LL);
          if ( v100 != *(_QWORD *)(v99 + 18888)
            && ((v55 & 0x10) == 0 || *(_QWORD *)(v100 + 128) == v5)
            && (v130 & 0x40) == 0 )
          {
            xxxSetForegroundWindowWithOptions(v5, 6LL, 4097LL);
          }
        }
      }
      v48 = v123;
      v32 = v55 | 0x20;
LABEL_201:
      v44 = v129;
LABEL_202:
      if ( (v130 & 0x100001) == 0 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x10) != 0 )
        {
          if ( v44 )
            v32 |= 0x40u;
          if ( !(unsigned int)IsVisible(v5)
            || (v103 & 0x10000) == 0
            || !v132
            || (v101 & 0x40) != 0 && (*(_BYTE *)(v102 + 23) & 0x10) != 0 )
          {
            goto LABEL_222;
          }
          v104 = 0LL;
          if ( v135 )
          {
            v105 = v46;
            v104 = v9;
            v106 = *(_QWORD *)(*(_QWORD *)(v5 + 104) + 40LL);
            v46 = *(_DWORD *)(v106 + 96) - v49;
            v49 = *(_DWORD *)(v106 + 96) - v105;
            v134.m128i_i32[0] = v46;
            v134.m128i_i32[2] = v49;
          }
          if ( v132 == 3 || !(unsigned __int8)IsTrayWindow(v5, 1LL) )
          {
            v107 = (struct tagWND *)v5;
          }
          else
          {
            v149 = 0LL;
            xxxSendMinRectMessages(v5, &v149);
            if ( (unsigned int)IsRectEmptyInl(&v149) )
              goto LABEL_219;
            v107 = (struct tagWND *)v5;
          }
          xxxDrawAnimatedRects(v107);
LABEL_219:
          if ( v135 )
          {
            v46 = _mm_cvtsi128_si32(v104);
            v47 = _mm_cvtsi128_si32(_mm_srli_si128(v104, 12));
            v48 = _mm_cvtsi128_si32(_mm_srli_si128(v104, 4));
            v49 = _mm_cvtsi128_si32(_mm_srli_si128(v104, 8));
          }
          goto LABEL_222;
        }
        v32 |= 0x40u;
      }
LABEL_222:
      *(_QWORD *)&v149.left = InternalBeginDeferWindowPos(1LL);
      if ( *(_QWORD *)&v149.left )
      {
        v111 = v47 - v48;
        v112 = v49 - v46;
        v113 = v143 ? HMValidateHandleNoSecure(v143, 1LL) : 0LL;
        v110 = _DeferWindowPos(*(_QWORD *)&v149.left, v5, v113, v46, v48, v112, v111, v32, 0);
        if ( v110 )
        {
          if ( v133 && (unsigned int)IsTopLevelWindow(v5) )
          {
            v114 = *(_QWORD *)(v5 + 40);
            if ( (*(_BYTE *)(v114 + 31) & 1) != 0 )
            {
              *(_QWORD *)(*(_QWORD *)(v110 + 40) + 112LL) = 2LL;
            }
            else if ( (*(_BYTE *)(v114 + 21) & 8) != 0 )
            {
              *(_QWORD *)(*(_QWORD *)(v110 + 40) + 112LL) = 1LL;
            }
          }
          v115 = v130;
          if ( (v130 & 0x80000) != 0 )
            *(_DWORD *)(*(_QWORD *)(v110 + 40) + 156LL) |= 0x400u;
          if ( (v115 & 0x200000) != 0 )
            *(_DWORD *)(*(_QWORD *)(v110 + 40) + 156LL) |= 0x800u;
          if ( v126 )
          {
            v116 = 0LL;
            if ( v142 )
              v116 = *v142;
            *(_QWORD *)(*(_QWORD *)(v110 + 40) + 128LL) = v116;
            *(_DWORD *)(*(_QWORD *)(v110 + 40) + 156LL) |= 0x200u;
          }
          xxxEndDeferWindowPosEx((struct tagSMWP *)v110);
        }
      }
      if ( v136 )
        xxxWindowEvent(v136, 1);
      if ( v138 )
        xxxShowOwnedWindows(v5, 3LL);
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) != 0
        && (_DWORD)v4 == 6
        && *(_QWORD *)(v5 + 104) == GetDesktopWindow(v5)
        && !(unsigned int)xxxActivateOnMinimize(v117) )
      {
        xxxActivateWindowWithOptions(v5, 2LL, 49LL, 1LL, 0);
      }
      if ( v139 )
        xxxSetFocus((struct tagWND *)v5);
      if ( v137 )
        xxxSendTransformableMessageTimeout((struct tagWND *)v5, 6u, 0, 0, 0LL, 1, 1);
      if ( v140 )
        xxxFlushPalette(v5, v108, v109, v110);
      v118 = *(_QWORD *)(v5 + 40);
      if ( v127 != (*(_BYTE *)(v118 + 31) & 1) || ((_BYTE)v128 != 0) != ((*(unsigned __int8 *)(v118 + 31) >> 5) & 1) )
        PostIAMShellHookMessage(0x28u, *(_QWORD *)v5);
      goto LABEL_260;
    }
    if ( (_DWORD)v4 == 4 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v59, v58) + 18888)
        && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v64, v63) + 18888) + 128LL) )
      {
        v32 |= 0x10u;
      }
      goto LABEL_111;
    }
    if ( (_DWORD)v4 != 6 && (_DWORD)v4 != 7 )
    {
      if ( (_DWORD)v4 != 9 )
      {
LABEL_99:
        v46 = _mm_cvtsi128_si32(v9);
        v47 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
        v48 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
        v49 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
        goto LABEL_201;
      }
LABEL_111:
      LODWORD(v4) = 1;
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) != 0 )
      {
        v65 = *((_DWORD *)v30 + 4);
        if ( (v65 & 2) != 0 )
        {
          LODWORD(v4) = 3;
          goto LABEL_82;
        }
        if ( (v65 & 8) != 0 )
        {
          LODWORD(v4) = 12;
          goto LABEL_82;
        }
      }
LABEL_79:
      if ( IsArranged((const struct tagWND *)v5) && !v125 )
        AdvancedWindowPos::MarkWindowAsNotArranged((AdvancedWindowPos *)v5, v50);
      goto LABEL_82;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v59, 2LL) + 18888)
      && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v61, v60) + 18888) + 128LL) )
    {
      v32 |= 0x10u;
    }
    if ( (v130 & 0x40) == 0 )
    {
      v62 = CalcMinZOrder((struct tagWND *)v5);
      if ( v62 )
      {
        if ( !v143 )
          v143 = *(__int64 **)v62;
      }
      else
      {
        v32 |= 4u;
      }
    }
  }
LABEL_75:
  v43 = *(_QWORD *)(v5 + 40);
  v44 = 1;
  v129 = 1;
  v45 = *(_BYTE *)(v43 + 31);
  if ( (v45 & 0x20) == 0 )
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed(v5) )
    {
      v66 = (void *)ReferenceDwmApiPort();
      if ( v66 )
      {
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v125, 1);
        DwmSyncNotifyMinimizing(v66);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v125);
      }
    }
    v67 = *((_DWORD *)v30 + 4);
    v68 = 1LL;
    v132 = 2;
    if ( (v67 & 1) == 0 )
    {
      v67 &= ~0x10u;
      *((_DWORD *)v30 + 4) = v67;
    }
    if ( (v67 & 0x10) == 0 )
    {
      ParkIcon(v5, v30);
      *((_DWORD *)v30 + 4) |= 0x10u;
    }
    if ( v124 )
    {
      v134 = *v39;
      v9 = v134;
      v47 = _mm_cvtsi128_si32(_mm_srli_si128(v134, 12));
      v122 = _mm_cvtsi128_si32(_mm_srli_si128(v134, 4));
      v49 = _mm_cvtsi128_si32(_mm_srli_si128(v134, 8));
      v46 = _mm_cvtsi128_si32(v134);
    }
    else
    {
      v69 = *((unsigned int *)v30 + 1);
      v46 = *(_DWORD *)v30;
      v134.m128i_i32[0] = *(_DWORD *)v30;
      v122 = v69;
      v134.m128i_i32[1] = v69;
      v70 = *(_QWORD *)(W32GetUserSessionState(v69, v68) + 19872);
      v49 = *(_DWORD *)v30 + *(_DWORD *)(v70 + 2124);
      v134.m128i_i32[2] = v49;
      v47 = *((_DWORD *)v30 + 1) + *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v70, v71) + 19872) + 2128LL);
      v134.m128i_i32[3] = v47;
      v9 = v134;
    }
    xxxShowOwnedWindows(v5, 1LL);
    v72 = v131;
    for ( i = *(_QWORD *)(*((_QWORD *)v131 + 59) + 120LL); i; i = *(_QWORD *)(i + 104) )
    {
      if ( i == v5 )
      {
        Win32HM_LockIntoThread<0>(v131, i, BugCheckParameter3);
        if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0xC0) == 0x40 )
        {
          Win32HM_LockIntoThread<1>(v131, *(_QWORD *)(v5 + 104), v147);
          xxxSetFocus(*(struct tagWND **)(v5 + 104));
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v147);
        }
        else
        {
          xxxSetFocus(0LL);
        }
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v74);
        break;
      }
    }
    v75 = *(_QWORD *)(v5 + 40);
    LODWORD(v131) = v4;
    v76 = *((_DWORD *)v30 + 4) & 0xFFFFFFBF | *(_BYTE *)(v75 + 20) & 0x40;
    *((_DWORD *)v30 + 4) = v76;
    if ( !v121 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 1) != 0 )
      {
        v133 = 1;
        *((_DWORD *)v30 + 4) = v76 & 0xFFFFFFF5 | 2;
      }
      else
      {
        v77 = v76 & 0xFFFFFFFD;
        *((_DWORD *)v30 + 4) = v77;
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v72, v77, 1LL) )
        {
          v80 = IsArranged((const struct tagWND *)v5);
          *((_DWORD *)v30 + 4) = (8 * v80) | *((_DWORD *)v30 + 4) & 0xFFFFFFF7;
          if ( v80 )
            AdvancedWindowPos::MarkWindowAsNotArranged((AdvancedWindowPos *)v5, (struct tagWND *)v80);
          LODWORD(v4) = (_DWORD)v131;
        }
        else
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 233LL) & 0x10) == 0
            || (v78 = 8, (*(_DWORD *)(v5 + 380) & 0x4000000) == 0) )
          {
            v78 = 0;
          }
          *((_DWORD *)v30 + 4) = v78 | *((_DWORD *)v30 + 4) & 0xFFFFFFF7;
          LODWORD(v4) = (_DWORD)v131;
          if ( IsArranged((const struct tagWND *)v5) )
            AdvancedWindowPos::MarkWindowAsNotArranged((AdvancedWindowPos *)v5, v79);
        }
      }
    }
    v81 = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL);
    if ( (v81 & 0x20) == 0 )
    {
      SetMinimize(v5, 1LL);
      SetOrClrWF(0LL, v5, 3841LL, 1LL);
      v82 = *(struct tagWND **)(v5 + 112);
      v136 = 22;
      if ( v82 )
      {
        do
        {
          ClrFTrueVis(v82);
          v82 = (struct tagWND *)*((_QWORD *)v82 + 11);
        }
        while ( v82 );
        v5 = *(_QWORD *)&v149.left;
      }
      v32 |= 0x8120u;
      v48 = v122;
      if ( *(_QWORD *)(v5 + 104) == GetDesktopWindow(v5) )
        v140 = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 18LL) & 0x20;
      goto LABEL_201;
    }
    if ( (v81 & 0x10) != 0 )
      goto LABEL_260;
    v9 = 0LL;
    v32 |= 0x17u;
    v134 = 0LL;
    goto LABEL_99;
  }
  if ( (v45 & 0x10) == 0 )
  {
    v46 = _mm_cvtsi128_si32((__m128i)0LL);
    v47 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    v32 |= 0x17u;
    v48 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
    v49 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
    goto LABEL_202;
  }
LABEL_260:
  if ( !v141 )
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed(v5) )
    {
      v119 = (void *)ReferenceDwmApiPort();
      DwmAsyncNotifyAnimationChange(v119);
    }
  }
  DwmNotifyMoveReason::~DwmNotifyMoveReason((DwmNotifyMoveReason *)&v145);
  CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v148);
}
