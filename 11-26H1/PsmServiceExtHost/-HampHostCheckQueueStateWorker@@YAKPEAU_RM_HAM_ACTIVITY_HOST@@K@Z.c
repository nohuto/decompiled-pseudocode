/*
 * XREFs of ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180012EA8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180015F54 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z @ 0x180018AE0 (-HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180019C64 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180024610 (-HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800256C0 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026C18 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027E6C (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003D484 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004621C (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180046FB4 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18005AE30 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18005B3F0 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180060D68 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18006B3E4 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostQueueErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006D94C (-HampHostQueueErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180078D90 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007954C (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007E334 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampHostArmStateWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000A530 (-HampHostArmStateWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006866C (-RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostCheckQueueStateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v2; // r13
  unsigned int v3; // r14d
  unsigned int v5; // esi
  DWORD v6; // edi
  __int64 v7; // r12
  _QWORD *Value; // rbx
  bool v9; // bl
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  int v16; // edi
  DWORD v17; // r13d
  _QWORD *v18; // r12
  __int64 v19; // r13
  unsigned int v20; // r12d
  __int64 *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 *v23; // r13
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r12
  __int128 v26; // xmm1
  int v27; // r13d
  unsigned __int64 v28; // rax
  int v29; // r12d
  __int128 v30; // xmm1
  bool v32; // zf
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  char *v37; // r9
  struct _RM_HAM_ACTIVITY_HOST *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // eax
  char v42; // al
  BOOL v43; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v47; // [rsp+50h] [rbp-B0h] BYREF
  struct _HAM_ACTIVITY *v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+60h] [rbp-A0h] BYREF
  int v50; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int64 v51; // [rsp+68h] [rbp-98h] BYREF
  __int128 Buf1; // [rsp+70h] [rbp-90h] BYREF
  __int128 v53; // [rsp+80h] [rbp-80h]
  __int128 v54; // [rsp+90h] [rbp-70h] BYREF
  __int128 v55; // [rsp+A0h] [rbp-60h]
  __int128 Buf2; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v57; // [rsp+C0h] [rbp-40h]
  __int128 v58; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v59; // [rsp+E0h] [rbp-20h]
  __int128 v60; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v61; // [rsp+100h] [rbp+0h]

  v2 = *((_QWORD *)a1 + 88);
  v3 = 0;
  v49 = 0;
  v50 = 0;
  LODWORD(v48) = a2 & 1;
  LODWORD(v47) = 0;
  LODWORD(v51) = 0;
  if ( v2 )
  {
    HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v2);
    v35 = *((_QWORD *)a1 + 88);
    v36 = *((_QWORD *)a1 + 78);
    LODWORD(v44) = 1;
    v32 = *(_DWORD *)(v35 + 92) == 0;
    v46 = *(_QWORD *)(v35 + 104) < v36;
    v43 = !v32;
  }
  else
  {
    v46 = 0;
    v43 = 0;
    LODWORD(v44) = 0;
  }
  LOWORD(v5) = 0;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v47, (union _RM_OPTIMIZATION_STATE *)&v51);
  v6 = HampLockTrackerId;
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockShared(v7 + 304);
  v9 = (*(_DWORD *)(v7 + 340) & 4) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v11 = *v10;
    if ( (*v10 & 0x40) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v32 = v10[7]-- == 1;
    if ( v32 )
      *v10 = v11 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  RtlReleaseSRWLockShared(v7 + 304);
  if ( !v9
    || (v40 = *((_QWORD *)a1 + 83), v45 = (unsigned __int64)a1 + 664, (v40 & 0x10000000000000LL) != 0)
    || ((v47 & 0x80u) != 0LL || (v51 & 0x80u) != 0LL ? (v41 = 0) : (v41 = 1),
        (v40 & 0x30000) != 0 || (v40 & 0x2000000000000LL) == 0 || !v41) )
  {
    if ( v46 )
    {
      LOWORD(v5) = v47 & 0x188;
      v45 = (unsigned __int64)a1 + 664;
      goto LABEL_21;
    }
    v12 = *((_QWORD *)a1 + 83);
    v45 = (unsigned __int64)a1 + 664;
    if ( (v12 & 0x10000000000LL) != 0 )
    {
      if ( !v43 )
        goto LABEL_21;
      LOWORD(v5) = v47;
    }
    else
    {
      if ( v2 && *(_DWORD *)(v2 + 88) )
        v5 = v47 & 0x100 | 0x80;
      else
        v5 = 384;
      if ( (v12 & 0x2080000000000LL) == 0x2000000000000LL && !*((_BYTE *)a1 + 592) )
        v5 |= v5 >> 5;
    }
    v45 = (unsigned __int64)a1 + 664;
  }
LABEL_21:
  if ( (_DWORD)v44 )
  {
    *(_DWORD *)(v2 + 16) = 0;
    RtlReleaseSRWLockExclusive(v2 + 8);
    if ( HampLockTrackerId != -1 )
    {
      v13 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v14 = *v13;
      if ( (*v13 & 8) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v32 = v13[4]-- == 1;
      if ( v32 )
        *v13 = v14 & 0xFFFFFFFFFFFFFFF7uLL;
    }
  }
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v49, (union _RM_OPTIMIZATION_STATE *)&v50);
  v15 = *((_QWORD *)a1 + 99);
  v16 = v49 & 0x188;
  v17 = HampLockTrackerId;
  v46 = v50 & 0x188;
  v44 = v15;
  if ( HampLockTrackerId != -1 )
  {
    v18 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v17) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v18 |= 0x20uLL;
    ++v18[6];
    v15 = v44;
  }
  v19 = v15 + 584;
  RtlAcquireSRWLockShared(v15 + 584);
  v20 = (*(_DWORD *)(v15 + 616) >> 23) & 3;
  if ( HampLockTrackerId != -1 )
  {
    v21 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v22 = *v21;
    if ( (*v21 & 0x20) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v32 = v21[6]-- == 1;
    if ( v32 )
      *v21 = v22 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared(v19);
  v23 = (unsigned __int64 *)v45;
  v47 = (*(_QWORD *)v45 >> 61) & 3LL;
  v51 = v20;
  if ( (_DWORD)v48 || (v5 & 0x188) != v16 )
    goto LABEL_42;
  LODWORD(v44) = 0;
  v43 = 0;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v44, (union _RM_OPTIMIZATION_STATE *)&v43);
  v24 = *v23;
  if ( ((*v23 >> 16) & 3) != 0 )
  {
    if ( ((*v23 >> 16) & 3) == 1 )
    {
      if ( (v44 & 0x80u) != 0LL && v43 >= 0 && (v24 & 0x40000000000LL) == 0 )
      {
        v37 = 0LL;
        v38 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
        if ( v38 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
          v37 = (char *)v38 - 96;
        while ( v37 )
        {
          if ( (v37[552] & 0x48) == 0 )
          {
            v42 = v37[562];
            if ( (v42 == 3 || v42 == 2 && (unsigned __int8)v37[563] >= 5u) && (*((_DWORD *)v37 + 28) & 0x2000) != 0 )
              goto LABEL_36;
          }
          v39 = *((_QWORD *)v37 + 12);
          if ( v39 == *((_QWORD *)v37 + 10) + 608LL )
            v37 = 0LL;
          else
            v37 = (char *)(v39 - 96);
        }
        goto LABEL_42;
      }
    }
    else
    {
      if ( ((*v23 >> 16) & 3) == 2 )
        v32 = (v24 & 0x8000000000000LL) == 0;
      else
        v32 = ((*v23 >> 16) & 3) == 3;
      if ( v32 )
        goto LABEL_42;
    }
  }
LABEL_36:
  if ( (v24 & 0x8000000000000LL) == 0 )
  {
    v48 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    if ( (v24 & 0x40000000000000LL) == 0 && (v24 & 0x20000000000000LL) == 0 )
    {
      HampHostComputeStaticEnforcementSettings(
        a1,
        (struct _RM_ENFORCEMENT_SETTINGS *)&v54,
        (struct _RM_COMMIT_THRESHOLDS *)&v60,
        (struct _RM_COMMIT_THRESHOLDS *)&v58,
        &v48);
      v25 = *v23;
      if ( ((*v23 & 0x80000000000000LL) == 0 || SDWORD2(v55) < 2 && (BYTE12(v55) & 0x70) == 0 && (BYTE12(v55) & 8) == 0)
        && *((struct _HAM_ACTIVITY **)a1 + 126) == v48 )
      {
        v26 = *((_OWORD *)a1 + 71);
        Buf1 = 0uLL;
        v53 = v26;
        Buf2 = 0uLL;
        v57 = v55;
        if ( !memcmp_0(&Buf1, &Buf2, 0x20uLL)
          && v59 == __PAIR128__(*((_QWORD *)a1 + 107), *((_QWORD *)a1 + 108))
          && !memcmp_0(&v60, (char *)a1 + 880, 0x20uLL) )
        {
          if ( ((v25 >> 61) & 3) != 0
            || (LODWORD(v44) = 0,
                v43 = 0,
                RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v44, (union _RM_OPTIMIZATION_STATE *)&v43),
                (v44 & 0x100) == 0)
            || (v43 & 0x100) != 0
            || (v33 = *v23, *((_BYTE *)a1 + 592) == 1) && (v33 & 0x2000000000000LL) != 0
            || (v34 = *((_QWORD *)a1 + 84), (v34 & 1) == 0) && ((v34 & 2) == 0 || (v33 & 0x2000000000000LL) != 0) )
          {
            if ( v47 <= v51 )
            {
              v27 = 0;
              goto LABEL_43;
            }
          }
        }
      }
    }
  }
LABEL_42:
  v27 = 1;
LABEL_43:
  v28 = *(_QWORD *)v45;
  if ( (*(_QWORD *)v45 & 0x8000000000000LL) == 0
    || (v28 & 0xE0000000) == 0
    || (v29 = 1, (*(_QWORD *)v45 & 0xE0000000LL) == 0xA0000000LL) )
  {
    v29 = 0;
  }
  v48 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  Buf2 = 0LL;
  v57 = 0LL;
  if ( (v28 & 0x40000000000000LL) != 0
    || (v28 & 0x20000000000000LL) != 0
    || (HampHostComputeStaticEnforcementSettings(
          a1,
          (struct _RM_ENFORCEMENT_SETTINGS *)&v54,
          (struct _RM_COMMIT_THRESHOLDS *)&v60,
          (struct _RM_COMMIT_THRESHOLDS *)&Buf2,
          &v48),
        v45 = *(_QWORD *)v45,
        (v45 & 0x80000000000000LL) != 0)
    && (SDWORD2(v55) >= 2 || (BYTE12(v55) & 0x70) != 0 || (BYTE12(v55) & 8) != 0)
    || *((struct _HAM_ACTIVITY **)a1 + 126) != v48
    || (v30 = *((_OWORD *)a1 + 71), Buf1 = 0uLL, v53 = v30, v58 = 0uLL, v59 = v55, memcmp_0(&Buf1, &v58, 0x20uLL))
    || v57 != __PAIR128__(*((_QWORD *)a1 + 107), *((_QWORD *)a1 + 108))
    || memcmp_0(&v60, (char *)a1 + 880, 0x20uLL) )
  {
    v3 = 1;
    v29 = 1;
LABEL_68:
    if ( !v27 )
      return v3;
    if ( (*((_BYTE *)a1 + 1200) & 0x27) != 0 )
      RmHamEnforcementEmptySignalAbort(a1);
    if ( v29 )
      RtlWakeAllConditionVariable((char *)a1 + 696);
    goto LABEL_62;
  }
  if ( (v5 & 0x80u) != 0 || ((v16 | v46) & 0x80u) == 0 )
  {
    if ( (v5 & 8) == 0 && ((v49 & 8) != 0 || (v50 & 8) != 0) )
    {
      v3 = 1;
    }
    else if ( (v45 & 0x8000000000000LL) != 0 )
    {
      v3 = 1;
    }
    else if ( v47 > v51 )
    {
      v3 = 1;
    }
  }
  else
  {
    v3 = 1;
  }
  if ( v29 || v3 )
    goto LABEL_68;
  if ( v27 )
LABEL_62:
    HampHostArmStateWorker(a1);
  return v3;
}
