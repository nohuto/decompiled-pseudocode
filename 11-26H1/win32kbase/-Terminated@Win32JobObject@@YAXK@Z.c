/*
 * XREFs of ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401CF7AC
 * Callers:
 *     JobTerminateNotify @ 0x1401CF940 (JobTerminateNotify.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1400494CC (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     Win32JobObject::_anonymous_namespace_::DeleteW32Job @ 0x1401CEFC0 (Win32JobObject--_anonymous_namespace_--DeleteW32Job.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401CF0D4 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 */

void __fastcall Win32JobObject::Terminated(Win32JobObject *this)
{
  int v1; // edi
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // r8d
  __int64 *W32Job; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v16[8]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v17; // [rsp+28h] [rbp-110h]
  _BYTE v18[264]; // [rsp+30h] [rbp-108h] BYREF

  v1 = (int)this;
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v18);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v3, v2, v4);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  if ( v6 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  v16[0] = 0;
  v17 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v16, v7, v8);
  W32Job = Win32JobObject::_anonymous_namespace_::FindW32Job(v1, v9, v10);
  if ( W32Job )
    Win32JobObject::_anonymous_namespace_::DeleteW32Job((char *)W32Job, v12, v14, v15);
  if ( v16[0] )
    --*(_DWORD *)(v17 + 28);
  UserSessionSwitchLeaveCritWithNonPaged(v13, v12, v14, v15);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v18);
}
