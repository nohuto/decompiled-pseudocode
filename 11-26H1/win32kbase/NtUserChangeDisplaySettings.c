/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1401E21D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxUserChangeDisplaySettings @ 0x140138F20 (xxxUserChangeDisplaySettings.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14013DAF4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14014B830 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DrvLogDiagDisplayChange @ 0x140186D50 (DrvLogDiagDisplayChange.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401C9CF0 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(_OWORD *a1, volatile void *a2, unsigned int a3, void *a4)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r15
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ebx
  struct tagTHREADINFO *v22; // rbx
  bool v23; // zf
  int v24; // ecx
  _DWORD v26[4]; // [rsp+48h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v27[3]; // [rsp+58h] [rbp-30h] BYREF

  LOBYTE(v27[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v27, 0LL, 0x1Au, 0);
  v8 = v27[1];
  v26[2] = 0;
  v26[0] = 0x2000;
  v26[1] = -1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v10, v9, v11);
  v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v13;
  if ( v13 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v14, v16);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v15) + 32) )
  {
    v22 = PtiCurrent(v18, v17);
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      v23 = !tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v22 + 57), 16);
    }
    else
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v22 + 130, 0, 0) & 0x20000000) == 0 )
      {
LABEL_8:
        if ( UIPrivilegeIsolation::CheckAccessEx(
               (UIPrivilegeIsolation *)(*((_QWORD *)v22 + 57) + 864LL),
               (const struct tagUIPI_INFO *)v26,
               0LL) )
        {
          if ( (a3 & 0x8000000) != 0 )
          {
            v24 = 87;
            goto LABEL_11;
          }
LABEL_16:
          DrvLogDiagDisplayChange(0LL, 8);
          v21 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, a4, UserMode, v8);
          goto LABEL_17;
        }
LABEL_9:
        if ( a3 != 34 )
        {
          v24 = 5;
LABEL_11:
          v21 = -1;
          UserSetLastError(v24);
          goto LABEL_17;
        }
        goto LABEL_16;
      }
      v23 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 57) + 752LL) + 32LL) & 0x10) == 0;
    }
    if ( !v23 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v21 = -1;
LABEL_17:
  UserSessionSwitchLeaveCritWithNonPaged(v18, v17, v19, v20);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v27);
  return v21;
}
