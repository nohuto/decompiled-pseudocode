/*
 * XREFs of _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401DA6F4
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401DA2E0 (W32AttachToProcessAndExecute__lambda_32f3cb84696a90cec3124b3263005914___.c)
 *     _lambda_886f0718d54f63ba37976d1a3a98de38_::operator() @ 0x1401DA7AC (_lambda_886f0718d54f63ba37976d1a3a98de38_--operator().c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x140196CFC (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401D3C30 (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 */

__int64 __fastcall lambda_32f3cb84696a90cec3124b3263005914_::operator()(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  ForegroundBoost *v7; // rcx
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[264]; // [rsp+20h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v3, v2, v4);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  if ( v6 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v9, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    ForegroundBoost::LogProcessInformation(v7);
  CitEtwEnableCallback(*(const struct _GUID **)a1, *(_QWORD *)(a1 + 8), v8);
  UserSessionSwitchLeaveCritWithNonPaged(v11, v10, v12, v13);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
  return 0LL;
}
