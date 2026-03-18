/*
 * XREFs of NtUserInjectDeviceInput @ 0x14013AF50
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400ED4D4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMIDEInjectDeviceInput @ 0x140124E3C (RIMIDEInjectDeviceInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x140153980 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserGetLastError @ 0x14015A8E8 (UserGetLastError.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x140195CA0 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(char *a1, char *a2, unsigned int a3)
{
  __int64 v3; // r13
  char v4; // si
  char v5; // bl
  bool v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  _DWORD *v16; // rbx
  bool v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // r14d
  bool v22; // r14
  bool v23; // r12
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  ULONG v27; // ecx
  unsigned int v28; // r14d
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v32; // r13
  bool v33; // r14
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rdx
  bool v38; // r14
  bool v39; // r12
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rax
  _BOOL8 v44; // rdx
  int v45; // eax
  __int64 v46; // rcx
  _BYTE **v47; // rax
  PVOID v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // r13d
  bool v52; // r14
  bool v53; // r12
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  bool v57; // r14
  bool v58; // r12
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  bool v62; // r15
  char LastError; // bl
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __int64 v69; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int16 v75; // [rsp+30h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-58h] BYREF
  PVOID Buffer; // [rsp+78h] [rbp-50h]
  __int64 *v78[9]; // [rsp+80h] [rbp-48h] BYREF
  char v82; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a3;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
    v4 = 1;
  }
  else
  {
    v4 = 1;
    v5 = 1;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      2,
      88,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      (char)a1,
      (char)a2,
      v3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v78, "InjectDeviceInput", 0LL);
  v12 = (_QWORD *)W32GetUserSessionState(v11, v10);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            v12,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v12, 0LL);
  v14 = v13;
  v12[3] = v13;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v14 )
      goto LABEL_18;
    *(_BYTE *)(v14 + 1708) = 1;
  }
  if ( v14 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v14) )
  {
    DestroySharedUserCritDeferredUnlockList(v12 + 2461);
    DestroyDeferredUnlockObjectAssignmentList(v12 + 2468);
    DestroyDeferredUnlockObjectAssignmentList(v12 + 2466);
  }
LABEL_18:
  v82 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v82);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  v16 = 0LL;
  Object = 0LL;
  Buffer = 0LL;
  if ( v82 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 69144),
        2,
        2,
        89,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v21 = 0;
    UserSetLastError(5);
    goto LABEL_137;
  }
  if ( !(_DWORD)v3 )
  {
    v22 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v15) + 69144);
    v75 = 90;
LABEL_36:
    LOBYTE(v25) = v23;
    LOBYTE(v24) = v22;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v25,
      v26,
      2,
      2,
      v75,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
LABEL_37:
    v27 = 87;
LABEL_38:
    v21 = 0;
    goto LABEL_39;
  }
  v28 = 12 * v3;
  if ( (unsigned __int64)(12 * v3) > 0xFFFFFFFF )
  {
    v57 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v59 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
      LOBYTE(v60) = v58;
      LOBYTE(v61) = v57;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v61,
        v60,
        *(_QWORD *)(v59 + 69144),
        2,
        2,
        91,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v3);
    }
    v21 = 0;
    UserSetLastError(87);
    goto LABEL_125;
  }
  v29 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v32 = v29;
  if ( v29 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v31 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v31 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        LOBYTE(v16) = 1;
    }
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState(v31, WPP_GLOBAL_Control);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = (_BYTE)v16;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 69144),
        2,
        2,
        92,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v32);
    }
    v21 = 0;
    UserSetLastError(6);
    v16 = Object;
    goto LABEL_125;
  }
  v16 = Object;
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    v22 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v30) + 69144);
    v75 = 93;
    goto LABEL_36;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((char *)Object + 72) )
  {
    v38 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = W32GetUserSessionState(WPP_GLOBAL_Control, v37);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v38;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v42,
        v41,
        *(_QWORD *)(v40 + 69144),
        2,
        2,
        94,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v27 = 5;
    goto LABEL_38;
  }
  if ( v16[30] != 2 )
  {
    v22 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v37) + 69144);
    v75 = 95;
    goto LABEL_36;
  }
  if ( (v16[64] & 0x80u) != 0 )
  {
    v43 = *((_QWORD *)v16 + 66);
    v44 = __CFSHR__(*(_DWORD *)(v43 + 368), 4) && *(_DWORD *)(v43 + 364) == 1;
    if ( v44 || (!__CFSHR__(*(_DWORD *)(v43 + 368), 4) || *(_DWORD *)(v43 + 364) != 2 ? (v45 = 0) : (v45 = 1), v45) )
    {
      v22 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v44) + 69144);
      v75 = 96;
      goto LABEL_36;
    }
  }
  if ( ((unsigned __int8)a2 & (PsGetCurrentProcessWow64Process() == 0 ? 3 : 0)) != 0 )
    ExRaiseDatatypeMisalignment();
  v46 = 3LL * a3;
  v47 = (_BYTE **)MmUserProbeAddress;
  if ( (unsigned __int64)&a2[12 * a3] > MmUserProbeAddress )
    goto LABEL_102;
  v46 = 3LL * a3;
  if ( &a2[12 * a3] < a2 )
  {
    v47 = (_BYTE **)MmUserProbeAddress;
LABEL_102:
    LOBYTE(v46) = **v47;
  }
  Buffer = (PVOID)Win32AllocPoolWithQuotaZInitImpl(v46, v28, 0x74697355u);
  if ( !Buffer )
    ExRaiseStatus(-1073741801);
  v48 = Buffer;
  memmove(Buffer, a2, v28);
  v49 = (__int64)v48;
  v16 = Object;
  v51 = RIMIDEInjectDeviceInput((__int64)Object, v49, a3, 4u);
  if ( v51 >= 0 )
  {
    v21 = 1;
    goto LABEL_125;
  }
  v52 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    v50 = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v50 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
      v52 = 1;
  }
  v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v54 = W32GetUserSessionState(v50, WPP_GLOBAL_Control);
    LOBYTE(v55) = v53;
    LOBYTE(v56) = v52;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v56,
      v55,
      *(_QWORD *)(v54 + 69144),
      2,
      2,
      98,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      v51);
  }
  v21 = 0;
  v27 = RtlNtStatusToDosError(v51);
LABEL_39:
  UserSetLastError(v27);
LABEL_125:
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer);
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( !v21 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v66 = W32GetUserSessionState(v65, v64);
      LOBYTE(v67) = v62;
      LOBYTE(v68) = v4;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v68,
        v67,
        *(_QWORD *)(v66 + 69144),
        2,
        2,
        99,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        LastError);
    }
  }
LABEL_137:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v73 = W32GetUserSessionState(v72, v71);
    ExReleaseFastResource(*(_QWORD *)(v73 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v69);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v78);
  return v21;
}
