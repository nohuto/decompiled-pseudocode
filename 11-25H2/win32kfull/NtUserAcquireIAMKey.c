/*
 * XREFs of NtUserAcquireIAMKey @ 0x140224870
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetIAMThreadInfo @ 0x140227C5C (SetIAMThreadInfo.c)
 */

__int64 __fastcall NtUserAcquireIAMKey(_QWORD *Address)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ebx
  bool v9; // di
  bool v10; // si
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rcx
  __int16 v16; // [rsp+30h] [rbp-28h]

  EnterCrit(0LL, 0LL);
  v4 = PtiCurrent(v3, v2);
  v5 = *((_QWORD *)v4 + 62);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v6 + 176);
  v8 = 0;
  if ( !v7 || !*(_QWORD *)(v6 + 168) )
  {
    v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_40;
    v13 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v6) + 69160);
    v16 = 43;
    goto LABEL_39;
  }
  if ( *((_QWORD *)v4 + 58) != v7 )
  {
    v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_40;
    v13 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v6) + 69160);
    v16 = 44;
LABEL_39:
    LOBYTE(v12) = v10;
    LOBYTE(v11) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v12,
      v13,
      4,
      2,
      v16,
      (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
LABEL_40:
    UserSetLastError(5);
    goto LABEL_41;
  }
  if ( *(_QWORD *)(v5 + 288) )
  {
    v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_40;
    v13 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v6) + 69160);
    v16 = 45;
    goto LABEL_39;
  }
  if ( !*(_DWORD *)(v5 + 272) )
  {
    v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_40;
    v13 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v6) + 69160);
    v16 = 46;
    goto LABEL_39;
  }
  ProbeForWrite(Address, 8uLL, 4u);
  *Address = *(_QWORD *)(v5 + 280);
  SetIAMThreadInfo(v5, v4);
  v8 = 1;
LABEL_41:
  UserSessionSwitchLeaveCrit(v14);
  return v8;
}
