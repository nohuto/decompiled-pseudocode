/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1401212A8
 * Callers:
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140140BD8 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1400A5530 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1400A5664 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1400CD474 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  int *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  unsigned int v13; // ebp
  int v14; // esi
  char CurrentWin32kSessionId; // di
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // rbp
  __int64 i; // rdi
  __int64 v27; // rbx
  _QWORD *j; // rsi
  int ThreadId; // r13d
  char ThreadInfoFlags; // al
  int v31; // ecx
  char v32; // r15
  __int64 v33; // rcx
  __int64 v34; // r8
  char v35; // [rsp+90h] [rbp+8h]
  unsigned int v36; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v37; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v38; // [rsp+A8h] [rbp+20h]

  v37 = 0;
  v36 = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
  v4 = v3;
  UserSessionState[3] = v3;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v4 )
      goto LABEL_19;
  }
  else
  {
    if ( !v4 )
      goto LABEL_19;
    *(_BYTE *)(v4 + 1708) = 1;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 528), 0, 0) & 0x1000000) != 0
    && *(char *)(v4 + 1360) >= 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1176) == 1 )
      {
        while ( 1 )
        {
          v9 = UserSessionState[2464];
          if ( !v9 )
            break;
          UserSessionState[2464] = *(_QWORD *)(v9 + 16);
          v8 = *(int **)v9;
          *(_QWORD *)(v9 + 16) = 0LL;
          if ( !v8[2] )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4686LL);
          HMUnlockObject(*(int **)v9, v7);
        }
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
      }
    }
  }
LABEL_19:
  if ( (W32kEtwEnabledKeyword & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x8000000000040000uLL) != 0
    && (qword_14029EDA8 & 0x8000000000040000uLL) == qword_14029EDA8 )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v5, 0x8000000000040000uLL) + 36352) )
    {
      v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v13 = v11 - *(_DWORD *)(W32GetUserSessionState(v5, v10) + 36356);
      if ( v13 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
      {
        v14 = *(_DWORD *)(W32GetUserSessionState(v5, v12) + 36352);
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
        v18 = *(_DWORD *)(W32GetUserSessionState(v17, v16) + 36364);
        v21 = W32GetUserSessionState(v20, v19);
        McTemplateK0qqqqq_EtwWriteTransfer(
          v22,
          &WaitCursorEvent,
          v23,
          *(_DWORD *)(v21 + 36360),
          v18,
          CurrentWin32kSessionId,
          v14,
          v13);
      }
    }
  }
  v24 = 0x8000000000080000uLL;
  if ( (W32kEtwEnabledKeyword & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x8000000000080000uLL) != 0
    && (qword_14029EDA8 & 0x8000000000080000uLL) == qword_14029EDA8 )
  {
    v25 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    for ( i = *(_QWORD *)(W32GetUserSessionState(v5, 0x8000000000080000uLL) + 63520); ; i = *(_QWORD *)(i + 8) )
    {
      v38 = i;
      if ( !i )
        break;
      v27 = *(_QWORD *)(i + 16);
      if ( v27 )
      {
        do
        {
          for ( j = *(_QWORD **)(v27 + 176); j != (_QWORD *)(v27 + 176); j = (_QWORD *)*j )
          {
            ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*(j - 97));
            ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 97));
            v31 = *((_DWORD *)j + 132);
            v35 = ThreadInfoFlags;
            if ( v31 )
              v32 = v25 - v31;
            else
              v32 = 0;
            EtwpGetLastInputProcessTime((struct tagQ *const)*(j - 38), v25, &v37, &v36, 0LL, 0LL);
            if ( (Microsoft_Windows_Win32kEnableBits & 0x80u) != 0LL )
              McTemplateK0qqqqq_EtwWriteTransfer(v33, &ThreadInfoRundownEvent, v34, ThreadId, v35, v32, v37, v36);
          }
          v27 = *(_QWORD *)(v27 + 32);
        }
        while ( v27 );
        i = v38;
      }
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v24);
}
