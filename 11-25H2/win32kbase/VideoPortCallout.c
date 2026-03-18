/*
 * XREFs of VideoPortCallout @ 0x1401241D0
 * Callers:
 *     Win32kBaseVideoPortCallout @ 0x140124190 (Win32kBaseVideoPortCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x14012AF58 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 *     CreateKernelEvent @ 0x140135730 (CreateKernelEvent.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     CSTRemove @ 0x1401AF840 (CSTRemove.c)
 */

void __fastcall VideoPortCallout(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  int *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  PVOID Buffer; // [rsp+48h] [rbp-18h]
  PVOID Object[2]; // [rsp+50h] [rbp-10h] BYREF
  int v28; // [rsp+90h] [rbp+30h] BYREF

  v25 = a1;
  v28 = 0;
  Buffer = (PVOID)CreateKernelEvent(SynchronizationEvent);
  if ( !Buffer )
  {
    *(_DWORD *)(a1 + 24) = -1073741801;
    return;
  }
  if ( *(_BYTE *)(v25 + 31)
    && (!*(_DWORD *)(W32GetUserGdiSessionState(v2) + 32) || !*(_QWORD *)(W32GetUserSessionState(v2, v3) + 71288)) )
  {
    Object[0] = *(PVOID *)(W32GetUserSessionState(v2, v3) + 68384);
    Object[1] = *(PVOID *)(W32GetUserSessionState(Object[0], v4) + 68392);
    KeWaitForMultipleObjects(2u, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
  }
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v2) + 32) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v6, v5) + 71288) )
    {
      v7 = -1073741816;
      goto LABEL_42;
    }
    UserSessionState = (_QWORD *)W32GetUserSessionState(v9, v8);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              UserSessionState,
              1LL,
              0LL,
              _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
    v12 = v11;
    UserSessionState[3] = v11;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v12 )
        goto LABEL_20;
    }
    else
    {
      if ( !v12 )
        goto LABEL_20;
      *(_BYTE *)(v12 + 1708) = 1;
    }
    if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v12) )
    {
      DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
    }
LABEL_20:
    v7 = SendVideoPortCalloutRequest((struct _POWER_INIT *)&v25, &v28);
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v13);
    if ( v7 >= 0 )
    {
      KeWaitForSingleObject(Buffer, WrUserRequest, 0, 0, 0LL);
      v7 = *(_DWORD *)(a1 + 24);
      goto LABEL_42;
    }
    if ( !v28 )
      goto LABEL_42;
    v16 = (_QWORD *)W32GetUserSessionState(v15, v14);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v17 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              v16,
              1LL,
              0LL,
              _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v17 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v16, 0LL);
    v18 = v17;
    v16[3] = v17;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v18 )
        goto LABEL_30;
    }
    else if ( v18 )
    {
      *(_BYTE *)(v18 + 1708) = 1;
LABEL_30:
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v18 + 528), 0, 0) & 0x1000000) != 0
        && *(char *)(v18 + 1360) >= 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
        if ( CurrentProcessWin32Process )
        {
          if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1176) == 1 )
          {
            while ( 1 )
            {
              v23 = v16[2464];
              if ( !v23 )
                break;
              v16[2464] = *(_QWORD *)(v23 + 16);
              v22 = *(int **)v23;
              *(_QWORD *)(v23 + 16) = 0LL;
              if ( !v22[2] )
              {
                v28 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4686LL);
              }
              HMUnlockObject(*(int **)v23, v21);
            }
            DestroyDeferredUnlockObjectAssignmentList(v16 + 2468);
            DestroyDeferredUnlockObjectAssignmentList(v16 + 2466);
          }
        }
      }
    }
    CSTRemove(4LL, &v25);
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v24);
    goto LABEL_42;
  }
  v7 = -2143420409;
LABEL_42:
  GreDeleteFastMutex((char *)Buffer);
  *(_DWORD *)(a1 + 24) = v7;
}
