/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x14019B810
 * Callers:
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401BC380 (NtUserCreateSyntheticPointerDevice2.c)
 * Callees:
 *     RIMIDERemoveInjectionDevice @ 0x1400339A4 (RIMIDERemoveInjectionDevice.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x140153980 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall NtUserRemoveInjectionDevice(char *a1, __int64 a2)
{
  _QWORD *UserSessionState; // rsi
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  bool v9; // di
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rsi
  char *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  PVOID v28; // [rsp+70h] [rbp+18h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v4 = 1;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
  v6 = v5;
  UserSessionState[3] = v5;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v6 )
      goto LABEL_10;
  }
  else
  {
    if ( !v6 )
      goto LABEL_10;
    *(_BYTE *)(v6 + 1708) = 1;
  }
  if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v7);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  LOBYTE(Object) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&Object);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  v28 = 0LL;
  if ( (_BYTE)Object )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 69144),
        2,
        2,
        43,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v13 = 5;
    goto LABEL_33;
  }
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v28) < 0 )
  {
    v13 = 6;
LABEL_33:
    v15 = 0;
    UserSetLastError(v13);
    goto LABEL_34;
  }
  v15 = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v17 = *(_QWORD *)(CurrentProcessWin32Process + 880);
  v18 = v28;
  if ( !v17 )
    goto LABEL_28;
  v19 = *(char **)(v17 + 96);
  if ( !v19 )
    goto LABEL_28;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(v19, 3u, 1, &Object) < 0 )
    goto LABEL_28;
  if ( v18 == Object )
  {
    v15 = 0;
    UserSetLastError(6);
  }
  ObfDereferenceObject(Object);
  if ( v15 == 1 )
  {
LABEL_28:
    v20 = v18[49];
    RIMLockExclusive(v20 + 104);
    if ( (v18[32] & 4) == 0 )
      RIMIDERemoveInjectionDevice((__int64)v18);
    RIMUnlockExclusive(v20 + 104);
  }
  ObfDereferenceObject(v18);
LABEL_34:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v25 = W32GetUserSessionState(v24, v23);
    ExReleaseFastResource(*(_QWORD *)(v25 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v21);
  return v15;
}
