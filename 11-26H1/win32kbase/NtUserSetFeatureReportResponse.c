/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1401E89E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14005FB50 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RIMIDECheckInjectionCapability @ 0x140207378 (RIMIDECheckInjectionCapability.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x14020958C (RIMIDEResetPointerDeviceMaxCount.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(char *a1, volatile void *a2, unsigned int a3)
{
  __int64 v3; // r13
  _QWORD *UserSessionState; // rbx
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rax
  char v13; // al
  int v14; // edx
  int v15; // r8d
  bool v16; // bl
  int v17; // edx
  int v18; // r8d
  __int64 v19; // r9
  int v20; // ecx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r8d
  __int64 CurrentProcessWow64Process; // rax
  int v26; // ecx
  char *v27; // rax
  char *v28; // r14
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  PVOID v33; // r15
  char *v34; // rbx
  _DWORD *v35; // rbx
  int v36; // r12d
  char *v37; // rax
  int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 CurrentThreadWin32Thread; // rbx
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  __int64 v48; // rax
  __int16 v50; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  char *v52; // [rsp+58h] [rbp-30h]
  char v54; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  Object = 0LL;
  v52 = 0LL;
  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  v6 = 1;
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  LODWORD(v10) = v7;
  UserSessionState[3] = v7;
  if ( v7 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v7 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( !CurrentProcessWin32Process )
        goto LABEL_11;
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v12 = v10 & CurrentProcessWin32Process;
      if ( !v12 || *(_BYTE *)(v12 + 1200) != 1 )
        goto LABEL_11;
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    if ( v13 )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v10, v9);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
    }
  }
LABEL_11:
  v54 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v54);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  if ( v54 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v19 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v14, v15) + 69136);
    v50 = 44;
LABEL_19:
    LOBYTE(v18) = v16;
    LOBYTE(v17) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v18,
      v19,
      2,
      2,
      v50,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
LABEL_20:
    v20 = 5;
LABEL_61:
    v6 = 0;
    UserSetLastError(v20);
    goto LABEL_62;
  }
  if ( (unsigned int)(v3 - 1) > 6 || (v21 = 12 * v3, (unsigned __int64)(12 * v3) > 0xFFFFFFFF) )
  {
    v20 = 87;
    goto LABEL_61;
  }
  if ( !(unsigned int)RIMIDECheckInjectionCapability() )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v6) = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v19 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v22, v24) + 69136);
    v50 = 45;
    goto LABEL_19;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v23, v22);
  ProbeForRead(a2, 12 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  v27 = (char *)Win32AllocPoolWithQuotaZInitImpl(v26, v21, 0x74697355u);
  v28 = v27;
  v52 = v27;
  if ( !v27 )
    ExRaiseStatus(-1073741801);
  memmove(v27, (const void *)a2, v21);
  v29 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v33 = Object;
  v34 = (char *)Object + 72;
  if ( !Object )
    v34 = 0LL;
  if ( v29 < 0 )
    goto LABEL_50;
  if ( (*((_DWORD *)v34 + 46) & 0x80u) == 0 )
    goto LABEL_50;
  v35 = (_DWORD *)*((_QWORD *)v34 + 57);
  if ( *(_DWORD *)(*((_QWORD *)Object + 55) + 16LL) || v35[91] != 3 )
    goto LABEL_50;
  v36 = 0;
  if ( (_DWORD)v3 )
  {
    while ( 1 )
    {
      v30 = *(unsigned __int16 *)&v28[12 * v36];
      v37 = &v28[12 * v36];
      if ( (_WORD)v30 != 13 )
        break;
      if ( *((_WORD *)v37 + 1) == 85 )
      {
        v31 = *(unsigned int *)&v28[12 * v36 + 4];
        if ( ((int)v31 > 256 || !(unsigned int)RIMIsTouchPointerDevice((__int64)v35)) && (v35[6] != 7 || (int)v31 > 5) )
          break;
        v38 = v35[194];
        if ( v35[6] == 7 )
          --v38;
        if ( (_DWORD)v31 != v38 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v35, (unsigned int)v31) )
          break;
      }
      else
      {
        if ( *((_WORD *)v37 + 1) != 89 )
          break;
        if ( v35[6] != 7 )
          break;
        v39 = *(_DWORD *)&v28[12 * v36 + 4];
        if ( v39 > 1 )
          break;
        v35[241] = v39;
      }
      if ( ++v36 >= (unsigned int)v3 )
        goto LABEL_56;
    }
LABEL_50:
    v6 = 0;
    UserSetLastError(87);
  }
LABEL_56:
  if ( v33 )
    ObfDereferenceObject(v33);
  if ( v28 )
    GreDeleteFastMutex(v28, v30, v31, v32);
LABEL_62:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v41, v40);
    v48 = W32GetUserSessionState(v46, v45, v47);
    ExReleaseFastResource(*(_QWORD *)(v48 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(v41, v40, v42, v43);
  return v6;
}
