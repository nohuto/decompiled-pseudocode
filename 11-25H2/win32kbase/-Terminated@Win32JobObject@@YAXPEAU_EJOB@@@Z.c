/*
 * XREFs of ?Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD64C
 * Callers:
 *     JobTerminateNotify @ 0x1401AD7F0 (JobTerminateNotify.c)
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
 *     Win32JobObject::_anonymous_namespace_::DeleteW32Job @ 0x1401ACEF8 (Win32JobObject--_anonymous_namespace_--DeleteW32Job.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401AD018 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 */

void __fastcall Win32JobObject::Terminated(Win32JobObject *this, struct _EJOB *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  char *W32Job; // rax
  __int64 v11; // rdx
  _BYTE v12[8]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v13; // [rsp+28h] [rbp-110h]
  _BYTE v14[256]; // [rsp+30h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v14);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v4, v3);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
  v7 = v6;
  UserSessionState[3] = v6;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v7 )
      goto LABEL_10;
  }
  else
  {
    if ( !v7 )
      goto LABEL_10;
    *(_BYTE *)(v7 + 1708) = 1;
  }
  if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v7) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  v13 = 0LL;
  v12[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v12, v8);
  W32Job = (char *)Win32JobObject::_anonymous_namespace_::FindW32Job((__int64)this, v9);
  if ( W32Job )
    Win32JobObject::_anonymous_namespace_::DeleteW32Job(W32Job, v11);
  if ( v12[0] )
    --*(_DWORD *)(v13 + 28);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v11);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v14);
}
