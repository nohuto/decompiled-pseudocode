/*
 * XREFs of ?AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z @ 0x1401CEE80
 * Callers:
 *     JobAddProcessNotify @ 0x1401CF8E0 (JobAddProcessNotify.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401CF45C (-HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall Win32JobObject::AddProcess(Win32JobObject *this, struct _EPROCESS *a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  Win32JobObject *ProcessWin32Process; // rax
  struct tagPROCESSINFO *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v15[264]; // [rsp+20h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
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
  ProcessWin32Process = (Win32JobObject *)PsGetProcessWin32Process(this);
  if ( ProcessWin32Process && *(_QWORD *)ProcessWin32Process )
    Win32JobObject::HandleConvertToGui(ProcessWin32Process, v11);
  UserSessionSwitchLeaveCritWithNonPaged(v12, (__int64)v11, v13, v14);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
}
