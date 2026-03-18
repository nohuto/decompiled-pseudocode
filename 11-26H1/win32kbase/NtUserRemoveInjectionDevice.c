/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x1401B83E0
 * Callers:
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401E2960 (NtUserCreateSyntheticPointerDevice2.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x14005A710 (RIMIDERemoveInjectionDevice.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14005FB50 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserRemoveInjectionDevice(char *a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  char v5; // di
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // r8d
  bool v11; // bl
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  char *v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 CurrentThreadWin32Thread; // rbx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  PVOID v34; // [rsp+60h] [rbp+18h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, a2, a3);
  v5 = 1;
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  if ( v6 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  LOBYTE(Object) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&Object);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  v34 = 0LL;
  if ( (_BYTE)Object )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v5 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 69136),
        2,
        2,
        43,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    }
    v15 = 5;
    goto LABEL_27;
  }
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v34) < 0 )
  {
    v15 = 6;
LABEL_27:
    v17 = 0;
    UserSetLastError(v15);
    goto LABEL_28;
  }
  v17 = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v19 = *(_QWORD *)(CurrentProcessWin32Process + 880);
  v20 = v34;
  if ( !v19 )
    goto LABEL_22;
  v21 = *(char **)(v19 + 96);
  if ( !v21 )
    goto LABEL_22;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(v21, 3u, 1, &Object) < 0 )
    goto LABEL_22;
  if ( v20 == Object )
  {
    v17 = 0;
    UserSetLastError(6);
  }
  ObfDereferenceObject(Object);
  if ( v17 == 1 )
  {
LABEL_22:
    v22 = v20[49];
    RIMLockExclusive(v22 + 104);
    if ( (v20[32] & 4) == 0 )
      RIMIDERemoveInjectionDevice((__int64)v20);
    RIMUnlockExclusive(v22 + 104);
  }
  ObfDereferenceObject(v20);
LABEL_28:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v24, v23);
    v31 = W32GetUserSessionState(v29, v28, v30);
    ExReleaseFastResource(*(_QWORD *)(v31 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(v24, v23, v25, v26);
  return v17;
}
