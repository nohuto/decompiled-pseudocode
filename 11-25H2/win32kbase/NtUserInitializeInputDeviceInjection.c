/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1401BDD90
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     HMValidateSharedHandle @ 0x14003F620 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x140153980 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     RIMIDECheckInjectionCapability @ 0x1401E8610 (RIMIDECheckInjectionCapability.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1401EBD7C (RIMIDE_InitializeDeviceInjection.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        ULONG64 a7)
{
  __int64 v7; // r13
  int v9; // esi
  _QWORD *UserSessionState; // r14
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rax
  char v17; // al
  int **v18; // rbx
  __int64 v19; // rdx
  char *v20; // rbx
  __int64 v21; // r15
  bool v22; // bl
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r14
  char *v30; // rax
  int v31; // eax
  _QWORD *v32; // rdx
  __int64 v33; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int16 v44; // [rsp+30h] [rbp-78h]
  _BYTE v45[4]; // [rsp+40h] [rbp-68h] BYREF
  int v46; // [rsp+44h] [rbp-64h]
  int v47; // [rsp+48h] [rbp-60h]
  __int64 v48; // [rsp+58h] [rbp-50h] BYREF
  char *v49; // [rsp+60h] [rbp-48h]
  int v50; // [rsp+68h] [rbp-40h]
  unsigned __int16 v51; // [rsp+B0h] [rbp+8h]
  unsigned __int16 v52; // [rsp+B8h] [rbp+10h]

  v52 = a2;
  v51 = a1;
  v7 = a4;
  v9 = 1;
  while ( 1 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              UserSessionState,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
    v12 = v11;
    UserSessionState[3] = v11;
    if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v12 )
        goto LABEL_23;
      *(_BYTE *)(v12 + 1708) = 1;
    }
    if ( v12 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v12 + 528), 0, 0) & 0x1000000) != 0
        && *(char *)(v12 + 1360) >= 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
        if ( !CurrentProcessWin32Process )
          goto LABEL_23;
        v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v16 = v13 & CurrentProcessWin32Process;
        if ( !v16 || *(_BYTE *)(v16 + 1176) != 1 )
          goto LABEL_23;
        v17 = 1;
      }
      else
      {
        v17 = 0;
      }
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = (int **)UserSessionState[2464];
          if ( !v18 )
            break;
          UserSessionState[2464] = v18[2];
          v18[2] = 0LL;
          if ( !(*v18)[2] )
          {
            v46 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
          }
          HMUnlockObject(*v18, v13);
        }
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
      }
    }
LABEL_23:
    v45[0] = 0;
    EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v45);
    Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
    v20 = 0LL;
    v49 = 0LL;
    v21 = 0LL;
    v48 = 0LL;
    if ( v45[0] )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v9) = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v19) + 69144);
      v44 = 10;
LABEL_31:
      LOBYTE(v24) = v22;
      LOBYTE(v23) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v24,
        v25,
        2,
        2,
        v44,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
LABEL_32:
      v26 = 5;
LABEL_65:
      v9 = 0;
      UserSetLastError(v26);
      goto LABEL_66;
    }
    if ( !(unsigned int)RIMIDECheckInjectionCapability() )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v9) = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v27) + 69144);
      v44 = 11;
      goto LABEL_31;
    }
    v29 = 32 * v7;
    if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !(_DWORD)v7 || (unsigned int)(a6 - 1) > 2 )
    {
      v26 = 87;
      goto LABEL_65;
    }
    if ( a5 )
    {
      v21 = HMValidateSharedHandle(a5, v27);
      if ( !v21 )
      {
        v9 = 0;
        goto LABEL_62;
      }
    }
    if ( v29 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      v28 = (__int64)a3 + v29;
    }
    v30 = (char *)Win32AllocPoolWithQuotaZInitImpl(v28, (unsigned int)v29, 0x74697355u);
    v20 = v30;
    v49 = v30;
    if ( !v30 )
      ExRaiseStatus(-1073741801);
    RtlCopyVolatileMemory(v30, a3, 32 * v7);
    v31 = RIMIDE_InitializeDeviceInjection(v51, v52, v20, (unsigned int)v7, v21, a6, &v48);
    v50 = v31;
    if ( v31 >= 0 )
    {
      v32 = (_QWORD *)a7;
      if ( a7 >= MmUserProbeAddress )
        v32 = (_QWORD *)MmUserProbeAddress;
      *v32 = v48;
      v47 = 1;
      goto LABEL_62;
    }
    if ( v31 != -2147483631 )
      break;
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
      v37 = W32GetUserSessionState(v36, v35);
      ExReleaseFastResource(*(_QWORD *)(v37 + 16), CurrentThreadWin32Thread + 176);
      KeLeaveCriticalRegion();
    }
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v33);
  }
  v9 = 0;
  v47 = 0;
  UserSetLastError(87);
LABEL_62:
  if ( v20 )
    GreDeleteFastMutex(v20);
LABEL_66:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    v39 = PsGetCurrentThreadWin32Thread();
    v42 = W32GetUserSessionState(v41, v40);
    ExReleaseFastResource(*(_QWORD *)(v42 + 16), v39 + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v38);
  return v9;
}
