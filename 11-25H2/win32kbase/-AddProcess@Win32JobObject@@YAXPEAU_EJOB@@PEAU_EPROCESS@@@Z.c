/*
 * XREFs of ?AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z @ 0x1401AC9F8
 * Callers:
 *     JobAddProcessNotify @ 0x1401AD760 (JobAddProcessNotify.c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033310 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401ACC7C (Win32JobObject--_anonymous_namespace_--ConfigureProcessRestrictions.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401AD018 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 */

void __fastcall Win32JobObject::AddProcess(Win32JobObject *this, struct _EJOB *a2, struct _EPROCESS *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  _QWORD *ProcessWin32Process; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  unsigned int JobUIRestrictionsClass; // ebx
  __int64 W32Job; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v17; // [rsp+28h] [rbp-110h]
  _BYTE v18[256]; // [rsp+30h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v18);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v6, v5);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v8 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
  v9 = v8;
  UserSessionState[3] = v8;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v9 )
      goto LABEL_10;
  }
  else
  {
    if ( !v9 )
      goto LABEL_10;
    *(_BYTE *)(v9 + 1708) = 1;
  }
  if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v9) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v10);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  v17 = 0LL;
  v16[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v16, v10);
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(a2);
  v13 = ProcessWin32Process;
  if ( ProcessWin32Process && *ProcessWin32Process )
  {
    JobUIRestrictionsClass = PsGetJobUIRestrictionsClass(this);
    W32Job = Win32JobObject::_anonymous_namespace_::FindW32Job(this);
    Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions(W32Job, v13, JobUIRestrictionsClass);
  }
  if ( v16[0] )
    --*(_DWORD *)(v17 + 28);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v18);
}
