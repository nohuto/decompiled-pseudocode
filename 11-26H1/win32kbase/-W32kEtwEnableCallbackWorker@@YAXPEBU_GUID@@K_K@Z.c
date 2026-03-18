/*
 * XREFs of ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140178390
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x1401DA228 (W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___.c)
 *     _lambda_df2f3eaa3e482cf290a08bb1842ad908_::operator() @ 0x1401DA890 (_lambda_df2f3eaa3e482cf290a08bb1842ad908_--operator().c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x14015F6F4 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x140196CFC (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

void __fastcall W32kEtwEnableCallbackWorker(const struct _GUID *a1, unsigned int a2, unsigned __int64 a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v10; // rax
  int v11; // edx
  int v12; // r8d
  int v13; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  _QWORD *v22; // rbx
  __int64 v23; // rax
  int v24; // edx
  int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _BYTE v30[256]; // [rsp+20h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v30);
  if ( a2 <= 1 )
  {
    v6 = 0x40000;
    W32kEtwEnabledKeyword = a3;
    if ( (a3 & 0x8000000000040000uLL) == 0
      || (unsigned __int8)(byte_1402A9DD8 - 1) <= 2u
      || (qword_1402A9DC0 & 0x8000000000040000uLL) == 0
      || (qword_1402A9DC8 & 0x8000000000040000uLL) != qword_1402A9DC8 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v7, 0x40000, v8) + 36384) )
      {
        UserSessionState = (_QWORD *)W32GetUserSessionState(v7, v6, v8);
        v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                UserSessionState,
                1LL,
                0LL,
                _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
        UserSessionState[3] = v10;
        v13 = v10;
        if ( v10 )
        {
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 520), 0, 0) & 0x1000000) != 0
            && *(char *)(v10 + 1360) >= 0 )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
            if ( CurrentProcessWin32Process )
            {
              if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
              {
                DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v11, v12);
                DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
                DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
              }
            }
          }
        }
        *(_DWORD *)(W32GetUserSessionState(v13, v11, v12) + 36384) = 0;
        UserSessionSwitchLeaveCritWithNonPaged(v16, v15, v17, v18);
      }
    }
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback(v7, v6, v8);
    v22 = (_QWORD *)W32GetUserSessionState(v20, v19, v21);
    v23 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v22,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v22[3] = v23;
    if ( v23 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v23) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v22 + 2465), v24, v25);
      DestroyDeferredUnlockObjectAssignmentList(v22 + 2472);
      DestroyDeferredUnlockObjectAssignmentList(v22 + 2470);
    }
    CitEtwEnableCallback(a1, a3);
    UserSessionSwitchLeaveCritWithNonPaged(v27, v26, v28, v29);
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v30);
}
