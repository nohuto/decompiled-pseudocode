/*
 * XREFs of NtUserChangeDisplaySettings @ 0x14016EAB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     xxxUserChangeDisplaySettings @ 0x1400E1A50 (xxxUserChangeDisplaySettings.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F7E74 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EDF8 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DrvLogDiagDisplayChange @ 0x14014A0D0 (DrvLogDiagDisplayChange.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401AC114 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(_OWORD *a1, void *a2, unsigned int a3, void *a4)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  struct tagTHREADINFO *v19; // rbx
  bool v20; // r9
  __int64 v21; // rcx
  int v22; // ecx
  signed __int32 v23; // eax
  char *v24; // rbx
  _DWORD v26[4]; // [rsp+48h] [rbp-50h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v27[3]; // [rsp+58h] [rbp-40h] BYREF

  LOBYTE(v27[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v27, 0LL, 0x1Au, 0);
  v26[1] = -1;
  v8 = v27[1];
  v26[2] = 0;
  v26[0] = 0x2000;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v10, v9);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            0LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v12) = 1;
    v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v12);
  }
  v14 = v13;
  UserSessionState[3] = v13;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v14 )
      goto LABEL_9;
  }
  else
  {
    if ( !v14 )
      goto LABEL_9;
    *(_BYTE *)(v14 + 1708) = 1;
  }
  DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v15);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
LABEL_9:
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v16) + 32) )
  {
    v19 = PtiCurrent();
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v19 + 58), 0x10u) )
        goto LABEL_15;
      v21 = *((_QWORD *)v19 + 58);
    }
    else
    {
      v23 = _InterlockedCompareExchange((volatile signed __int32 *)v19 + 132, 0, 0);
      v24 = (char *)v19 + 464;
      if ( (v23 & 0x20000000) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 752LL) + 24LL) & 0x10) != 0 )
        goto LABEL_15;
      v21 = *(_QWORD *)v24;
    }
    if ( UIPrivilegeIsolation::CheckAccessEx(
           (UIPrivilegeIsolation *)(v21 + 864),
           (const struct tagUIPI_INFO *)v26,
           0LL,
           v20) )
    {
      if ( (a3 & 0x8000000) != 0 )
      {
        v22 = 87;
        goto LABEL_17;
      }
LABEL_23:
      DrvLogDiagDisplayChange(0LL, 8);
      v18 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, a4, UserMode, v8);
      goto LABEL_24;
    }
LABEL_15:
    if ( a3 != 34 )
    {
      v22 = 5;
LABEL_17:
      v18 = -1;
      UserSetLastError(v22);
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  v18 = -1;
LABEL_24:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v17);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v27);
  return v18;
}
