/*
 * XREFs of NtMITInitMinuserThread @ 0x1401BAAD0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ProtectHandle @ 0x1400DDACC (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtMITInitMinuserThread(HANDLE Handle, __int64 a2)
{
  _QWORD *UserSessionState; // rsi
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  char v11; // al
  int **v12; // rdi
  __int64 v13; // rdx
  struct tagTHREADINFO *v14; // rdi
  int v15; // esi
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(Handle, a2);
  v4 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
  v6 = v5;
  UserSessionState[3] = v5;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v6 )
      goto LABEL_22;
    *(_BYTE *)(v6 + 1708) = 1;
  }
  if ( v6 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 528), 0, 0) & 0x1000000) != 0
      && *(char *)(v6 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( !CurrentProcessWin32Process )
        goto LABEL_22;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v10 = v7 & CurrentProcessWin32Process;
      if ( !v10 )
        goto LABEL_22;
      v11 = *(_BYTE *)(v10 + 1176);
      if ( v11 != 1 )
        goto LABEL_22;
    }
    else
    {
      v11 = 0;
    }
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = (int **)UserSessionState[2464];
        if ( !v12 )
          break;
        UserSessionState[2464] = v12[2];
        v12[2] = 0LL;
        if ( !(*v12)[2] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
        HMUnlockObject(*v12, v7);
      }
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
    }
  }
LABEL_22:
  v14 = PtiCurrent();
  if ( (*((_DWORD *)v14 + 340) & 0x1000000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    Object = 0LL;
    v15 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v15 >= 0 )
    {
      v15 = ProtectHandle(Handle, v13, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
      if ( v15 < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        if ( *((_QWORD *)v14 + 96) )
        {
          ProtectHandle(*((void **)v14 + 95), v13, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
          ObCloseHandle(*((HANDLE *)v14 + 95), 1);
          ObfDereferenceObject(*((PVOID *)v14 + 96));
        }
        *((_QWORD *)v14 + 95) = Handle;
        *((_QWORD *)v14 + 96) = Object;
        _InterlockedOr((volatile signed __int32 *)v14 + 132, 0x40u);
        *((_QWORD *)v14 + 170) |= 0x1000000uLL;
      }
    }
    LOBYTE(v4) = v15 >= 0;
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v13);
  return v4;
}
