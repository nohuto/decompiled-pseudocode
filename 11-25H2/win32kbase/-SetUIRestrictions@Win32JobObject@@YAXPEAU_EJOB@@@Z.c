/*
 * XREFs of ?SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD4F4
 * Callers:
 *     JobSetUIRestrictionsNotify @ 0x1401AD7C0 (JobSetUIRestrictionsNotify.c)
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

void __fastcall Win32JobObject::SetUIRestrictions(Win32JobObject *this, struct _EJOB *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  int JobUIRestrictionsClass; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *i; // rbx
  _QWORD *W32Job; // rax
  _BYTE v15[8]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v16; // [rsp+28h] [rbp-110h]
  _BYTE v17[256]; // [rsp+30h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v17);
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
  v16 = 0LL;
  v15[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v15, v8);
  JobUIRestrictionsClass = PsGetJobUIRestrictionsClass(this);
  for ( i = *(_QWORD **)(W32GetUserSessionState(v11, v10) + 36368); i; i = (_QWORD *)i[45] )
  {
    if ( (Win32JobObject *)PsGetProcessJob(*i) == this )
    {
      W32Job = Win32JobObject::_anonymous_namespace_::FindW32Job((__int64)this, v12);
      Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions((__int64)W32Job, i, JobUIRestrictionsClass);
    }
  }
  if ( v15[0] )
    --*(_DWORD *)(v16 + 28);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v17);
}
