/*
 * XREFs of NtUserInjectKeyboardInput @ 0x1401E6330
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
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1401546A0 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14016CD20 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     UserGetLastError @ 0x14019A2A8 (UserGetLastError.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RIMIDECheckInjectionCapability @ 0x140207378 (RIMIDECheckInjectionCapability.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1402087A4 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInjectKeyboardInput(volatile void *a1, unsigned int a2)
{
  char v2; // r14
  char v3; // bl
  char v4; // r15
  __int64 UserSessionState; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rax
  char v15; // al
  _DWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // r15
  bool v22; // bl
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // r15d
  __int64 CurrentProcessWow64Process; // rax
  int v28; // ecx
  void *v29; // rax
  int v30; // edx
  int v31; // r8d
  char v32; // r15
  int v33; // edx
  int v34; // r8d
  __int64 v35; // r9
  ULONG v36; // ecx
  int v37; // ecx
  int v38; // r8d
  char v39; // r15
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  char v46; // bl
  bool v47; // r15
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  char v54; // r15
  int v55; // edx
  int v56; // r8d
  __int64 v57; // r9
  int v58; // edx
  int v59; // r8d
  int v60; // ecx
  char v61; // r15
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  char v65; // r15
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  bool v69; // r12
  char LastError; // bl
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 CurrentThreadWin32Thread; // rbx
  int v82; // edx
  int v83; // ecx
  int v84; // r8d
  __int64 v85; // rax
  __int64 v86; // rdx
  __int16 v88; // [rsp+30h] [rbp-88h]
  __int16 v89; // [rsp+30h] [rbp-88h]
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp-50h]
  void **v92[9]; // [rsp+70h] [rbp-48h] BYREF
  SIZE_T Length; // [rsp+D0h] [rbp+18h] BYREF
  NTSTATUS Status; // [rsp+D8h] [rbp+20h]

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v3 = 0;
    v2 = 1;
  }
  else
  {
    v2 = 1;
    v3 = 1;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v3,
      v4,
      *(_QWORD *)(UserSessionState + 69136),
      4u,
      2u,
      0x3Au,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
      a1,
      a2);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v92, "InjectKeyboardInput", 0LL);
  v9 = (_QWORD *)W32GetUserSessionState(v7, v6, v8);
  v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          v9,
          1LL,
          0,
          (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9[3] = v10;
  if ( v10 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v10 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( !CurrentProcessWin32Process )
        goto LABEL_19;
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v14 = v11 & CurrentProcessWin32Process;
      if ( !v14 || *(_BYTE *)(v14 + 1200) != 1 )
        goto LABEL_19;
      v15 = 1;
    }
    else
    {
      v15 = 0;
    }
    if ( v15 )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v9 + 2465), v11, v12);
      DestroyDeferredUnlockObjectAssignmentList(v9 + 2472);
      DestroyDeferredUnlockObjectAssignmentList(v9 + 2470);
    }
  }
LABEL_19:
  LOBYTE(Length) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&Length);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  Buffer = 0LL;
  v16 = 0LL;
  Object = 0LL;
  v18 = PsGetCurrentProcessWin32Process(v17);
  v21 = v18;
  if ( v18 )
  {
    v19 = -(__int64)(*(_QWORD *)v18 != 0LL);
    v21 = v19 & v18;
  }
  if ( (_BYTE)Length )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v2 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v2;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69136),
        2,
        2,
        59,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    }
    v26 = 0;
    UserSetLastError(5);
    goto LABEL_119;
  }
  if ( a2 - 1 > 0xF )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v65 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v65 = 0;
    }
    LOBYTE(Length) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v65 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v66 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20);
      LOBYTE(v67) = Length;
      LOBYTE(v68) = v65;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v68,
        v67,
        *(_QWORD *)(v66 + 69136),
        2,
        2,
        60,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        a2);
    }
    goto LABEL_104;
  }
  Length = 24LL * a2;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a2, v19);
  ProbeForRead(a1, Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  v29 = (void *)Win32AllocPoolWithQuotaZInitImpl(v28, Length, 0x6B697355u);
  Buffer = v29;
  if ( !v29 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v29, (const void *)a1, Length);
  if ( *(_QWORD *)(v21 + 896) == -1LL )
  {
    if ( !(unsigned int)RIMIDECheckInjectionCapability() )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v32 = 0;
      }
      LOBYTE(Length) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v32 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v35 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v30, v31) + 69136);
      v88 = 62;
LABEL_42:
      LOBYTE(v34) = Length;
      LOBYTE(v33) = v32;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v34,
        v35,
        2,
        2,
        v88,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
LABEL_43:
      v36 = 5;
LABEL_105:
      v26 = 0;
LABEL_106:
      UserSetLastError(v36);
      goto LABEL_107;
    }
    Status = RIMIDECreatePseudoMouseOrKeyboardDevice(1LL, v21 + 896);
    if ( Status < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v37 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v37 & 2) == 0)
        || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v39 = 0;
      }
      LOBYTE(Length) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v40 = W32GetUserSessionState(v37, (_DWORD)WPP_GLOBAL_Control, v38);
        LOBYTE(v41) = Length;
        LOBYTE(v42) = v39;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v42,
          v41,
          *(_QWORD *)(v40 + 69136),
          2,
          2,
          63,
          (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
          Status);
      }
      v36 = 1359;
      goto LABEL_105;
    }
  }
  LODWORD(Length) = RawInputManagerDeviceObjectResolveHandle(*(char **)(v21 + 896), 3u, 1, &Object);
  if ( (Length & 0x80000000) != 0LL )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v44 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v44 & 2) == 0)
      || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v46 = 0;
    }
    v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v48 = W32GetUserSessionState(v44, (_DWORD)WPP_GLOBAL_Control, v45);
      LOBYTE(v49) = v47;
      LOBYTE(v50) = v46;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v50,
        v49,
        *(_QWORD *)(v48 + 69136),
        2,
        2,
        64,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        Length);
    }
    v26 = 0;
    UserSetLastError(6);
    v16 = Object;
    goto LABEL_107;
  }
  v16 = Object;
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v54 = 0;
    }
    LOBYTE(Length) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v54 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_104;
    v57 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v43, v45) + 69136);
    v89 = 65;
LABEL_70:
    LOBYTE(v56) = Length;
    LOBYTE(v55) = v54;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v55,
      v56,
      v57,
      2,
      2,
      v89,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
LABEL_104:
    v36 = 87;
    goto LABEL_105;
  }
  if ( (unsigned int)EditionIsRIMInjectionBlocked((__int64)Object + 72) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v32 = 0;
    }
    LOBYTE(Length) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v32 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_43;
    v35 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v58, v59) + 69136);
    v88 = 66;
    goto LABEL_42;
  }
  if ( v16[30] != 1 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v54 = 0;
    }
    LOBYTE(Length) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v54 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_104;
    v57 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v58, v59) + 69136);
    v89 = 67;
    goto LABEL_70;
  }
  Status = RIMIDEInjectKeyboardFromKeybdInputStruct((__int64)v16, (__int64)Buffer, a2);
  if ( Status < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v60 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v60 & 2) == 0)
      || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v61 = 0;
    }
    LOBYTE(Length) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v62 = W32GetUserSessionState(v60, (_DWORD)WPP_GLOBAL_Control, v52);
      LOBYTE(v63) = Length;
      LOBYTE(v64) = v61;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v64,
        v63,
        *(_QWORD *)(v62 + 69136),
        2,
        2,
        68,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        Status);
    }
    v26 = 0;
    v36 = RtlNtStatusToDosError(Status);
    goto LABEL_106;
  }
  v26 = 1;
LABEL_107:
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer, v51, v52, v53);
  if ( !v26 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v2 = 0;
    }
    v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v74 = W32GetUserSessionState(v72, v71, v73);
      LOBYTE(v75) = v69;
      LOBYTE(v76) = v2;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v76,
        v75,
        *(_QWORD *)(v74 + 69136),
        2,
        2,
        69,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        LastError);
    }
  }
LABEL_119:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v78, v77);
    v85 = W32GetUserSessionState(v83, v82, v84);
    ExReleaseFastResource(*(_QWORD *)(v85 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(v78, v77, v79, v80);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v92,
    v86);
  return v26;
}
