/*
 * XREFs of ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800085A0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18007F970 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180007160 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007A00 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x180008424 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x1800449A0 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180044DD0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180057940 (-HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x180062F94 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180063B20 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006E74C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampHostCheckUpdateEnforcementSettings(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _HAM_ENFORCEMENT_SETTINGS_CONTEXT *a2)
{
  __int64 v2; // rax
  __int128 v5; // xmm1
  __int64 *Value; // rax
  __int64 v8; // rdx
  bool v9; // zf
  __int64 *v10; // rax
  __int64 v11; // rdx
  DWORD v12; // r14d
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // r15
  __int64 v17; // r14
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rtt
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  struct _HAM_ACTIVITY *v30; // rdx
  BOOL v31; // edi
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  unsigned __int64 v34; // rax
  unsigned __int64 *v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // r13
  unsigned int v44; // r12d
  DWORD v45; // r15d
  _QWORD *v46; // rdi
  unsigned __int64 v47; // r15
  int v48; // eax
  DWORD v49; // r15d
  _QWORD *v50; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v52; // rsi
  __int64 v53; // r8
  __int64 v54; // rax
  const wchar_t *v55; // rax
  unsigned int v56; // r14d
  __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  struct _HAM_ENFORCEMENT_SETTINGS_CONTEXT *v62; // rcx
  __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  int v65; // eax
  BOOL v66; // r9d
  __int64 v67; // r8
  int v68; // r9d
  struct _HAM_DEPENDENCY_GROUP *v69; // rdi
  unsigned __int64 v70; // rtt
  char v71; // [rsp+40h] [rbp-C0h] BYREF
  int v72; // [rsp+44h] [rbp-BCh]
  struct _HAM_ACTIVITY *v73; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v74; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v75; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v77; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v78; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_ACTIVITY *v79; // [rsp+78h] [rbp-88h] BYREF
  struct _HAM_ENFORCEMENT_SETTINGS_CONTEXT *v80; // [rsp+80h] [rbp-80h]
  unsigned __int64 v81; // [rsp+88h] [rbp-78h]
  __int64 v82; // [rsp+90h] [rbp-70h] BYREF
  _OWORD Buf2[2]; // [rsp+98h] [rbp-68h] BYREF
  _OWORD Buf1[2]; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v86; // [rsp+E8h] [rbp-18h]
  __int128 v87; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v88[2]; // [rsp+108h] [rbp+8h]
  __int128 v89; // [rsp+118h] [rbp+18h] BYREF
  __int128 v90; // [rsp+128h] [rbp+28h]
  __int128 v91; // [rsp+138h] [rbp+38h] BYREF
  __int128 v92; // [rsp+148h] [rbp+48h]
  __int128 v93; // [rsp+158h] [rbp+58h] BYREF
  __int128 v94; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v95[2]; // [rsp+178h] [rbp+78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1A0h] [rbp+A0h] BYREF
  void *v97; // [rsp+1B0h] [rbp+B0h]
  int v98; // [rsp+1B8h] [rbp+B8h]
  int v99; // [rsp+1BCh] [rbp+BCh]
  const wchar_t *v100; // [rsp+1C0h] [rbp+C0h]
  __int64 v101; // [rsp+1C8h] [rbp+C8h]
  struct _HAM_ACTIVITY **v102; // [rsp+1D0h] [rbp+D0h]
  __int64 v103; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 *v104; // [rsp+1E0h] [rbp+E0h]
  __int64 v105; // [rsp+1E8h] [rbp+E8h]
  __int64 *v106; // [rsp+1F0h] [rbp+F0h]
  __int64 v107; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 *v108; // [rsp+200h] [rbp+100h]
  __int64 v109; // [rsp+208h] [rbp+108h]
  unsigned __int64 *v110; // [rsp+210h] [rbp+110h]
  __int64 v111; // [rsp+218h] [rbp+118h]
  __int64 *v112; // [rsp+220h] [rbp+120h]
  __int64 v113; // [rsp+228h] [rbp+128h]

  v2 = *((_QWORD *)a1 + 83);
  v80 = a2;
  v79 = 0LL;
  v75 = 0LL;
  v73 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v87 = 0LL;
  *(_OWORD *)v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  EventDescriptor = 0LL;
  v86 = 0LL;
  memset(v95, 0, sizeof(v95));
  v93 = 0LL;
  v94 = 0LL;
  if ( (v2 & 0x40000000000000LL) == 0 && (v2 & 0x20000000000000LL) == 0 )
  {
    HampHostComputeStaticEnforcementSettings(
      a1,
      (struct _RM_ENFORCEMENT_SETTINGS *)&EventDescriptor,
      (struct _RM_COMMIT_THRESHOLDS *)v95,
      (struct _RM_COMMIT_THRESHOLDS *)&v93,
      &v73);
    if ( ((*((_QWORD *)a1 + 83) & 0x80000000000000LL) == 0
       || SDWORD2(v86) < 2 && (BYTE12(v86) & 0x70) == 0 && (BYTE12(v86) & 8) == 0)
      && *((struct _HAM_ACTIVITY **)a1 + 126) == v73 )
    {
      v5 = *((_OWORD *)a1 + 71);
      Buf1[0] = 0uLL;
      Buf1[1] = v5;
      Buf2[0] = 0uLL;
      Buf2[1] = v86;
      if ( !memcmp_0(Buf1, Buf2, 0x20uLL)
        && v94 == __PAIR128__(*((_QWORD *)a1 + 107), *((_QWORD *)a1 + 108))
        && !memcmp_0(v95, (char *)a1 + 880, 0x20uLL) )
      {
        *(_DWORD *)a2 = 0;
        return 0LL;
      }
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v8 = *Value;
    if ( (*Value & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v9 = Value[2]-- == 1;
    if ( v9 )
      *Value = v8 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  dword_1800E3390 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v11 = *v10;
    if ( (*v10 & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v9 = v10[1]-- == 1;
    if ( v9 )
      *v10 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  RmpActivityHostQueryCommit((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 56), 0LL, &v75, 0LL);
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v13 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v13 |= 2uLL;
    ++v13[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  v14 = *((_QWORD *)a1 + 83);
  if ( (v14 & 0x40000000000000LL) != 0 )
  {
    v14 &= ~0x40000000000000uLL;
    *((_QWORD *)a1 + 107) = 0LL;
    *((_QWORD *)a1 + 83) = v14;
    *((_QWORD *)a1 + 108) = 0LL;
  }
  v15 = (v14 >> 53) & 1;
  if ( (v14 & 0x80000000000000LL) != 0 )
  {
    LODWORD(v15) = v15 | 2;
    *((_QWORD *)a1 + 83) = v14 & 0xFF7FFFFFFFFFFFFFuLL;
  }
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)&v91,
    (struct _RM_COMMIT_THRESHOLDS *)&v87,
    (struct _RM_COMMIT_THRESHOLDS *)&v89,
    &v79);
  v16 = v75;
  v17 = -1LL;
  v18 = v87;
  v19 = v88[0];
  v81 = v75;
  if ( v75 >= (unsigned __int64)v87 )
  {
    if ( v75 < *((_QWORD *)&v87 + 1) )
    {
      v18 = *((_QWORD *)&v87 + 1);
      v20 = v87;
    }
    else if ( v75 < v88[0] )
    {
      v20 = *((_QWORD *)&v87 + 1);
      v18 = v88[0];
    }
    else
    {
      v20 = v88[0];
      v18 = -1LL;
    }
  }
  else
  {
    v20 = 0LL;
  }
  v21 = v88[1];
  v22 = v75 >> 3;
  v74 = 0LL;
  if ( v88[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    v22 = v88[1] >> 4;
  if ( v22 <= 0x1400000 )
    v22 = 20971520LL;
  v23 = v22 + v75 - 1;
  v24 = v23 / v22 * v22;
  v25 = -1LL;
  if ( is_mul_ok(v23 / v22, v22) )
    v25 = v24;
  if ( v88[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v25 > v88[1] )
  {
    v74 = 0LL;
    v70 = v22 + v88[1] - 1;
    v25 = v70 / v22 * v22;
    if ( !is_mul_ok(v70 / v22, v22) )
    {
      v25 = -1LL;
      goto LABEL_37;
    }
  }
  if ( v25 == -1LL )
  {
LABEL_37:
    v26 = -1LL;
    goto LABEL_38;
  }
  v26 = -1LL;
  if ( v25 + v22 >= v25 )
    v26 = v25 + v22;
LABEL_38:
  if ( v88[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v25 >= v88[1] )
      v25 = v88[1];
    if ( v88[1] < v26 )
      v26 = v88[1];
  }
  v27 = 2 * v22;
  if ( 2 * v22 >= v25 )
    v27 = v25;
  v28 = v25 - v27;
  if ( v20 <= v28 )
    v20 = v28;
  if ( v75 <= v88[1] && v18 >= v26 )
    v18 = v26;
  *(_QWORD *)&v91 = v20;
  *((_QWORD *)&v91 + 1) = v18;
  if ( v18 != -1LL )
  {
    v29 = *((_QWORD *)a1 + 122);
    if ( v29 <= v18 )
      v29 = v18;
    *((_QWORD *)a1 + 122) = v29;
  }
  v30 = v79;
  if ( *((_QWORD *)a1 + 88) )
  {
    v66 = (*((_QWORD *)a1 + 83) & 0x200000000000000LL) != 0 && *((struct _HAM_ACTIVITY **)a1 + 126) != v79;
    v72 = v66;
    if ( HampHostIsElasticRecipient(a1) )
    {
      if ( v67 != *((_QWORD *)a1 + 141) )
        v68 = 1;
      v72 = v68;
    }
    if ( *((_QWORD *)a1 + 121) )
      v72 = 1;
  }
  else
  {
    v72 = 0;
  }
  v31 = (*((_QWORD *)a1 + 112) > v19 || *((_QWORD *)a1 + 113) > v21) && (*((_BYTE *)a1 + 671) & 1) == 0;
  *((_QWORD *)a1 + 107) = *((_QWORD *)&v90 + 1);
  *((_QWORD *)a1 + 108) = v90;
  *((_QWORD *)a1 + 126) = v30;
  v32 = v87;
  v33 = *(_OWORD *)v88;
  *((_OWORD *)a1 + 55) = v87;
  *((_OWORD *)a1 + 56) = v33;
  if ( v30 )
    v34 = *((_QWORD *)v30 + 59);
  else
    v34 = v19;
  if ( v34 == *((_QWORD *)a1 + 109) )
  {
    LODWORD(v75) = 0;
  }
  else
  {
    LODWORD(v75) = 1;
    *((_QWORD *)a1 + 109) = v34;
  }
  v35 = (unsigned __int64 *)((char *)a1 + 944);
  if ( v19 == -1LL || (v57 = *((_QWORD *)a1 + 120), v57 == -1) || (v58 = v19 + v57, v58 < v19) )
  {
    *v35 = -1LL;
LABEL_61:
    v36 = *((_QWORD *)a1 + 121);
    goto LABEL_62;
  }
  *v35 = v58;
  if ( v58 == -1LL )
    goto LABEL_61;
  v36 = *((_QWORD *)a1 + 121);
  if ( v36 != -1 && v36 + v58 >= v58 )
  {
    *v35 = v36 + v58;
    goto LABEL_63;
  }
LABEL_62:
  *v35 = -1LL;
LABEL_63:
  *((_OWORD *)a1 + 57) = v32;
  *((_OWORD *)a1 + 58) = v33;
  v37 = *((_QWORD *)a1 + 117);
  if ( v37 == -1LL || v36 == -1 )
  {
    *((_QWORD *)a1 + 117) = -1LL;
  }
  else
  {
    v59 = -1LL;
    if ( v37 + v36 >= v37 )
      v59 = v37 + v36;
    *((_QWORD *)a1 + 117) = v59;
  }
  v38 = *((_QWORD *)a1 + 116);
  if ( v38 == -1LL || v36 == -1 )
  {
    *((_QWORD *)a1 + 116) = -1LL;
  }
  else
  {
    v60 = -1LL;
    if ( v38 + v36 >= v38 )
      v60 = v38 + v36;
    *((_QWORD *)a1 + 116) = v60;
  }
  v39 = *((_QWORD *)a1 + 115);
  if ( v39 == -1LL || v36 == -1 )
  {
    *((_QWORD *)a1 + 115) = -1LL;
  }
  else
  {
    v61 = -1LL;
    if ( v39 + v36 >= v39 )
      v61 = v39 + v36;
    *((_QWORD *)a1 + 115) = v61;
  }
  v40 = *((_QWORD *)a1 + 114);
  if ( v40 == -1LL || v36 == -1 || v40 + v36 < v40 )
    *((_QWORD *)a1 + 114) = -1LL;
  else
    *((_QWORD *)a1 + 114) = v40 + v36;
  *((_QWORD *)a1 + 83) &= ~0x20000000000000uLL;
  if ( HampLockTrackerId != -1 )
  {
    v41 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v42 = *v41;
    if ( (*v41 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v9 = v41[2]-- == 1;
    if ( v9 )
      *v41 = v42 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  v43 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v31 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)a1 - 1) + 40LL) + 192LL))(
      *((_QWORD *)a1 + 125),
      1LL);
    HampHostAcquireLockExclusiveEx(a1, 0);
    *((_QWORD *)a1 + 83) &= ~0x40000000000000uLL;
    HampHostReleaseLockExclusive(a1);
    RmpSystemResourceTimerSet(a1, *(unsigned int *)(v43 + 956), *((void **)a1 + 125));
    if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
    {
      v76 = *((_QWORD *)&v90 + 1);
      v82 = v90;
      v77 = v88[0];
      v78 = v88[1];
      v74 = *((_QWORD *)a1 - 3);
      v108 = (unsigned __int64 *)&v82;
      v106 = &v76;
      v104 = &v77;
      v102 = (struct _HAM_ACTIVITY **)&v78;
      v100 = (const wchar_t *)&v74;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E12B8;
      v109 = 8LL;
      v107 = 8LL;
      v105 = 8LL;
      v103 = 8LL;
      v101 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 8LL;
      UserData.Size = *(unsigned __int16 *)off_1800E12B8;
      v97 = &unk_1800CD1B3;
      UserData.Reserved = 2;
      v98 = 97;
      v99 = 1;
      LODWORD(v73) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
    }
  }
  if ( v16 >= (unsigned __int64)v87 )
  {
    if ( v16 < *((_QWORD *)&v87 + 1) )
    {
      v44 = 2;
    }
    else
    {
      v44 = 4;
      if ( v16 < v88[0] )
        v44 = 3;
    }
  }
  else
  {
    v44 = 1;
  }
  v45 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v46 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v45) )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v46 |= 1uLL;
    ++v46[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800E3390 = GetCurrentThreadId();
  if ( v44 >= 4 )
  {
    v47 = v88[0];
    v73 = 0LL;
    EventDescriptor = 0LL;
    *(_QWORD *)&v86 = 0LL;
    if ( (int)RmpActivityHostQueryOfferedMemory(
                (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 56),
                (unsigned __int64 *)&v73) >= 0 )
    {
      if ( v73 )
      {
        v63 = (95 * v47 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
        v64 = 20971520LL;
        if ( v81 - ((v63 + ((95 * v47 - v63) >> 1)) >> 6) > 0x1400000 )
          v64 = v81 - ((v63 + ((95 * v47 - v63) >> 1)) >> 6);
        if ( v64 < (unsigned __int64)v73 )
        {
          v65 = 0;
          *(_QWORD *)&EventDescriptor.Id = v73;
        }
        else
        {
          *(_QWORD *)&EventDescriptor.Id = -1LL;
          v65 = 1;
        }
        LODWORD(v86) = ((*((_BYTE *)a1 + 1196) & 0x10) != 0) | (4 * v65) | v86 & 0xFFFFFFF8;
        RmpActivityHostDecommitOfferedMemory(
          (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 56),
          (struct _RM_OFFERED_DECOMMIT_INFO *)&EventDescriptor);
      }
    }
  }
  v48 = RmpActivityHostApplyEnforcementSettings(
          (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 56),
          (struct _RM_ENFORCEMENT_SETTINGS *)&v91,
          v15);
  if ( (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 + 596) & 1) == 0 )
  {
    if ( v48 >= 0 )
      goto LABEL_86;
    MicrosoftTelemetryAssertTriggeredNoArgs();
LABEL_140:
    v62 = v80;
    ++*(_DWORD *)v80;
    if ( *(_DWORD *)v62 == 5 * (*(_DWORD *)v62 / 5u) )
    {
      RmpReleaseGlobalLock();
      LODWORD(v73) = 0;
      HampHostQueueTerminateEx(a1, 3LL, 4865LL, 0LL, 0, 0, 0LL, &v73);
      RmpAcquireGlobalLock();
    }
    goto LABEL_87;
  }
  if ( v48 < 0 )
    goto LABEL_140;
LABEL_86:
  *(_DWORD *)v80 = 0;
LABEL_87:
  v49 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v50 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v49) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v50 |= 2uLL;
    ++v50[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  CurrentThreadId = GetCurrentThreadId();
  v9 = (_DWORD)v75 == 0;
  v52 = v88[0];
  *((_DWORD *)a1 + 2) = CurrentThreadId;
  v53 = *((_QWORD *)a1 + 165);
  if ( (!v9 || v52 != v53)
    && (int)ExecutionModel::ResourceManager::CommitMemoryLimitChange(
              *(ExecutionModel::ResourceManager **)(*((_QWORD *)a1 - 1) + 3544LL),
              (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 24),
              v53,
              v52,
              *((_QWORD *)a1 + 109)) >= 0 )
  {
    *((_QWORD *)a1 + 165) = v52;
  }
  if ( *((_DWORD *)a1 + 332) != v44 )
  {
    if ( (unsigned int)dword_1800E12B0 > 4
      && (qword_1800E12C0 & 0x40) != 0
      && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    {
      v74 = v92;
      v112 = &v74;
      v78 = v88[0];
      v110 = &v78;
      v77 = v81;
      v54 = *((_QWORD *)a1 - 3);
      v108 = &v77;
      v76 = v54;
      LODWORD(v54) = *((_DWORD *)a1 + 140);
      v106 = (__int64 *)&v71;
      LODWORD(v73) = v54;
      v55 = (const wchar_t *)((char *)a1 + 24);
      v104 = (unsigned __int64 *)&v76;
      v102 = &v73;
      v71 = v44;
      v113 = 8LL;
      v111 = 8LL;
      v109 = 8LL;
      v107 = 1LL;
      v105 = 8LL;
      v103 = 4LL;
      if ( a1 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
      {
        v55 = &word_1800BBB1C;
        v56 = 2;
      }
      else
      {
        do
          v9 = v55[++v17] == 0;
        while ( !v9 );
        v56 = 2 * v17 + 2;
      }
      v100 = v55;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E12B8;
      v101 = v56;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 64LL;
      UserData.Size = *(unsigned __int16 *)off_1800E12B8;
      v97 = &unk_1800CCF7A;
      v99 = 1;
      UserData.Reserved = 2;
      v98 = 119;
      LODWORD(v75) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    }
    (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**(_QWORD **)(v43 + 792) + 32LL))(
      *(_QWORD *)(v43 + 792),
      (char *)a1 - 56,
      *((unsigned int *)a1 + 332),
      v44);
    *((_DWORD *)a1 + 332) = v44;
  }
  if ( v72 )
  {
    v69 = HampHostCheckEnterDependencyWorker(a1);
    if ( v69 )
    {
      HampHostReleaseLockExclusive(a1);
      RmpReleaseGlobalLock();
      HampDepGroupRunStateChangeWorker(v69);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a1, 0);
    }
  }
  return 1LL;
}
