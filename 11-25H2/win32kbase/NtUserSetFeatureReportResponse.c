/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1401BFA20
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x140153980 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     RIMIDECheckInjectionCapability @ 0x1401E8610 (RIMIDECheckInjectionCapability.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1401EA4A4 (RIMIDEResetPointerDeviceMaxCount.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(char *a1, char *a2, unsigned int a3)
{
  __int64 v3; // r15
  _QWORD *UserSessionState; // r14
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  bool v11; // si
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // rsi
  __int64 v17; // rdx
  char *v18; // rcx
  char *v19; // r13
  int v20; // eax
  PVOID v21; // rsi
  char *v22; // rcx
  _DWORD *v23; // r15
  unsigned int v24; // r12d
  int *v25; // r14
  int v26; // edx
  int v27; // r8d
  int v28; // eax
  __int64 v29; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int16 v35; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  PVOID Buffer; // [rsp+58h] [rbp-50h]
  char v40; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  Object = 0LL;
  Buffer = 0LL;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = 1;
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
    v6 = 1;
  }
  v8 = v7;
  UserSessionState[3] = v7;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v8 )
      goto LABEL_10;
    *(_BYTE *)(v8 + 1708) = 1;
  }
  if ( v8 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v8) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v9);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  v40 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v40);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  if ( v40 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v14 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v10) + 69144);
    v35 = 44;
LABEL_18:
    LOBYTE(v13) = v11;
    LOBYTE(v12) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v13,
      v14,
      2,
      2,
      v35,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
LABEL_19:
    v15 = 5;
LABEL_67:
    v6 = 0;
    UserSetLastError(v15);
    goto LABEL_68;
  }
  if ( (unsigned int)(v3 - 1) > 6 || (v16 = 12 * v3, (unsigned __int64)(12 * v3) > 0xFFFFFFFF) )
  {
    v15 = 87;
    goto LABEL_67;
  }
  if ( !(unsigned int)RIMIDECheckInjectionCapability() )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v14 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v17) + 69144);
    v35 = 45;
    goto LABEL_18;
  }
  if ( v16 )
  {
    if ( ((unsigned __int8)a2 & (PsGetCurrentProcessWow64Process() == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = (char *)MmUserProbeAddress;
    if ( (unsigned __int64)&a2[v16] <= MmUserProbeAddress )
    {
      v18 = &a2[v16];
      if ( &a2[v16] >= a2 )
        goto LABEL_37;
      v18 = (char *)MmUserProbeAddress;
    }
    LOBYTE(v18) = **(_BYTE **)v18;
  }
LABEL_37:
  Buffer = (PVOID)Win32AllocPoolWithQuotaZInitImpl((__int64)v18, (unsigned int)v16, 0x74697355u);
  if ( !Buffer )
    ExRaiseStatus(-1073741801);
  v19 = (char *)Buffer;
  memmove(Buffer, a2, (unsigned int)v16);
  v20 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v21 = Object;
  v22 = (char *)Object + 72;
  if ( !Object )
    v22 = 0LL;
  if ( v20 < 0
    || (*((_DWORD *)v22 + 46) & 0x80u) == 0
    || (v23 = (_DWORD *)*((_QWORD *)v22 + 57), *(_DWORD *)(*((_QWORD *)Object + 55) + 16LL))
    || v23[91] != 3 )
  {
LABEL_57:
    v6 = 0;
    UserSetLastError(87);
    goto LABEL_63;
  }
  v24 = 0;
  if ( a3 )
  {
    v25 = (int *)(v19 + 4);
    while ( *((_WORD *)v25 - 2) == 13 )
    {
      if ( *((_WORD *)v25 - 1) == 85 )
      {
        v26 = *v25;
        if ( *v25 > 256 || (v27 = v23[6], (unsigned int)(v27 - 1) > 3) )
        {
          v27 = v23[6];
          if ( v27 != 7 || v26 > 5 )
            goto LABEL_57;
        }
        v28 = v23[194];
        if ( v27 == 7 )
          --v28;
        if ( v26 != v28 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v23) )
          goto LABEL_57;
      }
      else
      {
        if ( *((_WORD *)v25 - 1) != 89 || v23[6] != 7 || (unsigned int)*v25 > 1 )
          goto LABEL_57;
        v23[241] = *v25;
      }
      ++v24;
      v25 += 3;
      if ( v24 >= a3 )
        goto LABEL_63;
    }
    goto LABEL_57;
  }
LABEL_63:
  if ( v21 )
    ObfDereferenceObject(v21);
  GreDeleteFastMutex(v19);
LABEL_68:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v33 = W32GetUserSessionState(v32, v31);
    ExReleaseFastResource(*(_QWORD *)(v33 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v29);
  return v6;
}
