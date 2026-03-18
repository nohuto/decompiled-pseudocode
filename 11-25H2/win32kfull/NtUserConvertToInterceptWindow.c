/*
 * XREFs of NtUserConvertToInterceptWindow @ 0x140294EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsAppModelFeatureEnabled@@YA_NK@Z @ 0x140274150 (-IsAppModelFeatureEnabled@@YA_NK@Z.c)
 *     ?ConvertToInterceptWindow@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402CAD74 (-ConvertToInterceptWindow@WindowActions@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserConvertToInterceptWindow(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  WindowActions *v6; // rdi
  __int64 v7; // rdx
  bool v8; // bp
  bool v9; // bl
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  PETHREAD *v14; // rdx
  bool v15; // bp
  bool v16; // r14
  unsigned __int8 ThreadId; // al
  __int64 v18; // rdi
  char v19; // bl
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // bp
  bool v26; // r14
  int v27; // edx
  int v28; // r8d
  __int64 v29; // r9
  struct tagWND *v30; // rdx
  __int64 *v31; // rbx
  bool v32; // bp
  bool v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rcx
  __int16 v41; // [rsp+30h] [rbp-38h]
  __int64 v42; // [rsp+40h] [rbp-28h]
  _BYTE v43[8]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v44; // [rsp+58h] [rbp-10h]

  v2 = 0LL;
  v3 = EnterCrit(0LL, 0LL);
  v43[0] = 0;
  v44 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v43, v4);
  v6 = (WindowActions *)ValidateHwndStrict(a1);
  if ( v6 )
  {
    if ( !IsAppModelFeatureEnabled(v5) )
    {
      v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v8;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v12,
          v11,
          *(_QWORD *)(UserSessionState + 69160),
          3,
          4,
          94,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
      }
      v13 = 5;
      goto LABEL_12;
    }
    v14 = (PETHREAD *)*((_QWORD *)v6 + 2);
    if ( v14 != (PETHREAD *)v3 )
    {
      v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        ThreadId = (unsigned __int8)PsGetThreadId(*v14);
        v18 = *(_QWORD *)v6;
        v19 = ThreadId;
        v22 = W32GetUserSessionState(v21, v20);
        LOBYTE(v23) = v16;
        LOBYTE(v24) = v15;
        WPP_RECORDER_AND_TRACE_SF_qd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v24,
          v23,
          *(_QWORD *)(v22 + 69160),
          3,
          4,
          95,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          v18,
          v19);
      }
      goto LABEL_22;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v6 + 5) + 288LL) & 0xF) == 2 )
    {
      if ( IsTopLevelWindow((__int64)v6) )
      {
        v31 = (__int64 *)*((_QWORD *)v6 + 15);
        if ( !v31 || (v31[48] & 0x10) != 0 )
        {
          WindowActions::ConvertToInterceptWindow(v6, v30);
          v2 = 1LL;
          goto LABEL_53;
        }
        v32 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v32 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v34 = *v31;
          v35 = *(_QWORD *)v6;
          v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v30);
          LOBYTE(v37) = v33;
          LOBYTE(v38) = v32;
          WPP_RECORDER_AND_TRACE_SF_qq(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v38,
            v37,
            *(_QWORD *)(v36 + 69160),
            3,
            4,
            98,
            (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
            v35,
            v34);
        }
        goto LABEL_22;
      }
      v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v25 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_22:
        v13 = 87;
LABEL_12:
        UserSetLastError(v13);
        goto LABEL_53;
      }
      v42 = *(_QWORD *)v6;
      v29 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v30) + 69160);
      v41 = 97;
    }
    else
    {
      v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v25 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_22;
      v42 = *(_QWORD *)v6;
      v29 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14) + 69160);
      v41 = 96;
    }
    LOBYTE(v28) = v26;
    LOBYTE(v27) = v25;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v27,
      v28,
      v29,
      3,
      4,
      v41,
      (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
      v42);
    goto LABEL_22;
  }
LABEL_53:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v43);
  UserSessionSwitchLeaveCrit(v39);
  return v2;
}
