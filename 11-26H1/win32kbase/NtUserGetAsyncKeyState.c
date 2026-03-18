/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1400E8790
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x14006C780 (IsKeyboardDelegationEnabledForThread.c)
 *     EtwTraceUIPIInputError @ 0x14006F600 (EtwTraceUIPIInputError.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x1400E8AFC (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline.c)
 *     ApiSetEditionIsGetAsyncKeyStateBlocked @ 0x1400E8B38 (ApiSetEditionIsGetAsyncKeyStateBlocked.c)
 *     EtwTraceGetAsyncKeyState @ 0x1400E8B98 (EtwTraceGetAsyncKeyState.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1400E8CE0 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     _GetAsyncKeyState @ 0x1400E8D50 (_GetAsyncKeyState.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  char v2; // si
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rbx
  InputDelegation *v12; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int16 AsyncKeyState; // si
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v28; // edx
  int v29; // r8d
  bool v30; // bl
  __int64 UserSessionState; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // edx
  int v37; // r8d
  __int64 v38; // rax
  int v39; // edx
  int v40; // r8d
  bool v41; // bl
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // [rsp+60h] [rbp-18h] BYREF
  int v46; // [rsp+68h] [rbp-10h]
  InputDelegation *v47; // [rsp+88h] [rbp+10h] BYREF

  v2 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v47);
  if ( !*(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 18944) )
    goto LABEL_22;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v11 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v9 = -*(_QWORD *)CurrentProcessWin32Process;
    v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v11 = v8 & CurrentProcessWin32Process;
  }
  if ( v11 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 18944) + 456LL) )
  {
LABEL_22:
    v12 = v47;
  }
  else
  {
    v12 = v47;
    EtwTraceGetAsyncKeyState(v47);
  }
  if ( (unsigned int)ApiSetEditionIsGetAsyncKeyStateBlocked() )
  {
    if ( (unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v2 = 0;
      }
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v28, v29);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v2;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(UserSessionState + 69136),
          2,
          2,
          100,
          (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
      }
      AsyncKeyState = 0;
      goto LABEL_21;
    }
LABEL_13:
    UserSetLastError(5);
LABEL_14:
    AsyncKeyState = 0;
    goto LABEL_11;
  }
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
    v34 = *(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 18928);
    v35 = *(_DWORD *)(v34 + 480);
    v45 = *(_QWORD *)(v34 + 472);
    v46 = v35;
    v38 = W32GetUserSessionState(v34, v36, v37);
    EtwTraceUIPIInputError((__int64)v12, 0LL, *(_QWORD *)(v38 + 18928), &v45, 3);
    if ( (unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v2 = 0;
      }
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v42 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v39, v40);
        LOBYTE(v43) = v41;
        LOBYTE(v44) = v2;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v44,
          v43,
          *(_QWORD *)(v42 + 69136),
          2,
          2,
          101,
          (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
      }
      AsyncKeyState = 0;
LABEL_21:
      UserSetLastError(5);
      goto LABEL_11;
    }
    goto LABEL_13;
  }
  if ( IsKeyboardDelegationEnabledForThread(v12, v13, v15) )
  {
    *(_DWORD *)(*((_QWORD *)v12 + 64) + 124LL) = 0;
    *(_QWORD *)(*((_QWORD *)v12 + 64) + 128LL) = 0LL;
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
    {
      v24 = 0LL;
      *(_QWORD *)(*((_QWORD *)v12 + 64) + 136LL) = 0LL;
    }
    goto LABEL_14;
  }
  AsyncKeyState = GetAsyncKeyState(a1);
  v20 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17, v19) + 19904) + 6988LL);
  v21 = *((_QWORD *)v12 + 64);
  *(_DWORD *)(v21 + 124) = v20;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 128LL) = *(_QWORD *)(W32GetUserSessionState(v21, v20, v22) + 14328);
  if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
  {
    v24 = *(_QWORD *)(W32GetUserSessionState(v24, v23, v25) + 14456);
    *(_QWORD *)(*((_QWORD *)v12 + 64) + 136LL) = v24;
  }
LABEL_11:
  UserSessionSwitchLeaveCritWithNonPaged(v24, v23, v25, v26);
  return AsyncKeyState;
}
