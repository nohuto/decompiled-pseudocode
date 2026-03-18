/*
 * XREFs of NtUserGetAsyncKeyState @ 0x14016FB90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x140060DC8 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     EtwTraceUIPIInputError @ 0x140060E40 (EtwTraceUIPIInputError.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1400B9CF0 (IsKeyboardDelegationEnabledForThread.c)
 *     EtwTraceGetAsyncKeyState @ 0x1400C6FD4 (EtwTraceGetAsyncKeyState.c)
 *     _GetAsyncKeyState @ 0x14018D230 (_GetAsyncKeyState.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline @ 0x1401B9BF8 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 (*v14)(void); // rax
  int v15; // eax
  __int64 (*v16)(void); // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int16 AsyncKeyState; // bx
  bool v20; // bl
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  bool v31; // bl
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  InputDelegation *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  InputDelegation *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v43; // [rsp+70h] [rbp-28h] BYREF
  int v44; // [rsp+78h] [rbp-20h]
  InputDelegation *v45; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v46; // [rsp+B0h] [rbp+18h]

  v2 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v45, 1LL);
  if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18904) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v9 = -*(_QWORD *)CurrentProcessWin32Process;
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v10 = v8 & CurrentProcessWin32Process;
    }
    v6 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18904);
    if ( v10 != *(_QWORD *)(v6 + 464) )
      EtwTraceGetAsyncKeyState((__int64)v45);
  }
  v11 = 0;
  v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48);
  v14 = *(__int64 (**)(void))(v13 + 712);
  if ( v14 )
    v15 = v14();
  else
    v15 = -1073741637;
  if ( v15 >= 0 )
  {
    v16 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 48) + 720LL);
    if ( v16 )
      v11 = v16();
  }
  if ( v11 )
  {
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
    {
LABEL_14:
      UserSetLastError(5);
LABEL_15:
      AsyncKeyState = 0;
      goto LABEL_41;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v2 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v17);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v2;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        2,
        100,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    AsyncKeyState = 0;
LABEL_24:
    UserSetLastError(5);
    goto LABEL_41;
  }
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1u) )
  {
    v26 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18888);
    v46 = *(_QWORD *)(v26 + 448);
    v27 = *(_DWORD *)(v26 + 456);
    v29 = *(_QWORD *)(W32GetUserSessionState(v26, v28) + 18888);
    v43 = v46;
    v44 = v27;
    EtwTraceUIPIInputError((__int64)v45, 0LL, v29, &v43, 3);
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_14;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v2 = 0;
    }
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v30);
      LOBYTE(v33) = v31;
      LOBYTE(v34) = v2;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v33,
        *(_QWORD *)(v32 + 69144),
        2,
        2,
        101,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    AsyncKeyState = 0;
    goto LABEL_24;
  }
  v35 = v45;
  if ( IsKeyboardDelegationEnabledForThread(v45) )
  {
    *(_DWORD *)(*((_QWORD *)v35 + 65) + 124LL) = 0;
    *(_QWORD *)(*((_QWORD *)v45 + 65) + 128LL) = 0LL;
    if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
      *(_QWORD *)(*((_QWORD *)v45 + 65) + 136LL) = 0LL;
    goto LABEL_15;
  }
  AsyncKeyState = GetAsyncKeyState(a1);
  v46 = *(_QWORD *)(W32GetUserSessionState(v37, v36) + 19872);
  v38 = v45;
  v39 = *((_QWORD *)v45 + 65);
  *(_DWORD *)(v39 + 124) = *(_DWORD *)(v46 + 6988);
  v40 = W32GetUserSessionState(v38, v39);
  *(_QWORD *)(*((_QWORD *)v45 + 65) + 128LL) = *(_QWORD *)(v40 + 14336);
  if ( !(unsigned int)Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledDeviceUsageNoInline() )
  {
    v18 = *(_QWORD *)(W32GetUserSessionState(v41, v18) + 14464);
    *(_QWORD *)(*((_QWORD *)v45 + 65) + 136LL) = v18;
  }
LABEL_41:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v18);
  return AsyncKeyState;
}
