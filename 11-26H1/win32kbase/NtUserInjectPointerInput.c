/*
 * XREFs of NtUserInjectPointerInput @ 0x1401E6D30
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
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserGetLastError @ 0x14019A2A8 (UserGetLastError.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1401BB6B8 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInjectPointerInput(char *a1, volatile void *a2, unsigned int a3)
{
  char v3; // r12
  char v4; // bl
  char v5; // r14
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
  bool v19; // bl
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  int v23; // r15d
  char v24; // bl
  bool v25; // r14
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r9
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  char v32; // bl
  bool v33; // r14
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  ULONG v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  _DWORD *v41; // r14
  __int64 v42; // rdx
  int v43; // r8d
  char v44; // bl
  bool v45; // r14
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  _DWORD *v49; // r14
  _DWORD *v50; // rcx
  int v51; // r14d
  __int64 CurrentProcessWow64Process; // rax
  int v53; // ecx
  void *v54; // rax
  int v55; // r8d
  int v56; // eax
  char v57; // bl
  bool v58; // r15
  int v59; // edx
  int v60; // r8d
  __int64 v61; // r9
  bool v62; // r14
  struct RawInputManagerDeviceObject *v63; // rcx
  char v64; // bl
  bool v65; // r14
  int v66; // edx
  int v67; // r8d
  __int64 v68; // r9
  int v69; // ecx
  char v70; // bl
  bool v71; // r14
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  char v75; // r14
  bool v76; // r15
  int v77; // ebx
  __int64 v78; // r9
  int v79; // r8d
  int v80; // edx
  bool v81; // r13
  char LastError; // bl
  int v83; // edx
  int v84; // ecx
  int v85; // r8d
  __int64 v86; // rax
  int v87; // r8d
  int v88; // edx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 CurrentThreadWin32Thread; // rbx
  int v94; // edx
  int v95; // ecx
  int v96; // r8d
  __int64 v97; // rax
  __int64 v98; // rdx
  __int16 v100; // [rsp+30h] [rbp-98h]
  __int16 v101; // [rsp+30h] [rbp-98h]
  __int16 v102; // [rsp+30h] [rbp-98h]
  char v103; // [rsp+40h] [rbp-88h]
  char v104; // [rsp+40h] [rbp-88h]
  char v105; // [rsp+48h] [rbp-80h]
  PVOID Object; // [rsp+70h] [rbp-58h] BYREF
  PVOID Buffer; // [rsp+78h] [rbp-50h]
  void **v108[9]; // [rsp+80h] [rbp-48h] BYREF
  SIZE_T Length; // [rsp+E8h] [rbp+20h] BYREF

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
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
    WPP_RECORDER_AND_TRACE_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v5,
      *(_QWORD *)(UserSessionState + 69136),
      4u,
      2u,
      0x46u,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
      a1,
      a2,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v108, "InjectPointerInput", 0LL);
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
  LOBYTE(Length) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&Length);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  Buffer = 0LL;
  Object = 0LL;
  if ( (_BYTE)Length )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v17, v18);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 69136),
        2,
        2,
        71,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    }
    v23 = 0;
    UserSetLastError(5);
    goto LABEL_173;
  }
  if ( !a3 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_160;
    v28 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v17, v18) + 69136);
    v100 = 72;
    goto LABEL_159;
  }
  LODWORD(Length) = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( (Length & 0x80000000) != 0LL )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v30 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v30 & 2) == 0)
      || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v32 = 0;
    }
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState(v30, (_DWORD)WPP_GLOBAL_Control, v31);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v32;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 69136),
        2,
        2,
        73,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        Length);
    }
    v37 = 6;
LABEL_45:
    v23 = 0;
LABEL_46:
    UserSetLastError(v37);
    goto LABEL_161;
  }
  v41 = Object;
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_160;
    v28 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v29, v31) + 69136);
    v100 = 74;
    goto LABEL_159;
  }
  if ( (unsigned int)EditionIsRIMInjectionBlocked((__int64)Object + 72) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v44 = 0;
    }
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v46 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v42, v43);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = v44;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v47,
        *(_QWORD *)(v46 + 69136),
        2,
        2,
        75,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    }
    v37 = 5;
    goto LABEL_45;
  }
  if ( (v41[64] & 0x80u) == 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_160;
    v28 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v42, v43) + 69136);
    v100 = 76;
    goto LABEL_159;
  }
  v49 = (_DWORD *)*((_QWORD *)v41 + 66);
  v50 = v49 + 91;
  if ( !__CFSHR__(v49[92], 4) || *v50 != 1 && (!__CFSHR__(v49[92], 4) || *v50 != 2) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_160;
    v28 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v42, v43) + 69136);
    v100 = 77;
LABEL_159:
    LOBYTE(v27) = v25;
    LOBYTE(v26) = v24;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v27,
      v28,
      2,
      2,
      v100,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    goto LABEL_160;
  }
  v51 = v49[6];
  Length = 152LL * a3;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v50, v42);
  ProbeForRead(a2, Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  v54 = (void *)Win32AllocPoolWithQuotaZInitImpl(v53, Length, 0x74697355u);
  Buffer = v54;
  if ( !v54 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v54, (const void *)a2, Length);
  v56 = *(_DWORD *)Buffer;
  if ( *(_DWORD *)Buffer != 3 )
  {
    if ( v56 == 2 )
    {
      if ( v51 != 3 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v57 = 0;
        }
        v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v57 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_160;
        v61 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)Buffer, v55) + 69136);
        v103 = v51;
        v101 = 81;
        goto LABEL_88;
      }
      v63 = (struct RawInputManagerDeviceObject *)Object;
      LODWORD(Length) = *(_DWORD *)(*((_QWORD *)Object + 66) + 776LL);
      if ( a3 <= (unsigned int)Length )
        goto LABEL_135;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v64 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v64 = 0;
      }
      v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v64 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_160;
      v68 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)Buffer, v55) + 69136);
      v105 = Length;
      v104 = a3;
      v102 = 82;
    }
    else
    {
      if ( v56 != 5 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v75 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v75 = 0;
        }
        v76 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v75 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v77 = *(_DWORD *)Buffer;
          v78 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)Buffer, v55) + 69136);
          LOBYTE(v79) = v76;
          LOBYTE(v80) = v75;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v80,
            v79,
            v78,
            2,
            2,
            85,
            (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
            v77);
        }
        goto LABEL_160;
      }
      if ( v51 != 7 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v57 = 0;
        }
        v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v57 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_160;
        v61 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)Buffer, v55) + 69136);
        v103 = v51;
        v101 = 83;
LABEL_88:
        LOBYTE(v60) = v58;
LABEL_89:
        LOBYTE(v59) = v57;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v59,
          v60,
          v61,
          2,
          2,
          v101,
          (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
          v103);
        goto LABEL_160;
      }
      v63 = (struct RawInputManagerDeviceObject *)Object;
      LODWORD(Length) = *(_DWORD *)(*((_QWORD *)Object + 66) + 776LL);
      if ( a3 <= (int)Length - 1 )
        goto LABEL_135;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v64 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v64 = 0;
      }
      v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v64 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_160;
      v68 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)Buffer, v55) + 69136);
      v105 = Length;
      v104 = a3;
      v102 = 84;
    }
    LOBYTE(v67) = v65;
    LOBYTE(v66) = v64;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v66,
      v67,
      v68,
      2,
      2,
      v102,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
      v104,
      v105);
LABEL_160:
    v23 = 0;
    UserSetLastError(87);
    goto LABEL_161;
  }
  if ( v51 != 5 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v57 = 0;
    }
    v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v57 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_160;
    v61 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)Buffer, v55) + 69136);
    v103 = v51;
    v101 = 79;
    goto LABEL_88;
  }
  if ( a3 != 1 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v57 = 0;
    }
    v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v57 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_160;
    v61 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)Buffer, v55) + 69136);
    v103 = a3;
    v101 = 80;
    LOBYTE(v60) = v62;
    goto LABEL_89;
  }
  v63 = (struct RawInputManagerDeviceObject *)Object;
LABEL_135:
  LODWORD(Length) = RIMIDEInjectHIDReportFromPointerInfo(v63, (struct tagPOINTER_TYPE_INFO *)Buffer, a3);
  if ( (Length & 0x80000000) != 0LL )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v69 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v69 & 2) == 0)
      || (v70 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v70 = 0;
    }
    v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v70 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v72 = W32GetUserSessionState(v69, (_DWORD)WPP_GLOBAL_Control, v39);
      LOBYTE(v73) = v71;
      LOBYTE(v74) = v70;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v74,
        v73,
        *(_QWORD *)(v72 + 69136),
        2,
        2,
        86,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        Length);
    }
    v23 = 0;
    v37 = RtlNtStatusToDosError(Length);
    goto LABEL_46;
  }
  v23 = 1;
LABEL_161:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer, v38, v39, v40);
  if ( !v23 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v81 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v86 = W32GetUserSessionState(v84, v83, v85);
      LOBYTE(v87) = v81;
      LOBYTE(v88) = v3;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v88,
        v87,
        *(_QWORD *)(v86 + 69136),
        2,
        2,
        87,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        LastError);
    }
  }
LABEL_173:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v90, v89);
    v97 = W32GetUserSessionState(v95, v94, v96);
    ExReleaseFastResource(*(_QWORD *)(v97 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(v90, v89, v91, v92);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v108,
    v98);
  return v23;
}
