/*
 * XREFs of NtUserInjectMouseInput @ 0x140172360
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
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x140180DA4 (RIMIDEInjectMouseFromMouseInputStruct.c)
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

__int64 __fastcall NtUserInjectMouseInput(char *Src, __int64 a2)
{
  char v3; // r14
  char v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // esi
  _DWORD *v22; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // rdx
  bool v30; // bl
  bool v31; // si
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  ULONG v35; // ecx
  int v36; // eax
  char v37; // r13
  bool v38; // bl
  bool v39; // si
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  int v43; // eax
  __int64 v44; // rdx
  char v45; // r15
  bool v46; // bl
  bool v47; // si
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  bool v51; // bl
  bool v52; // si
  int v53; // edx
  int v54; // r8d
  __int64 v55; // r9
  __int64 v56; // rdx
  int v57; // r13d
  bool v58; // bl
  bool v59; // si
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  bool v63; // bl
  bool v64; // si
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  bool v68; // r15
  char LastError; // bl
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  __int64 v75; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int16 v81; // [rsp+30h] [rbp-88h]
  __int16 v82; // [rsp+30h] [rbp-88h]
  char *Buffer; // [rsp+60h] [rbp-58h]
  __int64 *v84[10]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v85; // [rsp+C8h] [rbp+10h]
  char v86; // [rsp+D0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+20h] BYREF

  v85 = a2;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
    UserSessionState = W32GetUserSessionState(Src, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      2,
      46,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      (char)Src,
      v85);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v84, "InjectMouseInput", 0LL);
  v11 = (_QWORD *)W32GetUserSessionState(v10, v9);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            v11,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v11, 0LL);
  v13 = v12;
  v11[3] = v12;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v13 )
      goto LABEL_18;
    *(_BYTE *)(v13 + 1708) = 1;
  }
  if ( v13 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v13) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(v11 + 2461), v14);
    DestroyDeferredUnlockObjectAssignmentList(v11 + 2468);
    DestroyDeferredUnlockObjectAssignmentList(v11 + 2466);
  }
LABEL_18:
  v86 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v86);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  if ( v86 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 69144),
        2,
        2,
        47,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v21 = 0;
    UserSetLastError(5);
    goto LABEL_133;
  }
  Buffer = 0LL;
  v22 = 0LL;
  Object = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
  v25 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v24 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v25 = v24 & CurrentProcessWin32Process;
  }
  v26 = v85;
  if ( v85 - 1 > 0xF )
  {
    v63 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v64 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v63 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v65 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v24);
      LOBYTE(v66) = v64;
      LOBYTE(v67) = v63;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v67,
        v66,
        *(_QWORD *)(v65 + 69144),
        2,
        2,
        48,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v85);
    }
    v21 = 0;
    UserSetLastError(87);
    goto LABEL_121;
  }
  v27 = 32LL * v85;
  if ( v27 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    v26 = (unsigned __int64)&Src[v27];
    if ( (unsigned __int64)&Src[v27] > MmUserProbeAddress || v26 < (unsigned __int64)Src )
      v22 = Object;
  }
  v28 = (char *)Win32AllocPoolWithQuotaZInitImpl(v26, v27, 0x6D697355u);
  Buffer = v28;
  if ( !v28 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v28, Src, v27);
  if ( *(_QWORD *)(v25 + 888) == -1LL )
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
      v81 = 50;
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
        v81,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
LABEL_49:
      v35 = 5;
LABEL_50:
      v21 = 0;
      goto LABEL_51;
    }
    v36 = RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, v25 + 888);
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
          51,
          (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
          v37);
      }
      v35 = 1359;
      goto LABEL_50;
    }
  }
  v43 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v25 + 888), 3u, 1, &Object);
  v45 = v43;
  if ( v43 < 0 )
  {
    v46 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v48 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
      LOBYTE(v49) = v47;
      LOBYTE(v50) = v46;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v50,
        v49,
        *(_QWORD *)(v48 + 69144),
        2,
        2,
        52,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v45);
    }
    v21 = 0;
    UserSetLastError(6);
    v22 = Object;
    goto LABEL_121;
  }
  v22 = Object;
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    v51 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v51 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_82;
    v55 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v44) + 69144);
    v82 = 53;
LABEL_81:
    LOBYTE(v54) = v52;
    LOBYTE(v53) = v51;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v53,
      v54,
      v55,
      2,
      2,
      v82,
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
    v34 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v56) + 69144);
    v81 = 54;
    goto LABEL_48;
  }
  if ( v22[30] )
  {
    v51 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v51 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_82;
    v55 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v56) + 69144);
    v82 = 55;
    goto LABEL_81;
  }
  v57 = RIMIDEInjectMouseFromMouseInputStruct(v22, Buffer, v85);
  if ( v57 >= 0 )
  {
    v21 = 1;
    goto LABEL_121;
  }
  v58 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v59 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v58 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v60 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
    LOBYTE(v61) = v59;
    LOBYTE(v62) = v58;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v62,
      v61,
      *(_QWORD *)(v60 + 69144),
      2,
      2,
      56,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      v57);
  }
  v21 = 0;
  v35 = RtlNtStatusToDosError(v57);
LABEL_51:
  UserSetLastError(v35);
LABEL_121:
  if ( Buffer )
    GreDeleteFastMutex(Buffer);
  if ( v22 )
    ObfDereferenceObject(v22);
  if ( !v21 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v68 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v72 = W32GetUserSessionState(v71, v70);
      LOBYTE(v73) = v68;
      LOBYTE(v74) = v3;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v74,
        v73,
        *(_QWORD *)(v72 + 69144),
        2,
        2,
        57,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        LastError);
    }
  }
LABEL_133:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v79 = W32GetUserSessionState(v78, v77);
    ExReleaseFastResource(*(_QWORD *)(v79 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v75);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v84);
  return v21;
}
