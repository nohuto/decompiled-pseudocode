/*
 * XREFs of NtUserInjectMouseInput @ 0x14018E9E0
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
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x140154EE8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14016CD20 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserGetLastError @ 0x14019A2A8 (UserGetLastError.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RIMIDECheckInjectionCapability @ 0x140207378 (RIMIDECheckInjectionCapability.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1402087A4 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInjectMouseInput(volatile void *a1, unsigned int a2)
{
  char v3; // r14
  char v4; // bl
  char v5; // si
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  _QWORD *v10; // rbx
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  bool v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // esi
  _DWORD *v22; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // rsi
  __int64 v27; // rcx
  SIZE_T v28; // r13
  __int64 CurrentProcessWow64Process; // rax
  int v30; // ecx
  char *v31; // rax
  int v32; // edx
  int v33; // r8d
  bool v34; // si
  bool v35; // r13
  int v36; // edx
  int v37; // r8d
  __int64 v38; // r9
  ULONG v39; // ecx
  int v40; // ecx
  int v41; // r8d
  bool v42; // si
  bool v43; // r13
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  int v47; // eax
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  char v51; // r13
  bool v52; // bl
  bool v53; // si
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  bool v60; // si
  bool v61; // r13
  int v62; // edx
  int v63; // r8d
  __int64 v64; // r9
  int v65; // edx
  int v66; // r8d
  int v67; // ecx
  bool v68; // si
  bool v69; // r13
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  bool v73; // si
  bool v74; // r13
  __int64 v75; // rax
  int v76; // r8d
  int v77; // edx
  bool v78; // r15
  char LastError; // bl
  int v80; // edx
  int v81; // ecx
  int v82; // r8d
  __int64 v83; // rax
  int v84; // r8d
  int v85; // edx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 CurrentThreadWin32Thread; // rbx
  int v91; // edx
  int v92; // ecx
  int v93; // r8d
  __int64 v94; // rax
  __int64 v95; // rdx
  __int16 v97; // [rsp+30h] [rbp-78h]
  __int16 v98; // [rsp+30h] [rbp-78h]
  char *Buffer; // [rsp+60h] [rbp-48h]
  void **v100[8]; // [rsp+68h] [rbp-40h] BYREF
  NTSTATUS Status; // [rsp+C0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+20h] BYREF

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
    UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v5,
      *(_QWORD *)(UserSessionState + 69136),
      4u,
      2u,
      0x2Eu,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
      a1,
      a2);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v100, "InjectMouseInput", 0LL);
  v10 = (_QWORD *)W32GetUserSessionState(v8, v7, v9);
  v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          v10,
          1LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v10[3] = v11;
  if ( v11 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v11) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(v10 + 2465), v12, v13);
    DestroyDeferredUnlockObjectAssignmentList(v10 + 2472);
    DestroyDeferredUnlockObjectAssignmentList(v10 + 2470);
  }
  LOBYTE(Status) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&Status);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  if ( (_BYTE)Status )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v16);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 69136),
        2,
        2,
        47,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    }
    v21 = 0;
    UserSetLastError(5);
    goto LABEL_120;
  }
  Buffer = 0LL;
  v22 = 0LL;
  Object = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
  v26 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v24 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v26 = v24 & CurrentProcessWin32Process;
  }
  v27 = a2 - 1;
  if ( (unsigned int)v27 > 0xF )
  {
    v73 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v74 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v73 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v75 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v24, v25);
      LOBYTE(v76) = v74;
      LOBYTE(v77) = v73;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v77,
        v76,
        *(_QWORD *)(v75 + 69136),
        2,
        2,
        48,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        a2);
    }
    goto LABEL_105;
  }
  v28 = 32LL * a2;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v27, v24);
  ProbeForRead(a1, v28, CurrentProcessWow64Process != 0 ? 1 : 4);
  v31 = (char *)Win32AllocPoolWithQuotaZInitImpl(v30, v28, 0x6D697355u);
  Buffer = v31;
  if ( !v31 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v31, (const void *)a1, v28);
  if ( *(_QWORD *)(v26 + 888) == -1LL )
  {
    if ( !(unsigned int)RIMIDECheckInjectionCapability() )
    {
      v34 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v38 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v32, v33) + 69136);
      v97 = 50;
LABEL_36:
      LOBYTE(v37) = v35;
      LOBYTE(v36) = v34;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v37,
        v38,
        2,
        2,
        v97,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
LABEL_37:
      v39 = 5;
LABEL_106:
      v21 = 0;
LABEL_107:
      UserSetLastError(v39);
      goto LABEL_108;
    }
    Status = RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, v26 + 888);
    if ( Status < 0 )
    {
      v42 = 0;
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
      {
        v40 = *((_DWORD *)WPP_GLOBAL_Control + 11);
        if ( (v40 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
          v42 = 1;
      }
      v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v44 = W32GetUserSessionState(v40, (_DWORD)WPP_GLOBAL_Control, v41);
        LOBYTE(v45) = v43;
        LOBYTE(v46) = v42;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v46,
          v45,
          *(_QWORD *)(v44 + 69136),
          2,
          2,
          51,
          (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
          Status);
      }
      v39 = 1359;
      goto LABEL_106;
    }
  }
  v47 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v26 + 888), 3u, 1, &Object);
  v51 = v47;
  if ( v47 < 0 )
  {
    v52 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v49 = *((_DWORD *)WPP_GLOBAL_Control + 11);
      if ( (v49 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v52 = 1;
    }
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v54 = W32GetUserSessionState(v49, (_DWORD)WPP_GLOBAL_Control, v50);
      LOBYTE(v55) = v53;
      LOBYTE(v56) = v52;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v56,
        v55,
        *(_QWORD *)(v54 + 69136),
        2,
        2,
        52,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        v51);
    }
    v21 = 0;
    UserSetLastError(6);
    v22 = Object;
    goto LABEL_108;
  }
  v22 = Object;
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    v60 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v60 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_105;
    v64 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v48, v50) + 69136);
    v98 = 53;
LABEL_67:
    LOBYTE(v63) = v61;
    LOBYTE(v62) = v60;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v62,
      v63,
      v64,
      2,
      2,
      v98,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
LABEL_105:
    v39 = 87;
    goto LABEL_106;
  }
  if ( (unsigned int)EditionIsRIMInjectionBlocked((__int64)Object + 72) )
  {
    v34 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    v38 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v65, v66) + 69136);
    v97 = 54;
    goto LABEL_36;
  }
  if ( v22[30] )
  {
    v60 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v60 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_105;
    v64 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v65, v66) + 69136);
    v98 = 55;
    goto LABEL_67;
  }
  Status = RIMIDEInjectMouseFromMouseInputStruct((__int64)v22, (__int64)Buffer, a2);
  if ( Status < 0 )
  {
    v68 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v67 = *((_DWORD *)WPP_GLOBAL_Control + 11);
      if ( (v67 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v68 = 1;
    }
    v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v68 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v70 = W32GetUserSessionState(v67, (_DWORD)WPP_GLOBAL_Control, v58);
      LOBYTE(v71) = v69;
      LOBYTE(v72) = v68;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v72,
        v71,
        *(_QWORD *)(v70 + 69136),
        2,
        2,
        56,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        Status);
    }
    v21 = 0;
    v39 = RtlNtStatusToDosError(Status);
    goto LABEL_107;
  }
  v21 = 1;
LABEL_108:
  if ( Buffer )
    GreDeleteFastMutex(Buffer, v57, v58, v59);
  if ( v22 )
    ObfDereferenceObject(v22);
  if ( !v21 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v78 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v83 = W32GetUserSessionState(v81, v80, v82);
      LOBYTE(v84) = v78;
      LOBYTE(v85) = v3;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v85,
        v84,
        *(_QWORD *)(v83 + 69136),
        2,
        2,
        57,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        LastError);
    }
  }
LABEL_120:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v87, v86);
    v94 = W32GetUserSessionState(v92, v91, v93);
    ExReleaseFastResource(*(_QWORD *)(v94 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(v87, v86, v88, v89);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v100,
    v95);
  return v21;
}
