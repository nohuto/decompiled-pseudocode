/*
 * XREFs of NtUserRegisterBSDRWindow @ 0x14024C210
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140283680 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserRegisterBSDRWindow(__int64 a1, unsigned int a2)
{
  LARGE_INTEGER v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  HANDLE v9; // rbx
  __int64 v10; // rdx
  struct tagQ **v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  _QWORD v17[3]; // [rsp+40h] [rbp-18h] BYREF

  v2.QuadPart = a2;
  v4 = 0LL;
  v5 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
    {
      UserSessionSwitchLeaveCrit(v7);
      return 0LL;
    }
  }
  v9 = *(HANDLE *)(W32GetUserSessionState(v7, v6) + 63552);
  if ( PsGetCurrentProcessId() == v9 )
    goto LABEL_8;
  if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v13, v12) + 63552) && (unsigned __int8)HasTcbPrivilege() )
    {
LABEL_8:
      if ( v5 )
      {
        v17[1] = v5;
        v17[0] = W32GetUserSessionState(v11, v10) + 63472;
        HMAssignmentLock(v17, 0LL);
      }
      if ( v2.LowPart )
      {
        v11 = *(struct tagQ ***)(W32GetUserSessionState(v11, v10) + 69040);
        if ( v11 )
          PostEventMessageEx((struct tagTHREADINFO *)v11, v11[59], 0x13u, 0LL, 0x329u, v2, 0xFFFFFFFFLL, 0LL);
      }
      v4 = 1LL;
      goto LABEL_14;
    }
  }
  else if ( !*(_QWORD *)(W32GetUserSessionState(v13, v12) + 63552) )
  {
    UserSessionState = W32GetUserSessionState(v15, v14);
    if ( (unsigned int)IsPrivileged(UserSessionState + 42544) )
      goto LABEL_8;
  }
  UserSetLastError(5);
LABEL_14:
  UserSessionSwitchLeaveCrit(v11);
  return v4;
}
