/*
 * XREFs of ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401CF664
 * Callers:
 *     JobSetUIRestrictionsNotify @ 0x1401CF920 (JobSetUIRestrictionsNotify.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1400494CC (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14019C1D0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401B6974 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401C5030 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401CEF44 (Win32JobObject--_anonymous_namespace_--ConfigureProcessRestrictions.c)
 */

void __fastcall Win32JobObject::SetUIRestrictions(Win32JobObject *this, struct _JOBOBJECT_BASIC_PROCESS_ID_LIST *a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 i; // rbx
  unsigned __int64 ProcessInfo; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  int ProcessEffectiveUILimits; // eax
  _BYTE v19[8]; // [rsp+30h] [rbp-168h] BYREF
  __int64 v20; // [rsp+38h] [rbp-160h]
  _BYTE v21[80]; // [rsp+40h] [rbp-158h] BYREF
  _BYTE v22[256]; // [rsp+90h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v22);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v4, v3, v5);
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v7;
  if ( v7 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v7) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v8, v9);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  v19[0] = 0;
  v20 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v19, v8, v9);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
  {
    CLockProcessByPid::CLockProcessByPid((__int64)v21, *((int *)this + 2 * i + 2), 0, v13, 1, 0LL);
    ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v21);
    v17 = ProcessInfo;
    if ( ProcessInfo && *(_BYTE *)(ProcessInfo + 1200) == 1 )
    {
      ProcessEffectiveUILimits = KfGetProcessEffectiveUILimits(*(_QWORD *)ProcessInfo);
      Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions(v17, ProcessEffectiveUILimits);
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v21, v16);
  }
  if ( v19[0] )
    --*(_DWORD *)(v20 + 28);
  UserSessionSwitchLeaveCritWithNonPaged(v11, v10, v12, v13);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v22);
}
