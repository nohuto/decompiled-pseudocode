/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C
 * Callers:
 *     xxxSetThreadDesktop @ 0x14011499C (xxxSetThreadDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14023A8E4 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x14023B7E4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxSetModernAppWindow @ 0x140254280 (xxxSetModernAppWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x140279DF0 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x14028B60C (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DCE18 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14001D970 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1400232D8 (_anonymous_namespace_--xxxUpdateTray.c)
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1401196C0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140119D60 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     xxxCancelTracking @ 0x14012B1F8 (xxxCancelTracking.c)
 *     PtiKbdFromQ @ 0x14014543C (PtiKbdFromQ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401460C0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x14014BC38 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x14014BC9C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x14014BF04 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     zzzLockWindowUpdate2 @ 0x1401558AC (zzzLockWindowUpdate2.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x14015CE78 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     IsWindowUnderActiveLockScreen @ 0x140169524 (IsWindowUnderActiveLockScreen.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _anonymous_namespace_::UpdateKeyStateFlag @ 0x1401B7694 (_anonymous_namespace_--UpdateKeyStateFlag.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1401D3590 (_anonymous_namespace_--RemoveEventMessage.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1401D4008 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401DD25C (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x140214894 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@@Z @ 0x14023A398 (-SetNewForegroundQueue@@YAXPEAUtagQ@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023A4E0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14023BA9C (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1402402D4 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x140245038 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x140245078 (zzzInputFocusReceivedWindowEvent.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x1402786A8 (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     ?SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x1402787E8 (-SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 *     Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline @ 0x14027A134 (Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline.c)
 *     zzzActiveCursorTracking @ 0x14028203C (zzzActiveCursorTracking.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetForegroundWindow2(__int64 a1, PETHREAD *a2, unsigned int a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // bl
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // bl
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rdx
  char v22; // al
  __int64 v23; // rdx
  PETHREAD *v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rcx
  char v35; // bl
  bool v36; // r14
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r15
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v52; // rdx
  const struct tagWND **v53; // rcx
  struct tagTHREADINFO *v54; // rcx
  struct tagWND *v55; // rdx
  __int64 v56; // rdx
  _QWORD *i; // rdx
  _QWORD *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  const struct tagUIPI_INFO *v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __m128i *v70; // rax
  __m128i si128; // xmm0
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rbx
  __int64 v90; // rax
  _BOOL8 v91; // r15
  const struct tagWND *TopLevelWindow; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  HANDLE ThreadId; // rax
  struct tagQMSG *v100; // r15
  const struct tagTHREADINFO **v101; // rcx
  __int64 v102; // rbx
  __int64 v103; // r15
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // r15
  DWORD v107; // r13d
  unsigned int v108; // r12d
  unsigned __int8 v109; // dl
  unsigned __int8 v110; // r8
  LARGE_INTEGER v111; // r9
  unsigned int v112; // eax
  const struct tagTHREADINFO **v113; // rcx
  char v114; // bl
  __int64 v115; // rcx
  __int64 v116; // rax
  const struct tagWND *v117; // rax
  __int64 v118; // rdx
  const struct tagWND *v119; // rbx
  unsigned int v120; // eax
  __int16 v121; // dx
  __int16 v122; // bx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rdx
  unsigned __int64 v127; // [rsp+40h] [rbp-C0h]
  char v128; // [rsp+70h] [rbp-90h]
  char v129; // [rsp+70h] [rbp-90h]
  bool v130; // [rsp+71h] [rbp-8Fh]
  bool v131; // [rsp+71h] [rbp-8Fh]
  struct tagWND *v134; // [rsp+88h] [rbp-78h]
  struct tagWND *v135; // [rsp+88h] [rbp-78h]
  unsigned int v136; // [rsp+88h] [rbp-78h]
  __int64 v137; // [rsp+90h] [rbp-70h]
  LARGE_INTEGER *v138; // [rsp+98h] [rbp-68h]
  __int64 v139; // [rsp+A0h] [rbp-60h] BYREF
  struct tagQMSG *v140; // [rsp+A8h] [rbp-58h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v142; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v143[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v144; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v145[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v146; // [rsp+F0h] [rbp-10h]
  __int128 v147; // [rsp+F8h] [rbp-8h]
  __int64 v148; // [rsp+108h] [rbp+8h]
  __int128 v149; // [rsp+110h] [rbp+10h]
  __int64 v150; // [rsp+120h] [rbp+20h]
  __int128 v151; // [rsp+128h] [rbp+28h]
  __int64 v152; // [rsp+138h] [rbp+38h]
  __int64 v153; // [rsp+140h] [rbp+40h] BYREF
  int v154; // [rsp+148h] [rbp+48h]
  __int64 v155; // [rsp+150h] [rbp+50h] BYREF
  int v156; // [rsp+158h] [rbp+58h]

  v147 = 0LL;
  *(_OWORD *)v145 = 0LL;
  v148 = 0LL;
  v146 = -1LL;
  v149 = 0LL;
  v150 = 0LL;
  *(_OWORD *)v143 = 0LL;
  v144 = -1LL;
  v152 = 0LL;
  v151 = 0LL;
  v142 = -1LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v134 = PtiCurrent(-1LL, (__int64)a2);
  v5 = 0;
  v155 = 0LL;
  v156 = 0;
  v153 = 0LL;
  v154 = 0;
  v139 = 0LL;
  SetSystemInputSource(&v139);
  if ( !a1 )
    goto LABEL_20;
  if ( *(_QWORD *)(a1 + 24) == *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19144)
    && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) >= 0 )
  {
    if ( (unsigned int)IsWindowUnderActiveLockScreen(a1, v8) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v9 = 0;
      }
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 69160),
          4,
          2,
          89,
          (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
      }
      goto LABEL_168;
    }
LABEL_20:
    if ( a2 )
      Win32RawLockedW32Thread::ManualLock(v145, (__int64)a2);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v22 = 0;
    }
    v128 = v22;
    v130 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v134);
      v24 = a2;
      if ( a2 )
        PsGetThreadId(*a2);
      v25 = W32GetUserSessionState(v24, v23);
      LOBYTE(v26) = v130;
      LOBYTE(v27) = v128;
      WPP_RECORDER_AND_TRACE_SF_qDD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(v25 + 69160));
    }
    v28 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v29 = 0;
    }
    v129 = v29;
    LOBYTE(v28) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v131 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(v28, v6);
      LOBYTE(v31) = v131;
      LOBYTE(v32) = v129;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v32,
        v31,
        *(_QWORD *)(v30 + 69160),
        4,
        2,
        91,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
        a3);
    }
    *(_QWORD *)(W32GetUserSessionState(v28, v6) + 18840) = 0LL;
    v34 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v35 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v35 = 0;
    }
    v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v33);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v35;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v39,
        v38,
        *(_QWORD *)(v37 + 69160),
        4,
        2,
        92,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    }
    if ( !*(_QWORD *)(W32GetUserSessionState(v34, v33) + 18904)
      || (v43 = *(_QWORD *)(W32GetUserSessionState(v41, v40) + 18904),
          (_InterlockedCompareExchange((volatile signed __int32 *)(v43 + 528), 0, 0) & 1) != 0) )
    {
      v44 = 0LL;
    }
    else
    {
      v44 = *(_QWORD *)(W32GetUserSessionState(v43, v42) + 18904);
      Win32RawLockedW32Thread::ManualLock(v143, v44);
    }
    if ( !(unsigned int)Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline() )
    {
      v47 = *(_QWORD *)(W32GetUserSessionState(v46, v45) + 18888);
      *(_QWORD *)(W32GetUserSessionState(v49, v48) + 18896) = v47;
    }
    if ( a1 )
    {
      v50 = *(_QWORD *)(a1 + 16);
      v137 = v50;
      IsEnabledDeviceUsageNoInline = Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline();
      v53 = *(const struct tagWND ***)(*(_QWORD *)(a1 + 16) + 472LL);
      if ( IsEnabledDeviceUsageNoInline )
        SetNewForegroundQueue2(v53, (a3 & 0x200 | 0x100) >> 8);
      else
        SetNewForegroundQueue(v53, v52);
      Win32RawLockedW32Thread::ManualLock(BugCheckParameter2, v50);
      v54 = *(struct tagTHREADINFO **)(a1 + 16);
      v55 = (struct tagWND *)a1;
    }
    else
    {
      v137 = 0LL;
      if ( (unsigned int)Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline() )
        ResetForegroundQueue(1LL);
      else
        SetNewForegroundQueue(0LL, v56);
      v54 = 0LL;
      v55 = 0LL;
    }
    xxxSetForegroundThreadWithWindowHint(v54, v55);
    if ( (a3 & 0x20) == 0 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v58, i) + 18888) )
      {
        v61 = *(_QWORD *)(W32GetUserSessionState(v60, v59) + 18888);
        LODWORD(v155) = *(_DWORD *)(v61 + 448);
        v60 = *(_QWORD *)(W32GetUserSessionState(v61, v62) + 18888);
        HIDWORD(v155) = *(_DWORD *)(v60 + 452);
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v60, v59) + 18896) )
      {
        v66 = *(_QWORD *)(W32GetUserSessionState(v64, v63) + 18896);
        LODWORD(v153) = *(_DWORD *)(v66 + 448);
        HIDWORD(v153) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v66, v67) + 18896) + 452LL);
      }
      if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)&v155, (const struct tagUIPI_INFO *)&v153, v65) )
      {
        ClearKeyboardToggleStates();
        if ( (unsigned int)Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline() )
        {
          v58 = *(_QWORD **)(W32GetUserSessionState(v69, v68) + 19144);
          if ( *((_QWORD **)v134 + 62) == v58 )
          {
            v58 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v58, i) + 19144) + 176LL);
            for ( i = (_QWORD *)*v58; i != v58; i = (_QWORD *)*i )
            {
              v70 = (__m128i *)*(i - 38);
              si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
              v70[14] = si128;
              v70[15] = si128;
              v70[25].m128i_i32[3] |= 1u;
            }
          }
        }
        else
        {
          anonymous_namespace_::UpdateKeyStateFlag(v69, v68);
        }
      }
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v58, i) + 18888) )
    {
      v74 = *(_QWORD *)(W32GetUserSessionState(v73, v72) + 18888);
      if ( v74 != *(_QWORD *)(W32GetUserSessionState(v76, v75) + 18896) )
      {
        v73 = *(_QWORD *)(W32GetUserSessionState(v73, v72) + 18888);
        if ( *(_QWORD *)(v73 + 120) )
        {
          v73 = *(unsigned int *)(W32GetUserSessionState(v73, v72) + 66808);
          if ( (v73 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings(v73);
        }
      }
    }
    v77 = *(_QWORD *)(W32GetUserSessionState(v73, v72) + 18888);
    if ( v77 != *(_QWORD *)(W32GetUserSessionState(v79, v78) + 18896) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v80, v6) + 18896) )
      {
        v82 = *(_QWORD *)(W32GetUserSessionState(v82, v81) + 18896);
        if ( *(_QWORD *)(v82 + 120) )
        {
          v83 = W32GetUserSessionState(v82, v81);
          zzzInputFocusLostWindowEvent(*(_QWORD *)(*(_QWORD *)(v83 + 18896) + 120LL), 1LL);
        }
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v82, v81) + 18888)
        && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v85, v84) + 18888) + 120LL) )
      {
        zzzInputFocusReceivedWindowEvent(1LL);
      }
      v6 = (__int64)a2;
      if ( a2 )
      {
        xxxCancelTracking();
        v88 = W32GetUserSessionState(v87, v86);
        CCursorClip::ClearClip(*(CCursorClip **)(v88 + 36240));
        zzzLockWindowUpdate2(0LL, 1LL);
        v6 = (__int64)a2;
      }
      v89 = 0LL;
      if ( v44 && (_InterlockedCompareExchange((volatile signed __int32 *)(v44 + 528), 0, 0) & 1) == 0 )
        v89 = *(_QWORD *)(v44 + 472);
      v90 = 0LL;
      if ( v6 )
        v90 = *(_QWORD *)(v6 + 472);
      v138 = 0LL;
      if ( v89 && v89 != v90 )
      {
        v140 = (struct tagQMSG *)AllocQEntryEx(v89 + 24, 0LL, 1);
        if ( !v140 )
        {
LABEL_168:
          LOBYTE(v6) = 1;
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, v6);
          LOBYTE(v125) = 1;
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v143, v125);
          LOBYTE(v126) = 1;
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v145, v126);
          return v5;
        }
        v91 = 0LL;
        if ( a1 )
        {
          TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
          v135 = TopLevelWindow;
          if ( TopLevelWindow )
          {
            if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow, v93) )
              v91 = (unsigned int)CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v44, v135) != 0;
          }
        }
        v94 = *(_QWORD *)(PtiKbdFromQ(v89) + 464);
        v136 = *(_DWORD *)(v94 + 268);
        if ( *(_QWORD *)(W32GetUserSessionState(v94, v95) + 18904) )
        {
          v98 = W32GetUserSessionState(v97, v96);
          ThreadId = PsGetThreadId(**(PETHREAD **)(v98 + 18904));
        }
        else
        {
          ThreadId = 0LL;
        }
        v127 = v91;
        v100 = v140;
        StoreQMessage(
          (LARGE_INTEGER *)v140,
          0LL,
          0,
          (LARGE_INTEGER)ThreadId,
          0LL,
          0,
          0LL,
          5u,
          v127,
          0,
          (struct tagINPUT_MESSAGE_SOURCE *)&v139,
          v136,
          0LL,
          0LL);
        if ( v44 )
        {
          *((_QWORD *)v100 + 13) = v44;
          SetWakeBit(v44, 8256LL);
        }
        v101 = *(const struct tagTHREADINFO ***)(v89 + 128);
        if ( v101 && IsHungWindow(v101) )
          ProcessHungWindow(*(struct tagWND **)(v89 + 128));
        v6 = (__int64)a2;
      }
      v102 = 0LL;
      if ( v137 && (_InterlockedCompareExchange((volatile signed __int32 *)(v137 + 528), 0, 0) & 1) == 0 )
        v102 = *(_QWORD *)(v137 + 472);
      v103 = 0LL;
      if ( v6 )
        v103 = *(_QWORD *)(v6 + 472);
      if ( v102 )
      {
        if ( v102 != v103 )
        {
          v138 = (LARGE_INTEGER *)AllocQEntryEx(v102 + 24, 0LL, 1);
          if ( !v138 )
            goto LABEL_168;
        }
        v104 = anonymous_namespace_::RemoveEventMessage(v102, 5, -1);
        if ( v102 == v103 )
        {
          if ( a1 == *(_QWORD *)(v103 + 128) )
          {
            anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)a1, 1uLL);
            anonymous_namespace_::xxxUpdateTray((struct tagWND *)a1);
            v114 = a3;
            if ( (a3 & 4) == 0 )
              xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 3);
          }
          else
          {
            v114 = a3;
            if ( (a3 & 1) == 0 )
            {
              v121 = ~(16 * (_BYTE)a3) & 0x80 | 0x100;
              if ( (a3 & 0x100) == 0 )
                v121 = ~(16 * (_BYTE)a3) & 0x80;
              v122 = v121 | 2;
              if ( (a3 & 4) == 0 )
                v122 = v121;
              if ( v44 )
                v5 = (unsigned int)PsGetThreadId(*(PETHREAD *)v44);
              anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)a1, v5, v122);
              v6 = *(unsigned int *)(W32GetUserSessionState(v124, v123) + 66804);
              if ( (v6 & 1) != 0 )
                zzzActiveCursorTracking(a1);
              v5 = 1;
              goto LABEL_168;
            }
          }
        }
        else
        {
          if ( v103 || (a3 & 2) != 0 )
          {
            v106 = 0LL;
            if ( a1 )
              v106 = *(_QWORD *)a1;
          }
          else
          {
            v106 = 0LL;
          }
          if ( v104 )
            *(_DWORD *)(v102 + 412) |= 0x8000u;
          v107 = (a3 >> 4) & 1 | 2;
          if ( (a3 & 4) == 0 )
            v107 = (a3 >> 4) & 1;
          v108 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(v102) + 464) + 268LL);
          if ( (v109 & v110) != 0 )
          {
            v111.QuadPart = 0LL;
          }
          else
          {
            if ( v44 )
              v112 = (unsigned int)PsGetThreadId(*(PETHREAD *)v44);
            else
              v112 = 0;
            v111.QuadPart = v112;
          }
          StoreQMessage(
            v138,
            0LL,
            v107,
            v111,
            v106,
            0,
            0LL,
            6u,
            0LL,
            0,
            (struct tagINPUT_MESSAGE_SOURCE *)&v139,
            v108,
            0LL,
            0LL);
          v138[13].QuadPart = v137;
          SetWakeBit(v137, 8256LL);
          v113 = *(const struct tagTHREADINFO ***)(v102 + 128);
          if ( v113 && IsHungWindow(v113) )
            ProcessHungWindow(*(struct tagWND **)(v102 + 128));
          v114 = a3;
        }
        if ( (v114 & 0x40) == 0 )
          xxxDeliverRestoreFocusMessage((struct tagWND *)a1, v105);
        v6 = (__int64)a2;
      }
      v115 = 0LL;
      if ( v44 && (_InterlockedCompareExchange((volatile signed __int32 *)(v44 + 528), 0, 0) & 1) == 0 )
        v115 = *(_QWORD *)(v44 + 472);
      v116 = 0LL;
      if ( v6 )
        v116 = *(_QWORD *)(v6 + 472);
      if ( v115 && v115 == v116 )
      {
        if ( a1 )
        {
          v117 = (const struct tagWND *)GetTopLevelWindow(a1);
          v119 = v117;
          if ( v117
            && (unsigned int)CoreWindowProp::IsComponent(v117, v118)
            && (unsigned int)CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v44, v119) )
          {
            LOBYTE(v5) = 1;
          }
          v120 = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        }
        else
        {
          v120 = 0;
        }
        xxxDeactivate((__int64)a2, v120, v5);
      }
    }
    v5 = 1;
    goto LABEL_168;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v14 = 0;
  }
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v18,
      v17,
      *(_QWORD *)(v16 + 69160),
      4,
      2,
      88,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
  }
  LOBYTE(v8) = 1;
  Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, v8);
  LOBYTE(v19) = 1;
  Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v143, v19);
  LOBYTE(v20) = 1;
  Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v145, v20);
  return 0LL;
}
