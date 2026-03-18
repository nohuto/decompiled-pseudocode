/*
 * XREFs of NtUserInjectPointerInput @ 0x1401BE260
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
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400ED4D4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x140153980 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserGetLastError @ 0x14015A8E8 (UserGetLastError.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x140195CA0 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1401EA134 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInjectPointerInput(char *a1, const void *a2, unsigned int a3)
{
  char v4; // r15
  char v5; // bl
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  bool v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // r14d
  bool v22; // bl
  bool v23; // si
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  char *v27; // rbx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // r14
  bool v32; // bl
  bool v33; // si
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  int v37; // ecx
  _DWORD *v38; // rbx
  __int64 v39; // rdx
  bool v40; // bl
  bool v41; // si
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  _DWORD *v45; // r8
  __int64 v46; // rcx
  _DWORD *v47; // rax
  _BOOL8 v48; // rdx
  int v50; // r14d
  unsigned __int64 v51; // rbx
  const void *v52; // rsi
  struct tagPOINTER_TYPE_INFO *v53; // rax
  __int64 v54; // rdx
  int v55; // esi
  bool v56; // bl
  bool v57; // si
  int v58; // edx
  int v59; // r8d
  __int64 v60; // r9
  unsigned int v61; // r8d
  struct RawInputManagerDeviceObject *v62; // rcx
  unsigned int v63; // r14d
  bool v64; // bl
  bool v65; // si
  int v66; // edx
  int v67; // r8d
  __int64 v68; // r9
  int v69; // r14d
  int v70; // r13d
  bool v71; // bl
  bool v72; // si
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  ULONG v76; // eax
  bool v77; // r14
  bool v78; // r12
  char LastError; // bl
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  int v83; // r8d
  int v84; // edx
  __int64 v85; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int16 v91; // [rsp+30h] [rbp-98h]
  __int16 v92; // [rsp+30h] [rbp-98h]
  __int16 v93; // [rsp+30h] [rbp-98h]
  char v94; // [rsp+40h] [rbp-88h]
  char v95; // [rsp+40h] [rbp-88h]
  char v96; // [rsp+48h] [rbp-80h]
  struct tagPOINTER_TYPE_INFO *Buffer; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF
  __int64 *v99[9]; // [rsp+80h] [rbp-48h] BYREF
  char v103; // [rsp+E8h] [rbp+20h] BYREF

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
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      2,
      70,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v99, "InjectPointerInput", 0LL);
  v12 = (_QWORD *)W32GetUserSessionState(v11, v10);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            v12,
            1,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v12, 0);
  v14 = v13;
  v12[3] = v13;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v14 )
      goto LABEL_18;
    *(_BYTE *)(v14 + 1708) = 1;
  }
  if ( v14 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v14) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(v12 + 2461), v15);
    DestroyDeferredUnlockObjectAssignmentList(v12 + 2468);
    DestroyDeferredUnlockObjectAssignmentList(v12 + 2466);
  }
LABEL_18:
  v103 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v103);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline();
  Buffer = 0LL;
  Object = 0LL;
  if ( v103 )
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
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 69144),
        2,
        2,
        71,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v21 = 0;
    UserSetLastError(5);
    goto LABEL_195;
  }
  if ( !a3 )
  {
    v22 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v16) + 69144);
    v91 = 72;
    goto LABEL_36;
  }
  v28 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v31 = v28;
  if ( v28 < 0 )
  {
    v32 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v30 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v30 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v32 = 1;
    }
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState(v30, WPP_GLOBAL_Control);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v32;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 69144),
        2,
        2,
        73,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v31);
    }
    v37 = 6;
LABEL_49:
    v21 = 0;
    UserSetLastError(v37);
    goto LABEL_38;
  }
  v38 = Object;
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    v22 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v29) + 69144);
    v91 = 74;
    goto LABEL_36;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)Object + 72, v29) )
  {
    v40 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
      LOBYTE(v43) = v41;
      LOBYTE(v44) = v40;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v44,
        v43,
        *(_QWORD *)(v42 + 69144),
        2,
        2,
        75,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v37 = 5;
    goto LABEL_49;
  }
  if ( (v38[64] & 0x80u) == 0 )
  {
    v22 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v39) + 69144);
    v91 = 76;
    goto LABEL_36;
  }
  v45 = (_DWORD *)*((_QWORD *)v38 + 66);
  v46 = (unsigned int)-__CFSHR__(v45[92], 4);
  v47 = v45 + 91;
  v48 = __CFSHR__(v45[92], 4) && *v47 == 1;
  if ( !v48 && (!__CFSHR__(v45[92], 4) || *v47 != 2) )
  {
    v22 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v48) + 69144);
    v91 = 77;
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
      v91,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
LABEL_37:
    v21 = 0;
    UserSetLastError(87);
    goto LABEL_38;
  }
  v50 = v45[6];
  v51 = 152LL * a3;
  if ( v51 )
  {
    v52 = a2;
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v46 = (__int64)a2 + v51;
  }
  else
  {
    v52 = a2;
  }
  v53 = (struct tagPOINTER_TYPE_INFO *)Win32AllocPoolWithQuotaZInitImpl(v46, v51, 0x74697355u);
  Buffer = v53;
  if ( !v53 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v53, v52, v51);
  v27 = (char *)Buffer;
  v55 = *(_DWORD *)Buffer;
  if ( *(_DWORD *)Buffer != 3 )
  {
    if ( v55 == 2 )
    {
      if ( v50 != 3 )
      {
        v56 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v56 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_37;
        v60 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v54) + 69144);
        v94 = v50;
        v92 = 81;
        goto LABEL_113;
      }
      v62 = (struct RawInputManagerDeviceObject *)Object;
      v63 = *(_DWORD *)(*((_QWORD *)Object + 66) + 776LL);
      v61 = a3;
      if ( a3 <= v63 )
        goto LABEL_160;
      v64 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v64 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v68 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v54) + 69144);
      v96 = v63;
      v95 = a3;
      v93 = 82;
    }
    else
    {
      if ( v55 != 5 )
      {
        v56 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v77 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v56 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_37;
        v60 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v54) + 69144);
        v94 = v55;
        v92 = 85;
        LOBYTE(v59) = v77;
        goto LABEL_114;
      }
      if ( v50 != 7 )
      {
        v56 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v56 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_37;
        v60 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v54) + 69144);
        v94 = v50;
        v92 = 83;
LABEL_113:
        LOBYTE(v59) = v57;
LABEL_114:
        LOBYTE(v58) = v56;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v58,
          v59,
          v60,
          2,
          2,
          v92,
          (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
          v94);
        goto LABEL_37;
      }
      v62 = (struct RawInputManagerDeviceObject *)Object;
      v69 = *(_DWORD *)(*((_QWORD *)Object + 66) + 776LL);
      v61 = a3;
      if ( a3 <= v69 - 1 )
        goto LABEL_160;
      v64 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v64 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v68 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v54) + 69144);
      v96 = v69;
      v95 = a3;
      v93 = 84;
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
      v93,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      v95,
      v96);
    goto LABEL_37;
  }
  if ( v50 != 5 )
  {
    v56 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v56 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    v60 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v54) + 69144);
    v94 = v50;
    v92 = 79;
    goto LABEL_113;
  }
  v61 = a3;
  if ( a3 != 1 )
  {
    v56 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v56 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    v60 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v54) + 69144);
    v94 = a3;
    v92 = 80;
    goto LABEL_113;
  }
  v62 = (struct RawInputManagerDeviceObject *)Object;
LABEL_160:
  v70 = RIMIDEInjectHIDReportFromPointerInfo(v62, Buffer, v61);
  if ( v70 >= 0 )
  {
    v21 = 1;
    goto LABEL_183;
  }
  v71 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v72 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v71 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v73 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
    LOBYTE(v74) = v72;
    LOBYTE(v75) = v71;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v75,
      v74,
      *(_QWORD *)(v73 + 69144),
      2,
      2,
      86,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      v70);
  }
  v21 = 0;
  v76 = RtlNtStatusToDosError(v70);
  UserSetLastError(v76);
LABEL_38:
  v27 = (char *)Buffer;
LABEL_183:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v27 )
    GreDeleteFastMutex(v27);
  if ( !v21 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v78 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v82 = W32GetUserSessionState(v81, v80);
      LOBYTE(v83) = v78;
      LOBYTE(v84) = v4;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v84,
        v83,
        *(_QWORD *)(v82 + 69144),
        2,
        2,
        87,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        LastError);
    }
  }
LABEL_195:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v89 = W32GetUserSessionState(v88, v87);
    ExReleaseFastResource(*(_QWORD *)(v89 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v85);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v99);
  return v21;
}
