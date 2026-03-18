/*
 * XREFs of NtUserInjectKeyboardInput @ 0x140171970
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
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14013B930 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x140153980 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserGetLastError @ 0x14015A8E8 (UserGetLastError.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x140180A6C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x140195CA0 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     RIMIDECheckInjectionCapability @ 0x1401E8610 (RIMIDECheckInjectionCapability.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1401E9474 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInjectKeyboardInput(char *Src, __int64 a2)
{
  char v2; // r15
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
  __int64 v17; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // r15
  bool v21; // bl
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  int v25; // r14d
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r14
  char *v28; // rax
  __int64 v29; // rdx
  bool v30; // r14
  bool v31; // r15
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  ULONG v35; // ecx
  int v36; // eax
  char v37; // r13
  bool v38; // r14
  bool v39; // r15
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  char v46; // r13
  bool v47; // bl
  bool v48; // r14
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  bool v52; // r14
  bool v53; // r15
  int v54; // edx
  int v55; // r8d
  __int64 v56; // r9
  __int64 v57; // rdx
  int v58; // r13d
  bool v59; // r14
  bool v60; // r15
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  bool v64; // r14
  bool v65; // r15
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  bool v69; // r15
  char LastError; // bl
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  __int64 v76; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int16 v82; // [rsp+30h] [rbp-88h]
  __int16 v83; // [rsp+30h] [rbp-88h]
  char *Buffer; // [rsp+60h] [rbp-58h]
  __int64 *v85[10]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v86; // [rsp+C8h] [rbp+10h]
  char v87; // [rsp+D0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+20h] BYREF

  v86 = a2;
  v2 = a2;
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
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      2,
      58,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      (char)Src,
      v2);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v85, "InjectKeyboardInput", 0LL);
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
    DestroySharedUserCritDeferredUnlockList((__int64)(v12 + 2461), v15);
    DestroyDeferredUnlockObjectAssignmentList(v12 + 2468);
    DestroyDeferredUnlockObjectAssignmentList(v12 + 2466);
  }
LABEL_18:
  v87 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v87);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  Buffer = 0LL;
  v16 = 0LL;
  Object = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
  v20 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v19 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v20 = v19 & CurrentProcessWin32Process;
  }
  if ( v87 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v19);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(v22 + 69144),
        2,
        2,
        59,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v25 = 0;
    UserSetLastError(5);
    goto LABEL_133;
  }
  if ( v86 - 1 > 0xF )
  {
    v64 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v64 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v66 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v19);
      LOBYTE(v67) = v65;
      LOBYTE(v68) = v64;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v68,
        v67,
        *(_QWORD *)(v66 + 69144),
        2,
        2,
        60,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v86);
    }
    v25 = 0;
    UserSetLastError(87);
    goto LABEL_121;
  }
  v26 = 3LL * v86;
  v27 = 24LL * v86;
  if ( v27 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    v26 = (unsigned __int64)&Src[v27];
    if ( (unsigned __int64)&Src[v27] > MmUserProbeAddress || v26 < (unsigned __int64)Src )
      v16 = Object;
  }
  v28 = (char *)Win32AllocPoolWithQuotaZInitImpl(v26, v27, 0x6B697355u);
  Buffer = v28;
  if ( !v28 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v28, Src, v27);
  if ( *(_QWORD *)(v20 + 896) == -1LL )
  {
    if ( !(unsigned int)RIMIDECheckInjectionCapability() )
    {
      v30 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v34 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v29) + 69144);
      v82 = 62;
LABEL_48:
      LOBYTE(v33) = v31;
      LOBYTE(v32) = v30;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v33,
        v34,
        2,
        2,
        v82,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
LABEL_49:
      v35 = 5;
LABEL_50:
      v25 = 0;
      goto LABEL_51;
    }
    v36 = RIMIDECreatePseudoMouseOrKeyboardDevice(1LL, v20 + 896);
    v37 = v36;
    if ( v36 < 0 )
    {
      v38 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v40 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
        LOBYTE(v41) = v39;
        LOBYTE(v42) = v38;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v42,
          v41,
          *(_QWORD *)(v40 + 69144),
          2,
          2,
          63,
          (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
          v37);
      }
      v35 = 1359;
      goto LABEL_50;
    }
  }
  v43 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v20 + 896), 3u, 1, &Object);
  v46 = v43;
  if ( v43 < 0 )
  {
    v47 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v45 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v45 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v47 = 1;
    }
    v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v49 = W32GetUserSessionState(v45, WPP_GLOBAL_Control);
      LOBYTE(v50) = v48;
      LOBYTE(v51) = v47;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v51,
        v50,
        *(_QWORD *)(v49 + 69144),
        2,
        2,
        64,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v46);
    }
    v25 = 0;
    UserSetLastError(6);
    v16 = Object;
    goto LABEL_121;
  }
  v16 = Object;
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    v52 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v52 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_82;
    v56 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v44) + 69144);
    v83 = 65;
LABEL_81:
    LOBYTE(v55) = v53;
    LOBYTE(v54) = v52;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v54,
      v55,
      v56,
      2,
      2,
      v83,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
LABEL_82:
    v35 = 87;
    goto LABEL_50;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((char *)Object + 72) )
  {
    v30 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_49;
    v34 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v57) + 69144);
    v82 = 66;
    goto LABEL_48;
  }
  if ( v16[30] != 1 )
  {
    v52 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v52 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_82;
    v56 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v57) + 69144);
    v83 = 67;
    goto LABEL_81;
  }
  v58 = RIMIDEInjectKeyboardFromKeybdInputStruct(v16, Buffer, v86);
  if ( v58 >= 0 )
  {
    v25 = 1;
    goto LABEL_121;
  }
  v59 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v59 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v61 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
    LOBYTE(v62) = v60;
    LOBYTE(v63) = v59;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v63,
      v62,
      *(_QWORD *)(v61 + 69144),
      2,
      2,
      68,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      v58);
  }
  v25 = 0;
  v35 = RtlNtStatusToDosError(v58);
LABEL_51:
  UserSetLastError(v35);
LABEL_121:
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( Buffer )
    GreDeleteFastMutex(Buffer);
  if ( !v25 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v73 = W32GetUserSessionState(v72, v71);
      LOBYTE(v74) = v69;
      LOBYTE(v75) = v4;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v75,
        v74,
        *(_QWORD *)(v73 + 69144),
        2,
        2,
        69,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        LastError);
    }
  }
LABEL_133:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v80 = W32GetUserSessionState(v79, v78);
    ExReleaseFastResource(*(_QWORD *)(v80 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v76);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v85);
  return v25;
}
