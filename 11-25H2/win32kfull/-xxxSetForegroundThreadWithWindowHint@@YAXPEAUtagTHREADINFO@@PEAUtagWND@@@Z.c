/*
 * XREFs of ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14023BA9C
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSetModernAppWindow @ 0x140254280 (xxxSetModernAppWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140278CB0 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxClearForegroundThread @ 0x14027A390 (xxxClearForegroundThread.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     IsCurrentSessionServiceSession @ 0x1400D8C14 (IsCurrentSessionServiceSession.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401DCD80 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x14027A0E0 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14027A230 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1402897EC (zzzDelegateInputFocusLostWindowEvent.c)
 *     ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C1AD8 (-GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WIND.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxSetForegroundThreadWithWindowHint(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r12
  unsigned int ThreadId; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 KeyboardDelegationTargetQ; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  char v33; // bl
  bool v34; // r14
  char v35; // bp
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  char v39; // si
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // ebx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 ShellSpecialWindow; // rax
  char v58; // bl
  bool v59; // di
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  struct tagTHREADINFO *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v84; // [rsp+60h] [rbp-68h] BYREF
  __int128 v85; // [rsp+70h] [rbp-58h]

  if ( a1 == *(struct tagTHREADINFO **)(W32GetUserSessionState(a1, a2) + 18904) )
    return;
  if ( !a1 )
  {
    v6 = 0;
    goto LABEL_7;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18904)
    || (v5 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18904), *((_QWORD *)a1 + 58) != *(_QWORD *)(v5 + 464)) )
  {
    v6 = *(_DWORD *)(*((_QWORD *)a1 + 58) + 56LL);
LABEL_7:
    if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18904) )
      v9 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 18904) + 464LL) + 56LL);
    else
      v9 = 0LL;
    EtwTraceFocusedProcessChange(v9, v6);
    UserSessionState = W32GetUserSessionState(v11, v10);
    CitProcessForegroundChange(a1, a2, *(_QWORD *)(UserSessionState + 18904));
    if ( a1 )
      ForegroundBoost::SetForegroundPriority(a1, 1LL, 8LL);
    if ( *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18904) )
    {
      v15 = W32GetUserSessionState(v5, v4);
      ForegroundBoost::SetForegroundPriority(*(_QWORD *)(v15 + 18904), 0LL, 8LL);
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18904) )
  {
    v17 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18904);
    v18 = *(_QWORD *)(v17 + 480);
  }
  else
  {
    v18 = 0LL;
  }
  if ( a1 )
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
  else
    ThreadId = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18904) )
  {
    v22 = W32GetUserSessionState(v21, v20);
    v23 = (unsigned int)PsGetThreadId(**(PETHREAD **)(v22 + 18904));
  }
  else
  {
    v23 = 0;
  }
  EtwTraceFocusChange(v23, ThreadId);
  if ( *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18904) )
  {
    if ( !a1
      || (v27 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18904), *(_QWORD *)(v27 + 464) != *((_QWORD *)a1 + 58)) )
    {
      v28 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v27 = *(_QWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, v26) + 18904);
      *(_DWORD *)(*(_QWORD *)(v27 + 464) + 1068LL) = v28;
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18904) )
  {
    KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
    if ( KeyboardDelegationTargetQ )
    {
      v31 = *(_QWORD *)(KeyboardDelegationTargetQ + 120);
      if ( v31 )
        zzzDelegateInputFocusLostWindowEvent(v31, 14LL);
    }
    DisableDelegation();
  }
  v32 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v33 = 0;
  }
  v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    if ( a1 )
      v35 = (unsigned __int8)PsGetThreadId(*(PETHREAD *)a1);
    else
      v35 = 0;
    if ( *(_QWORD *)(W32GetUserSessionState(v32, v29) + 18904) )
    {
      v38 = W32GetUserSessionState(v37, v36);
      v39 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v38 + 18904));
    }
    else
    {
      v39 = 0;
    }
    v40 = W32GetUserSessionState(v37, v36);
    LOBYTE(v41) = v34;
    LOBYTE(v42) = v33;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v42,
      v41,
      *(_QWORD *)(v40 + 69160),
      4,
      2,
      112,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
      v39,
      v35);
  }
  *(_QWORD *)(W32GetUserSessionState(v32, v29) + 18904) = a1;
  if ( a1
    && (v43 = *(_QWORD *)(W32GetUserSessionState(v44, v43) + 63552),
        v44 = *(unsigned int *)(*((_QWORD *)a1 + 58) + 56LL),
        v44 == v43) )
  {
    v47 = *(_DWORD *)(W32GetUserSessionState(v44, v43) + 14708) | 2;
  }
  else
  {
    v47 = *(_DWORD *)(W32GetUserSessionState(v44, v43) + 14708) & 0xFFFFFFFD;
  }
  *(_DWORD *)(W32GetUserSessionState(v46, v45) + 14708) = v47;
  if ( !IsCurrentSessionServiceSession() )
  {
    v84 = 0LL;
    v85 = 0LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v49, v48) + 18904) )
    {
      LODWORD(v84) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v51, v50) + 18904) + 464LL) + 56LL);
      v53 = W32GetUserSessionState((unsigned int)v84, v52);
      DWORD1(v84) = (unsigned int)PsGetThreadId(**(PETHREAD **)(v53 + 18904));
      if ( a2 )
        *(_QWORD *)&v85 = *(_QWORD *)a2;
      else
        *(_QWORD *)&v85 = 0LL;
    }
    SendMessageTo(2LL, &v84, 32LL);
  }
  if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a1 )
    {
      v56 = W32GetUserSessionState(v55, v54);
      if ( *(_DWORD *)(v56 + 14048) == 1 )
      {
        ShellSpecialWindow = ShellWindowManagement::GetShellSpecialWindow(*((_QWORD *)a1 + 62), 1LL);
        if ( ShellSpecialWindow )
        {
          if ( *(struct tagTHREADINFO **)(ShellSpecialWindow + 16) == a1 )
          {
            v55 = *(_QWORD *)&WPP_GLOBAL_Control;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
              || (v58 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v58 = 0;
            }
            v59 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v58 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v60 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v54);
              LOBYTE(v61) = v59;
              LOBYTE(v62) = v58;
              WPP_RECORDER_AND_TRACE_SF_(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v62,
                v61,
                *(_QWORD *)(v60 + 69160),
                4,
                6,
                113,
                (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
            }
            *(_DWORD *)(v56 + 14048) = 2;
          }
        }
      }
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v55, v54) + 18904) )
  {
    v66 = *(_QWORD *)(W32GetUserSessionState(v64, v63) + 18904);
    if ( *(_QWORD *)(v66 + 480) )
    {
      v68 = *(unsigned int *)(W32GetUserSessionState(v66, v65) + 66808);
      if ( (v68 & 0x80u) != 0LL
        || !*(_QWORD *)(W32GetUserSessionState(v68, v67) + 14240)
        || (v69 = *(_QWORD *)(W32GetUserSessionState(v68, v67) + 14240),
            v68 = *(_QWORD *)(W32GetUserSessionState(v71, v70) + 18904),
            v69 == *(_QWORD *)(v68 + 480)) )
      {
        v72 = PtiCurrent(v68, v67);
        Win32HM_LockIntoThread<1>((__int64)v72, v18, (__int64 *)BugCheckParameter3);
        v75 = W32GetUserSessionState(v74, v73);
        xxxChangeForegroundKeyboardTable(v18, *(_QWORD *)(*(_QWORD *)(v75 + 18904) + 480LL), 0LL);
        Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(BugCheckParameter3, v76);
      }
    }
  }
  if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
  {
    v79 = W32GetUserSessionState(v78, v77);
    *(_OWORD *)(v79 + 14464) = 0LL;
    *(_OWORD *)(v79 + 14480) = 0LL;
    v82 = W32GetUserSessionState(v81, v80);
    ++*(_DWORD *)(*(_QWORD *)(v82 + 19872) + 6988LL);
  }
}
