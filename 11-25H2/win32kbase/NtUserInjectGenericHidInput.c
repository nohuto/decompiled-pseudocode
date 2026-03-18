/*
 * XREFs of NtUserInjectGenericHidInput @ 0x14011EB50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400ED4D4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1401252D8 (RIMIDE_InjectGenericHidInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x140153980 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserGetLastError @ 0x14015A8E8 (UserGetLastError.c)
 *     InputExtensibilityCalloutGuard @ 0x14018A3A0 (InputExtensibilityCalloutGuard.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x140195CA0 (ApiSetEditionIsRIMInjectionBlocked.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserInjectGenericHidInput(char *a1, __int64 a2, unsigned int a3)
{
  char v6; // si
  bool v7; // bl
  bool v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  bool v13; // bl
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  unsigned int v17; // edi
  bool v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rbx
  char v27; // r14
  bool v28; // di
  bool v29; // bp
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  ULONG v33; // ecx
  bool v34; // di
  bool v35; // bp
  __int64 v36; // rax
  int v37; // edx
  int v38; // r8d
  __int64 v39; // rdx
  bool v40; // di
  bool v41; // bp
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  int v45; // r15d
  bool v46; // di
  bool v47; // r14
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  __int64 v51; // rcx
  int v52; // r14d
  bool v53; // di
  bool v54; // bp
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  bool v58; // bp
  char LastError; // bl
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int16 v70; // [rsp+30h] [rbp-68h]
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  __int64 *v72; // [rsp+68h] [rbp-30h] BYREF
  char v73; // [rsp+B8h] [rbp+20h] BYREF

  v6 = 1;
  v7 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      2,
      14,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      (char)a1,
      a2,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v72, "InjectGenericHidInput", 0LL);
  v73 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v73);
  InputExtensibilityCalloutGuard();
  Object = 0LL;
  if ( v73 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v6 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(v14 + 69144),
        2,
        2,
        15,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v17 = 0;
    UserSetLastError(5);
    goto LABEL_111;
  }
  if ( !a3 )
  {
    v18 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 69144),
        2,
        2,
        16,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v17 = 0;
    UserSetLastError(87);
LABEL_104:
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v6 = 0;
    }
    v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v62 = W32GetUserSessionState(v61, v60);
      LOBYTE(v63) = v58;
      LOBYTE(v64) = v6;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v64,
        v63,
        *(_QWORD *)(v62 + 69144),
        2,
        2,
        24,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        LastError);
    }
    goto LABEL_111;
  }
  v23 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v26 = Object;
  v27 = v23;
  if ( v23 < 0 )
  {
    v28 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v25 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v25 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v28 = 1;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(v25, WPP_GLOBAL_Control);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v28;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(v30 + 69144),
        2,
        2,
        17,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v27);
    }
    v33 = 6;
    goto LABEL_38;
  }
  if ( (*((_DWORD *)Object + 60) & 0x2000) == 0 )
  {
    v34 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v24);
    v70 = 18;
LABEL_49:
    LOBYTE(v38) = v35;
    LOBYTE(v37) = v34;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v38,
      *(_QWORD *)(v36 + 69144),
      2,
      2,
      v70,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
LABEL_50:
    v33 = 87;
LABEL_38:
    v17 = 0;
LABEL_39:
    UserSetLastError(v33);
    goto LABEL_101;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((char *)Object + 72) )
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
        19,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v33 = 5;
    goto LABEL_38;
  }
  if ( v26[30] != 2 )
  {
    v34 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
    v70 = 20;
    goto LABEL_49;
  }
  if ( (v26[64] & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)v26 + 66) + 364LL) != 3 )
  {
    v34 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
    v70 = 21;
    goto LABEL_49;
  }
  v45 = *(unsigned __int16 *)(*((_QWORD *)v26 + 64) + 44LL);
  if ( v45 != a3 )
  {
    v46 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v48 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
      LOBYTE(v49) = v47;
      LOBYTE(v50) = v46;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v50,
        v49,
        *(_QWORD *)(v48 + 69144),
        2,
        2,
        22,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        a3,
        v45);
    }
    goto LABEL_50;
  }
  v52 = RIMIDE_InjectGenericHidInput(v26, 1LL, a2, a3);
  if ( v52 < 0 )
  {
    v53 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v51 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v51 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v53 = 1;
    }
    v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v55 = W32GetUserSessionState(v51, WPP_GLOBAL_Control);
      LOBYTE(v56) = v54;
      LOBYTE(v57) = v53;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v57,
        v56,
        *(_QWORD *)(v55 + 69144),
        2,
        2,
        23,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v52);
    }
    v17 = 0;
    v33 = RtlNtStatusToDosError(v52);
    goto LABEL_39;
  }
  v17 = 1;
LABEL_101:
  if ( v26 )
    ObfDereferenceObject(v26);
  if ( !v17 )
    goto LABEL_104;
LABEL_111:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v68 = W32GetUserSessionState(v67, v66);
    ExReleaseFastResource(*(_QWORD *)(v68 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v72);
  return v17;
}
