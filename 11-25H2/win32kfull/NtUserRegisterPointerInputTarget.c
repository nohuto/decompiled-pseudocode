/*
 * XREFs of NtUserRegisterPointerInputTarget @ 0x14029CCA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     _RegisterPointerInputTarget @ 0x14028EC54 (_RegisterPointerInputTarget.c)
 */

__int64 __fastcall NtUserRegisterPointerInputTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rbp
  struct tagTHREADINFO *v12; // rsi
  __int64 v13; // rdx
  UIPrivilegeIsolation *v14; // rcx
  bool v15; // di
  bool v16; // bp
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rax

  EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v7;
  if ( v7 )
  {
    v12 = PtiCurrent(v9, v8);
    if ( (unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(int *)(*((_QWORD *)v12 + 58) + 12LL) >= 0 )
      {
        v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x8000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
          LOBYTE(v18) = v16;
          LOBYTE(v19) = v15;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v19,
            v18,
            *(_QWORD *)(UserSessionState + 69160),
            3,
            16,
            28,
            (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
        }
        EtwTraceUIPISystemError(*((_QWORD *)v12 + 58), 0LL, 12LL);
        goto LABEL_13;
      }
    }
    else if ( UIPrivilegeIsolation::Enforced(v14) && *(int *)(*((_QWORD *)v12 + 58) + 12LL) >= 0 )
    {
      UserSetLastError(5);
      EtwTraceUIPISystemError(*((_QWORD *)v12 + 58), 0LL, 12LL);
      goto LABEL_25;
    }
    if ( v12 == *(struct tagTHREADINFO **)(v11 + 16) )
    {
      if ( !a4 || (v21 = *(_QWORD *)(v11 + 40), *(char *)(v21 + 20) >= 0) && *(char *)(v21 + 19) >= 0 )
      {
        if ( (unsigned int)(a3 - 2) <= 1 )
        {
          v10 = RegisterPointerInputTarget(v11, v13, a3, a4);
          goto LABEL_25;
        }
      }
      v20 = 87;
      goto LABEL_14;
    }
LABEL_13:
    v20 = 5;
LABEL_14:
    UserSetLastError(v20);
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
