/*
 * XREFs of NtUserInjectGenericHidInput @ 0x14005F280
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14005FB50 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     RIMIDE_InjectGenericHidInput @ 0x14005FCEC (RIMIDE_InjectGenericHidInput.c)
 *     EditionIsRIMInjectionBlocked @ 0x14005FF20 (EditionIsRIMInjectionBlocked.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x14006E614 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserGetLastError @ 0x14019A2A8 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectGenericHidInput(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // si
  bool v7; // bl
  bool v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rcx
  int v13; // edx
  int v14; // r8d
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  _QWORD *v19; // rbx
  char v20; // r14
  int v21; // edx
  int v22; // r8d
  int v23; // r15d
  CTouchProcessor *v24; // rcx
  int v25; // r8d
  int v26; // r14d
  unsigned int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  bool v31; // bl
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  bool v35; // bl
  bool v36; // di
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  bool v40; // di
  bool v41; // bp
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  bool v52; // di
  bool v53; // bp
  __int64 v54; // rax
  int v55; // edx
  int v56; // r8d
  bool v57; // di
  bool v58; // bp
  bool v59; // di
  bool v60; // r14
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  bool v64; // di
  bool v65; // bp
  bool v66; // bp
  char LastError; // bl
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  __int64 v71; // rax
  int v72; // r8d
  int v73; // edx
  __int64 CurrentThreadWin32Thread; // rbx
  int v75; // edx
  int v76; // ecx
  int v77; // r8d
  __int64 v78; // rax
  __int16 v79; // [rsp+30h] [rbp-68h]
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  _BYTE v81[8]; // [rsp+68h] [rbp-30h] BYREF
  char v82; // [rsp+B8h] [rbp+20h] BYREF

  v6 = 1;
  v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2, a3);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      2,
      14,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
      a1,
      a2,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v81,
    "InjectGenericHidInput",
    0LL);
  v82 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v82);
  Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline(v12);
  Object = 0LL;
  if ( !v82 )
  {
    if ( !a3 )
    {
      v35 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v14);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(v37 + 69136),
          2,
          2,
          16,
          (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
      }
      v27 = 0;
      UserSetLastError(87LL);
      goto LABEL_111;
    }
    v15 = RawInputManagerDeviceObjectResolveHandle(a1, 3LL, 1LL, &Object);
    v19 = Object;
    v20 = v15;
    if ( v15 < 0 )
    {
      v40 = 0;
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
      {
        v17 = *((_DWORD *)WPP_GLOBAL_Control + 11);
        if ( (v17 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
          v40 = 1;
      }
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v42 = W32GetUserSessionState(v17, (_DWORD)WPP_GLOBAL_Control, v18);
        LOBYTE(v43) = v41;
        LOBYTE(v44) = v40;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v44,
          v43,
          *(_QWORD *)(v42 + 69136),
          2,
          2,
          17,
          (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
          v20);
      }
      v45 = 6LL;
      goto LABEL_56;
    }
    if ( (*((_DWORD *)Object + 60) & 0x2000) != 0 )
    {
      if ( (unsigned int)EditionIsRIMInjectionBlocked((char *)Object + 72) )
      {
        v57 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v46 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
          LOBYTE(v47) = v58;
          LOBYTE(v48) = v57;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v48,
            v47,
            *(_QWORD *)(v46 + 69136),
            2,
            2,
            19,
            (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
        }
        v45 = 5LL;
        goto LABEL_56;
      }
      if ( *((_DWORD *)v19 + 30) == 2 )
      {
        if ( (*((_DWORD *)v19 + 64) & 0x80u) == 0 || *(_DWORD *)(v19[66] + 364LL) == 3 )
        {
          v23 = *(unsigned __int16 *)(v19[64] + 44LL);
          if ( v23 == a3 )
          {
            v26 = RIMIDE_InjectGenericHidInput(v19, 1LL, a2, a3);
            if ( v26 >= 0 )
            {
              v27 = 1;
              goto LABEL_16;
            }
            v64 = 0;
            if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
            {
              LODWORD(v24) = *((_DWORD *)WPP_GLOBAL_Control + 11);
              if ( ((unsigned __int8)v24 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
                v64 = 1;
            }
            v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v64 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v49 = W32GetUserSessionState((_DWORD)v24, (_DWORD)WPP_GLOBAL_Control, v25);
              LOBYTE(v50) = v65;
              LOBYTE(v51) = v64;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v51,
                v50,
                *(_QWORD *)(v49 + 69136),
                2,
                2,
                23,
                (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
                v26);
            }
            v27 = 0;
            v45 = RtlNtStatusToDosError(v26);
LABEL_59:
            UserSetLastError(v45);
LABEL_16:
            if ( v19 )
              ObfDereferenceObject(v19);
            if ( v27 )
              goto LABEL_19;
LABEL_111:
            v24 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
            {
              v6 = 0;
            }
            v66 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LastError = UserGetLastError();
              v71 = W32GetUserSessionState(v69, v68, v70);
              LOBYTE(v72) = v66;
              LOBYTE(v73) = v6;
              WPP_RECORDER_AND_TRACE_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v73,
                v72,
                *(_QWORD *)(v71 + 69136),
                2,
                2,
                24,
                (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
                LastError);
            }
            goto LABEL_19;
          }
          v59 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v59 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v61 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
            LOBYTE(v62) = v60;
            LOBYTE(v63) = v59;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v63,
              v62,
              *(_QWORD *)(v61 + 69136),
              2,
              2,
              22,
              (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
              a3,
              v23);
          }
          goto LABEL_70;
        }
        v52 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v52 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_70:
          v45 = 87LL;
LABEL_56:
          v27 = 0;
          goto LABEL_59;
        }
        v54 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
        v79 = 21;
      }
      else
      {
        v52 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v52 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_70;
        v54 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
        v79 = 20;
      }
    }
    else
    {
      v52 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v52 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_70;
      v54 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v18);
      v79 = 18;
    }
    LOBYTE(v56) = v53;
    LOBYTE(v55) = v52;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v55,
      v56,
      *(_QWORD *)(v54 + 69136),
      2,
      2,
      v79,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    goto LABEL_70;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v6 = 0;
  }
  v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v14);
    LOBYTE(v33) = v31;
    LOBYTE(v34) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v34,
      v33,
      *(_QWORD *)(v32 + 69136),
      2,
      2,
      15,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
  }
  v27 = 0;
  UserSetLastError(5LL);
LABEL_19:
  if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline(v24) )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v29, v28);
    v78 = W32GetUserSessionState(v76, v75, v77);
    ExReleaseFastResource(*(_QWORD *)(v78 + 16), CurrentThreadWin32Thread + 176);
    KeLeaveCriticalRegion();
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v81);
  return v27;
}
