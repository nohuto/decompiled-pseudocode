/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x140171340
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x140153980 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x14019CF94 (RIMIDE_CreateGenericHidDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     RIMIDECheckInjectionCapability @ 0x1401E8610 (RIMIDECheckInjectionCapability.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall NtUserInitializeGenericHidInjection(_OWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  int v3; // esi
  _QWORD *UserSessionState; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  char v11; // al
  int **v12; // rbx
  __int64 v13; // rdx
  bool v14; // bl
  int v15; // edx
  int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // rdx
  _BYTE **v19; // rcx
  unsigned __int16 epi16; // r14
  ULONG64 v21; // rdx
  __int64 v22; // rbx
  const void *v23; // r15
  void *v24; // rax
  const void *v25; // r15
  void *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int16 v39; // [rsp+30h] [rbp-C8h]
  char v40; // [rsp+40h] [rbp-B8h]
  char v41; // [rsp+41h] [rbp-B7h]
  __int64 v42; // [rsp+58h] [rbp-A0h] BYREF
  _OWORD v43[9]; // [rsp+60h] [rbp-98h] BYREF
  char v45; // [rsp+110h] [rbp+18h] BYREF
  int v46; // [rsp+118h] [rbp+20h]

  v2 = a2;
  v3 = 1;
  while ( 1 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
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
    if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v6 )
        goto LABEL_23;
      *(_BYTE *)(v6 + 1708) = 1;
    }
    if ( v6 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 528), 0, 0) & 0x1000000) != 0
        && *(char *)(v6 + 1360) >= 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
        if ( !CurrentProcessWin32Process )
          goto LABEL_23;
        v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v10 = v7 & CurrentProcessWin32Process;
        if ( !v10 || *(_BYTE *)(v10 + 1176) != 1 )
          goto LABEL_23;
        v11 = 1;
      }
      else
      {
        v11 = 0;
      }
      if ( v11 )
      {
        while ( 1 )
        {
          v12 = (int **)UserSessionState[2464];
          if ( !v12 )
            break;
          UserSessionState[2464] = v12[2];
          v12[2] = 0LL;
          if ( !(*v12)[2] )
          {
            v46 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4686LL);
          }
          HMUnlockObject(*v12, v7);
        }
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
      }
    }
LABEL_23:
    v45 = 0;
    EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v45);
    Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
    v42 = 0LL;
    memset(v43, 0, 0x40uLL);
    v40 = 0;
    v41 = 0;
    if ( v45 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v3) = 0;
      }
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v17 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v13) + 69144);
      v39 = 12;
LABEL_31:
      LOBYTE(v16) = v14;
      LOBYTE(v15) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v16,
        v17,
        2,
        2,
        v39,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
LABEL_32:
      v3 = 0;
      UserSetLastError(5);
      goto LABEL_84;
    }
    if ( !(unsigned int)RIMIDECheckInjectionCapability() )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        LOBYTE(v3) = 0;
      }
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v17 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v18) + 69144);
      v39 = 13;
      goto LABEL_31;
    }
    if ( ((unsigned __int8)a1 & (PsGetCurrentProcessWow64Process() == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (_BYTE **)MmUserProbeAddress;
    if ( (unsigned __int64)(a1 + 4) <= MmUserProbeAddress )
    {
      v19 = (_BYTE **)(a1 + 4);
      if ( a1 + 4 >= a1 )
        goto LABEL_47;
      v19 = (_BYTE **)MmUserProbeAddress;
    }
    LOBYTE(v19) = **v19;
LABEL_47:
    v43[0] = *a1;
    v43[1] = a1[1];
    v43[2] = a1[2];
    v43[3] = a1[3];
    epi16 = _mm_extract_epi16((__m128i)v43[3], 4);
    if ( epi16 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & LOBYTE(v43[3])) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = *(_BYTE ***)&v43[3];
      v21 = *(_QWORD *)&v43[3] + epi16;
      if ( v21 > MmUserProbeAddress || v21 < *(_QWORD *)&v43[3] )
        epi16 = WORD4(v43[3]);
    }
    v22 = WORD4(v43[2]);
    if ( WORD4(v43[2]) )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & LOBYTE(v43[2])) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = *(_BYTE ***)&v43[2];
      if ( *(_QWORD *)&v43[2] + v22 > MmUserProbeAddress
        || (unsigned __int64)(*(_QWORD *)&v43[2] + v22) < *(_QWORD *)&v43[2] )
      {
        epi16 = WORD4(v43[3]);
        LOWORD(v22) = WORD4(v43[2]);
      }
      if ( (_WORD)v22 )
      {
        v23 = *(const void **)&v43[2];
        v24 = (void *)Win32AllocPoolWithQuotaZInitImpl(*(__int64 *)&v43[2], (unsigned __int16)v22, 0x74697355u);
        *(_QWORD *)&v43[2] = v24;
        if ( !v24 )
          goto LABEL_61;
        v40 = 1;
        memmove(v24, v23, (unsigned __int16)v22);
      }
    }
    if ( epi16 )
      break;
LABEL_66:
    if ( !*(_QWORD *)&v43[2] )
      goto LABEL_67;
    v27 = RIMIDE_CreateGenericHidDevice(v43, &v42);
    if ( v27 >= 0 )
    {
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (_QWORD *)MmUserProbeAddress;
      *v2 = v42;
      goto LABEL_80;
    }
    if ( v27 != -2147483631 )
    {
LABEL_67:
      v3 = 0;
      UserSetLastError(87);
      goto LABEL_80;
    }
    if ( v40 )
      GreDeleteFastMutex(*(char **)&v43[2]);
    if ( v41 )
      GreDeleteFastMutex(*(char **)&v43[3]);
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
      v32 = W32GetUserSessionState(v31, v30);
      ExReleaseFastResource(*(_QWORD *)(v32 + 16), CurrentThreadWin32Thread + 176);
      KeLeaveCriticalRegion();
    }
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v28);
  }
  v25 = *(const void **)&v43[3];
  v26 = (void *)Win32AllocPoolWithQuotaZInitImpl((__int64)v19, epi16, 0x74697355u);
  *(_QWORD *)&v43[3] = v26;
  if ( v26 )
  {
    v41 = 1;
    memmove(v26, v25, epi16);
    goto LABEL_66;
  }
LABEL_61:
  v3 = 0;
  UserSetLastError(8);
LABEL_80:
  if ( v40 )
    GreDeleteFastMutex(*(char **)&v43[2]);
  if ( v41 )
    GreDeleteFastMutex(*(char **)&v43[3]);
LABEL_84:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    v34 = PsGetCurrentThreadWin32Thread();
    v37 = W32GetUserSessionState(v36, v35);
    ExReleaseFastResource(*(_QWORD *)(v37 + 16), v34 + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v33);
  return v3;
}
