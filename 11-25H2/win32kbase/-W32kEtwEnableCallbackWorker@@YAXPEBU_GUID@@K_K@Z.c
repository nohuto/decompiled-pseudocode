/*
 * XREFs of ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140140BD8
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x1401B7118 (W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___.c)
 *     _lambda_4c1584255ce3bbd473a704df5986d405_::operator() @ 0x1401B74EC (_lambda_4c1584255ce3bbd473a704df5986d405_--operator().c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033310 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1401212A8 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x14023FB58 (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 */

void __fastcall W32kEtwEnableCallbackWorker(const struct _GUID *a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  _BYTE v23[256]; // [rsp+20h] [rbp-128h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v23);
  if ( a2 <= 1 )
  {
    v6 = 0x8000000000040000uLL;
    W32kEtwEnabledKeyword = a3;
    if ( (a3 & 0x8000000000040000uLL) == 0
      || (unsigned __int8)(byte_14029EDB8 - 1) <= 2u
      || (qword_14029EDA0 & 0x8000000000040000uLL) == 0
      || (qword_14029EDA8 & 0x8000000000040000uLL) != qword_14029EDA8 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v7, 0x8000000000040000uLL) + 36352) )
      {
        UserSessionState = (_QWORD *)W32GetUserSessionState(v7, v6);
        if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
          v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
                 UserSessionState,
                 1LL,
                 0LL,
                 _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
        else
          v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
        v10 = v9;
        UserSessionState[3] = v9;
        if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( v10 )
            goto LABEL_14;
        }
        else if ( v10 )
        {
          *(_BYTE *)(v10 + 1708) = 1;
LABEL_14:
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 528), 0, 0) & 0x1000000) != 0
            && *(char *)(v10 + 1360) >= 0 )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
            if ( CurrentProcessWin32Process )
            {
              if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1176) == 1 )
              {
                while ( 1 )
                {
                  v15 = UserSessionState[2464];
                  if ( !v15 )
                    break;
                  UserSessionState[2464] = *(_QWORD *)(v15 + 16);
                  v14 = *(int **)v15;
                  *(_QWORD *)(v15 + 16) = 0LL;
                  if ( !v14[2] )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4686LL);
                  HMUnlockObject(*(int **)v15, v11);
                }
                DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
                DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
              }
            }
          }
        }
        *(_DWORD *)(W32GetUserSessionState(v12, v11) + 36352) = 0;
        UserSessionSwitchLeaveCritWithNonPaged(0LL, v16);
      }
    }
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback(v7, v6);
    v19 = (_QWORD *)W32GetUserSessionState(v18, v17);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v20 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              v19,
              1LL,
              0LL,
              _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v20 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v19, 0LL);
    v21 = v20;
    v19[3] = v20;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v21 )
      {
LABEL_34:
        if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v21) )
        {
          DestroySharedUserCritDeferredUnlockList(v19 + 2461);
          DestroyDeferredUnlockObjectAssignmentList(v19 + 2468);
          DestroyDeferredUnlockObjectAssignmentList(v19 + 2466);
        }
      }
    }
    else if ( v21 )
    {
      *(_BYTE *)(v21 + 1708) = 1;
      goto LABEL_34;
    }
    CitEtwEnableCallback(a1, a3);
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v22);
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v23);
}
