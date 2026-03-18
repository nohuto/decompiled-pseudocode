/*
 * XREFs of ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140187CB8
 * Callers:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x140025E98 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x140062C48 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     NtUserSetFocus @ 0x140187BD0 (NtUserSetFocus.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1402CA6B4 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140050410 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x14021480C (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14023A8E4 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x140277D84 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140278CB0 (_anonymous_namespace_--xxxSendFocusMessages.c)
 */

struct tagWND *__fastcall xxxSetFocus(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  char *v6; // rbx
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rdx
  int v12; // ecx
  struct tagWND *v13; // r14
  char v14; // cl
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagWND *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // bl
  bool v25; // bp
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rdx
  char v30; // bl
  bool v31; // bp
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  char v35; // bp
  bool v36; // r12
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rbp
  __int64 v45; // rcx
  __int64 *v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-28h] BYREF

  v3 = PtiCurrent((__int64)a1, a2);
  v4 = 0LL;
  v5 = (__int64)v3;
  v6 = (char *)v3 + 472;
  if ( !a1 )
  {
    if ( ((*((_BYTE *)v3 + 720) | *(_BYTE *)(**((_QWORD **)v3 + 63) + 16LL)) & 0x40) == 0 )
      goto LABEL_6;
    v7 = 0LL;
    v8 = *(__int64 **)(*(_QWORD *)v6 + 120LL);
    if ( v8 )
      v7 = *v8;
    if ( !(unsigned int)xxxCallHook(9LL, 0LL, v7, 5) )
    {
LABEL_6:
      v9 = *(__int64 **)(*(_QWORD *)v6 + 120LL);
      if ( v9 )
        v4 = *v9;
      anonymous_namespace_::xxxSendFocusMessages(v5, 0LL);
      LOBYTE(v10) = 1;
      return (struct tagWND *)HMValidateHandleNoSecure(v4, v10);
    }
    return 0LL;
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) != *(_QWORD *)v6
    && !(unsigned int)CoreWindowProp::IsHostOrComponentThreadOf(v3, a1) )
  {
    v12 = 5;
LABEL_64:
    UserSetLastError(v12);
    return 0LL;
  }
  v13 = a1;
  do
  {
    v14 = *(_BYTE *)(*((_QWORD *)v13 + 5) + 31LL);
    if ( (v14 & 0x20) != 0 || (v14 & 8) != 0 )
    {
      v12 = 87;
      goto LABEL_64;
    }
    if ( (v14 & 0xC0) != 0x40 )
      break;
    v13 = (struct tagWND *)*((_QWORD *)v13 + 13);
  }
  while ( v13 );
  Win32HM_LockIntoThread<1>(v5, (__int64)v13, (__int64 *)BugCheckParameter3);
  v17 = *(struct tagWND **)(*(_QWORD *)(v5 + 472) + 120LL);
  if ( a1 != v17 )
  {
    v18 = *(_QWORD *)(v5 + 504);
    v19 = (unsigned int)(*(_DWORD *)(v5 + 720) | *(_DWORD *)(*(_QWORD *)v18 + 16LL));
    if ( ((*(_BYTE *)(v5 + 720) | *(_BYTE *)(*(_QWORD *)v18 + 16LL)) & 0x40) != 0 )
    {
      v20 = 0LL;
      if ( v17 )
        v20 = *(_QWORD *)v17;
      if ( (unsigned int)xxxCallHook(9LL, *(_QWORD *)a1, v20, 5) )
      {
        v21 = 5;
LABEL_23:
        UserSetLastError(v21);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v22);
        return 0LL;
      }
    }
    if ( v13 != *(struct tagWND **)(*(_QWORD *)(v5 + 472) + 128LL) )
    {
      v23 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v24 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v24 = 0;
      }
      v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v28,
          v27,
          *(_QWORD *)(UserSessionState + 69160),
          4,
          2,
          93,
          (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
      }
      if ( *(_QWORD *)(v5 + 472) == *(_QWORD *)(W32GetUserSessionState(v23, v19) + 18888) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v30 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v30 = 0;
        }
        v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v32 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29);
          LOBYTE(v33) = v31;
          LOBYTE(v34) = v30;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v34,
            v33,
            *(_QWORD *)(v32 + 69160),
            4,
            2,
            94,
            (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
        }
        goto LABEL_49;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v35 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v35 = 0;
      }
      v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v37 = *(_QWORD *)v13;
        v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v29);
        LOBYTE(v39) = v36;
        LOBYTE(v40) = v35;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v40,
          v39,
          *(_QWORD *)(v38 + 69160),
          4,
          2,
          95,
          (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
          v37);
      }
      if ( (unsigned __int8)anonymous_namespace_::FAllowForegroundActivate(v13)
        && !(unsigned __int8)xxxForceForegroundWindowNoRestoreFocus(v13, 8LL) )
      {
LABEL_51:
        v21 = 87;
        goto LABEL_23;
      }
LABEL_49:
      if ( v13 != *(struct tagWND **)(*(_QWORD *)(v5 + 472) + 128LL)
        && !(unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow(v13) )
      {
        goto LABEL_51;
      }
    }
    v17 = *(struct tagWND **)(*(_QWORD *)(v5 + 472) + 120LL);
    Win32HM_ExchangeThreadLock<1>((__int64)v17, (__int64)BugCheckParameter3);
    anonymous_namespace_::xxxSendFocusMessages(v5, a1);
  }
  v41 = *(_QWORD *)(*(_QWORD *)(v5 + 472) + 120LL);
  if ( v41 )
    v42 = *(_QWORD *)(v41 + 16);
  else
    v42 = v5;
  v43 = *(_QWORD *)(v42 + 480);
  if ( v43 )
  {
    v44 = *(_QWORD *)(v43 + 40);
    if ( *(_QWORD *)(W32GetUserSessionState(v16, v15) + 14264) != v44 )
    {
      v46 = *(__int64 **)(v5 + 504);
      v15 = *v46;
      if ( ((*(_DWORD *)(v5 + 720) | *(_DWORD *)(*v46 + 16)) & 0x800) != 0 )
      {
        *(_QWORD *)(W32GetUserSessionState(v45, v15) + 14264) = v44;
        xxxCallHook(8LL, 0LL, v44, 10);
      }
    }
  }
  if ( v17 )
    v4 = *(_QWORD *)v17;
  LOBYTE(v15) = 1;
  v47 = HMValidateHandleNoSecure(v4, v15);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v48);
  return (struct tagWND *)v47;
}
