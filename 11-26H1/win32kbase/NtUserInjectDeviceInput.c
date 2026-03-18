/*
 * XREFs of NtUserInjectDeviceInput @ 0x1401E5960
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14005FB50 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     EditionIsRIMInjectionBlocked @ 0x14005FF20 (EditionIsRIMInjectionBlocked.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x14006E614 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMIDEInjectDeviceInput @ 0x140154A10 (RIMIDEInjectDeviceInput.c)
 *     UserGetLastError @ 0x14019A2A8 (UserGetLastError.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(char *a1, volatile void *a2, unsigned int a3)
{
  char v3; // r14
  char v4; // bl
  char v5; // r15
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rax
  char v16; // al
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rbx
  bool v20; // bl
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  int v24; // r15d
  char v25; // r15
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r9
  unsigned __int64 v29; // r15
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  bool v33; // r15
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // r8d
  char v43; // r15
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  ULONG v47; // ecx
  __int64 v48; // rax
  __int64 CurrentProcessWow64Process; // rax
  int v50; // ecx
  void *v51; // rax
  int v52; // ecx
  char v53; // r15
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  char v57; // r15
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  bool v61; // r12
  char LastError; // bl
  int v63; // edx
  int v64; // ecx
  int v65; // r8d
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 CurrentThreadWin32Thread; // rbx
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  __int64 v77; // rax
  __int64 v78; // rdx
  __int16 v80; // [rsp+30h] [rbp-98h]
  NTSTATUS Status[2]; // [rsp+60h] [rbp-68h] BYREF
  PVOID Buffer; // [rsp+78h] [rbp-50h]
  void **v83[9]; // [rsp+80h] [rbp-48h] BYREF
  int v87; // [rsp+E8h] [rbp+20h] BYREF

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
    v3 = 1;
  }
  else
  {
    v3 = 1;
    v4 = 1;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)WPP_GLOBAL_Control, a3);
    WPP_RECORDER_AND_TRACE_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v5,
      *(_QWORD *)(UserSessionState + 69136),
      4u,
      2u,
      0x58u,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
      a1,
      a2,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v83, "InjectDeviceInput", 0LL);
  v10 = (_QWORD *)W32GetUserSessionState(v8, v7, v9);
  v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          v10,
          1LL,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v10[3] = v11;
  if ( v11 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v11 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( !CurrentProcessWin32Process )
        goto LABEL_19;
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v15 = v12 & CurrentProcessWin32Process;
      if ( !v15 || *(_BYTE *)(v15 + 1200) != 1 )
        goto LABEL_19;
      v16 = 1;
    }
    else
    {
      v16 = 0;
    }
    if ( v16 )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v10 + 2465), v12, v13);
      DestroyDeferredUnlockObjectAssignmentList(v10 + 2472);
      DestroyDeferredUnlockObjectAssignmentList(v10 + 2470);
    }
  }
LABEL_19:
  LOBYTE(v87) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v87);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  v19 = 0LL;
  *(_QWORD *)Status = 0LL;
  Buffer = 0LL;
  if ( (_BYTE)v87 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v17, v18);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 69136),
        2,
        2,
        89,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    }
    v24 = 0;
    UserSetLastError(5);
    goto LABEL_118;
  }
  if ( !a3 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v25 = 0;
    }
    LOBYTE(v87) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_103;
    v28 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v17, v18) + 69136);
    v80 = 90;
LABEL_36:
    LOBYTE(v27) = v87;
    LOBYTE(v26) = v25;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v27,
      v28,
      2,
      2,
      v80,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
LABEL_103:
    v47 = 87;
LABEL_104:
    v24 = 0;
LABEL_105:
    UserSetLastError(v47);
    goto LABEL_106;
  }
  v29 = 12LL * a3;
  if ( v29 > 0xFFFFFFFF )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v57 = 0;
    }
    LOBYTE(v87) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v58 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v17, v18);
      LOBYTE(v59) = v87;
      LOBYTE(v60) = v57;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v60,
        v59,
        *(_QWORD *)(v58 + 69136),
        2,
        2,
        91,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        a3);
    }
    goto LABEL_103;
  }
  v87 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, (PVOID *)Status);
  if ( v87 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v31 = *((_DWORD *)WPP_GLOBAL_Control + 11);
      if ( (v31 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        LOBYTE(v19) = 1;
    }
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState(v31, (_DWORD)WPP_GLOBAL_Control, v32);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v19;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 69136),
        2,
        2,
        92,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        v87);
    }
    v24 = 0;
    UserSetLastError(6);
    v19 = *(_QWORD *)Status;
    goto LABEL_106;
  }
  v19 = *(_QWORD *)Status;
  if ( (*(_DWORD *)(*(_QWORD *)Status + 240LL) & 0x2000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v25 = 0;
    }
    LOBYTE(v87) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_103;
    v28 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v30, v32) + 69136);
    v80 = 93;
    goto LABEL_36;
  }
  if ( (unsigned int)EditionIsRIMInjectionBlocked(*(_QWORD *)Status + 72LL) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v43 = 0;
    }
    LOBYTE(v87) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v44 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v40, v42);
      LOBYTE(v45) = v87;
      LOBYTE(v46) = v43;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v46,
        v45,
        *(_QWORD *)(v44 + 69136),
        2,
        2,
        94,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    }
    v47 = 5;
    goto LABEL_104;
  }
  if ( *(_DWORD *)(v19 + 120) != 2 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v25 = 0;
    }
    LOBYTE(v87) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_103;
    v28 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v40, v42) + 69136);
    v80 = 95;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v19 + 256) & 0x80u) != 0 )
  {
    v48 = *(_QWORD *)(v19 + 528);
    v41 = (unsigned int)-__CFSHR__(*(_DWORD *)(v48 + 368), 4);
    if ( __CFSHR__(*(_DWORD *)(v48 + 368), 4)
      && (*(_DWORD *)(v48 + 364) == 1 || __CFSHR__(*(_DWORD *)(v48 + 368), 4) && *(_DWORD *)(v48 + 364) == 2) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v25 = 0;
      }
      LOBYTE(v87) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_103;
      v28 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v40, v42) + 69136);
      v80 = 96;
      goto LABEL_36;
    }
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v41, v40);
  ProbeForRead(a2, 12LL * a3, CurrentProcessWow64Process != 0 ? 1 : 4);
  v51 = (void *)Win32AllocPoolWithQuotaZInitImpl(v50, (unsigned int)v29, 0x74697355u);
  Buffer = v51;
  if ( !v51 )
    ExRaiseStatus(-1073741801);
  memmove(v51, (const void *)a2, (unsigned int)v29);
  Status[0] = RIMIDEInjectDeviceInput(v19, (__int64)Buffer, a3, 4u);
  if ( Status[0] < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v52 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v52 & 2) == 0)
      || (v53 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v53 = 0;
    }
    LOBYTE(v87) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v54 = W32GetUserSessionState(v52, (_DWORD)WPP_GLOBAL_Control, v38);
      LOBYTE(v55) = v87;
      LOBYTE(v56) = v53;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v56,
        v55,
        *(_QWORD *)(v54 + 69136),
        2,
        2,
        98,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        Status[0]);
    }
    v24 = 0;
    v47 = RtlNtStatusToDosError(Status[0]);
    goto LABEL_105;
  }
  v24 = 1;
LABEL_106:
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer, v37, v38, v39);
  if ( v19 )
    ObfDereferenceObject((PVOID)v19);
  if ( !v24 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v66 = W32GetUserSessionState(v64, v63, v65);
      LOBYTE(v67) = v61;
      LOBYTE(v68) = v3;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v68,
        v67,
        *(_QWORD *)(v66 + 69136),
        2,
        2,
        99,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        LastError);
    }
  }
LABEL_118:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v70, v69);
    v77 = W32GetUserSessionState(v75, v74, v76);
    ExReleaseFastResource(*(_QWORD *)(v77 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(v70, v69, v71, v72);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v83,
    v78);
  return v24;
}
