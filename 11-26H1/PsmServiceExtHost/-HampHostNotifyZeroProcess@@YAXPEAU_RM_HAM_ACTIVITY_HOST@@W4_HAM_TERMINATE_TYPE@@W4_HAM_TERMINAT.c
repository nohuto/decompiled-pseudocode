/*
 * XREFs of ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180022DE4
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000CEE0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180028FB8 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B680 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000C624 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180013470 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023F34 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026554 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FDD0 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE24 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE90 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180040204 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x1800422F0 (-HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilHostTypeNameFromType@@YAPEBGK@Z @ 0x1800426DC (-HampUtilHostTypeNameFromType@@YAPEBGK@Z.c)
 *     ?HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043ACC (-HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x1800562F0 (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005CA70 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18006E324 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampHostNotifyZeroProcess(__int64 a1, unsigned int a2, unsigned int a3, int a4, _DWORD *a5)
{
  DWORD v5; // r14d
  int v8; // esi
  _QWORD *Value; // rbx
  __int64 v10; // rbx
  DWORD v11; // ecx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  int v19; // eax
  HKEY v20; // rbx
  unsigned int JobType; // eax
  const WCHAR *v22; // rax
  DWORD v23; // r14d
  _QWORD *v24; // rbx
  __int64 v25; // r13
  int v26; // r14d
  unsigned int v27; // r12d
  struct _HAM_APPLICATION *v28; // rbx
  char v29; // r14
  _DWORD *v30; // rcx
  _DWORD *v31; // rdx
  int v32; // eax
  struct _HAM_ACTIVITY *FirstActivity; // rax
  __int64 v34; // r14
  struct _HAM_ACTIVITY *v35; // rbx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  const wchar_t *v45; // rbx
  unsigned int v46; // [rsp+30h] [rbp-D0h] BYREF
  char v47; // [rsp+34h] [rbp-CCh] BYREF
  char v48; // [rsp+35h] [rbp-CBh] BYREF
  char v49; // [rsp+36h] [rbp-CAh] BYREF
  int v50; // [rsp+38h] [rbp-C8h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v52; // [rsp+48h] [rbp-B8h]
  int v53; // [rsp+4Ch] [rbp-B4h] BYREF
  BYTE Data[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v60; // [rsp+90h] [rbp-70h]
  int v61; // [rsp+98h] [rbp-68h]
  int v62; // [rsp+9Ch] [rbp-64h]
  const wchar_t *v63; // [rsp+A0h] [rbp-60h]
  int v64; // [rsp+A8h] [rbp-58h]
  int v65; // [rsp+ACh] [rbp-54h]
  __int64 *v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  char *v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  char *v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  unsigned int *v72; // [rsp+E0h] [rbp-20h]
  __int64 v73; // [rsp+E8h] [rbp-18h]
  HKEY *p_hKey; // [rsp+F0h] [rbp-10h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  int *v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]
  char *v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  __int64 *v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  _WORD *v82; // [rsp+130h] [rbp+30h]
  int v83; // [rsp+138h] [rbp+38h]
  int v84; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  _WORD v87[136]; // [rsp+150h] [rbp+50h] BYREF

  v5 = HampLockTrackerId;
  v50 = a4;
  v46 = a3;
  v52 = a2;
  v8 = 1;
  v53 = 0;
  hKey = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(a1);
  v10 = *(_QWORD *)(a1 + 1048);
  *(_QWORD *)(a1 + 664) |= 0x8000000000000000uLL;
  v11 = HampLockTrackerId;
  v12 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)(a1 + 1048) = 0LL;
  v13 = -1LL;
  if ( v11 != -1 )
  {
    v14 = (__int64 *)TlsGetValue(v11);
    v15 = *v14;
    if ( (*v14 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v14[2]-- == 1 )
      *v14 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( v10 )
  {
    TpWaitForTimer(v10, 1LL);
    TpReleaseTimer(v10);
  }
  if ( v12 )
  {
    TpSetTimer(v12, 0LL, 0LL, 0LL);
    TpWaitForTimer(v12, 1LL);
  }
  if ( (*(_QWORD *)(a1 + 664) & 0x2000000000000LL) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 976);
    if ( (int)HampUtilQueryHostHistoricCommitUse((struct _RM_HAM_ACTIVITY_HOST *)a1, (unsigned __int64 *)&hKey) < 0
      || (v18 = (unsigned __int64)hKey, hKey == HKEY_CURRENT_USER_LOCAL_SETTINGS|0x7FFFFFF8LL) )
    {
      v18 = v17;
    }
    hKey = 0LL;
    *(_QWORD *)Data = (v18 >> 1) + (v17 >> 1);
    v19 = HampUtilOpenApplicationHistoryKey((struct _RM_HAM_ACTIVITY_HOST *)a1, 1u, &hKey);
    v20 = hKey;
    if ( v19 >= 0 )
    {
      JobType = RmHamHostGetJobType((struct _RM_HAM_ACTIVITY_HOST *)a1);
      v22 = HampUtilHostTypeNameFromType(JobType);
      RegSetValueExW(v20, v22, 0, 0xBu, Data, 8u);
    }
    if ( v20 )
      RegCloseKey(v20);
    if ( *(_DWORD *)(a1 + 560) == 2 )
      HampAppSaveTerminateReason(*(_QWORD *)(a1 + 792), a3);
    HampHostUpdateUsageInfoProcesses((struct _RM_HAM_ACTIVITY_HOST *)a1);
  }
  v23 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v24 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v23) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v24 |= 2uLL;
    ++v24[2];
  }
  CempLockAcquireExclusive(a1);
  v25 = *(_QWORD *)(a1 + 808);
  *(_QWORD *)Data = v25 + 1;
  if ( (*(_QWORD *)(a1 + 664) & 0x2000000000000LL) != 0 )
  {
    *a5 = 1;
    if ( *(_DWORD *)(a1 + 844) )
      v26 = CempQueryUnbiasedInterruptTimeMs64() - *(_DWORD *)(a1 + 844);
    else
      v26 = 0;
    if ( dword_1800E12B0
      && (v45 = (const wchar_t *)(a1 + 24),
          v53 = 130,
          PsmGetAumidFromKey(a1 + 24, &v53, v87),
          (unsigned int)dword_1800E12B0 > 4)
      && (qword_1800E12C0 & 0x400000000008LL) != 0
      && (qword_1800E12C8 & 0x400000000008LL) == qword_1800E12C8 )
    {
      v27 = v46;
      v47 = (unsigned __int64)*(unsigned int *)(a1 + 664) >> 18;
      v48 = v52;
      v56 = 0x1000000LL;
      v57 = v25;
      LODWORD(hKey) = v26;
      v86 = 8LL;
      v49 = *(_BYTE *)(((a1 - 56) & -(__int64)(a1 != 0)) + 0x268);
      v55 = *(_QWORD *)(a1 - 56 + 32);
      v85 = &v56;
      v43 = -1LL;
      do
        ++v43;
      while ( v87[v43] );
      v84 = 0;
      v83 = 2 * v43 + 2;
      v80 = &v57;
      v78 = &v47;
      v76 = &v50;
      p_hKey = &hKey;
      v72 = &v46;
      v70 = &v48;
      v68 = &v49;
      v66 = &v55;
      v82 = v87;
      v81 = 8LL;
      v79 = 1LL;
      v77 = 4LL;
      v75 = 4LL;
      v73 = 4LL;
      v71 = 1LL;
      v69 = 1LL;
      v67 = 8LL;
      if ( a1 == -24 )
      {
        v45 = &word_1800BBB1C;
        v44 = 2;
      }
      else
      {
        do
          ++v13;
        while ( v45[v13] );
        v44 = 2 * v13 + 2;
      }
      v64 = v44;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E12B8;
      v65 = 0;
      EventDescriptor.Keyword = 0x400000000008LL;
      v63 = v45;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1800E12B8;
      v60 = &unk_1800CD4AA;
      UserData.Reserved = 2;
      v61 = 173;
      v62 = 1;
      v52 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 0xDu, &UserData);
    }
    else
    {
      v27 = v46;
    }
    if ( *(_DWORD *)(a1 + 560) != 2 )
      goto LABEL_42;
    if ( !*(_BYTE *)(a1 + 592) )
    {
      v41 = *(_QWORD *)(a1 + 792);
      HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v41);
      *(_WORD *)(v41 + 616) = v27;
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v41);
    }
  }
  else
  {
    *a5 = 0;
    v27 = v46;
  }
  if ( *(_DWORD *)(a1 + 560) == 2 )
  {
    if ( !*(_BYTE *)(a1 + 592) )
    {
      v39 = *(_QWORD *)(a1 + 1056);
      HampWakeContextAcquireLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)v39);
      *(_BYTE *)(v39 + 184) &= ~0x40u;
      *(_BYTE *)(v39 + 184) |= 0x30u;
      *(_BYTE *)(v39 + 185) |= 0x10u;
      HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)v39);
      HampWakeContextReleaseLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)v39);
    }
    v28 = *(struct _HAM_APPLICATION **)(a1 + 792);
    v29 = *(_BYTE *)(a1 + 592);
    HampAppAcquireLockExclusive(v28);
    v30 = (_DWORD *)((char *)v28 + 616);
    v31 = (_DWORD *)((char *)v28 + 620);
    if ( v29 )
      v32 = *v30 >> 25;
    else
      v32 = *v31 >> 5;
    if ( (v32 & 7u) - 3 > 1 )
    {
      if ( v29 )
      {
        *v30 &= ~0x8000000u;
        *v30 |= 0x6000000u;
      }
      else
      {
        LODWORD(hKey) = *v31 & 0xFFFFFF1F | 0x60;
        HampAppCommitStateSummary(v28, (union _HAM_EXTERNAL_STATE_SUMMARY *)&hKey);
      }
    }
    HampAppReleaseLockExclusive(v28);
  }
LABEL_42:
  v46 = 0;
  v50 = 0;
  if ( (*(_QWORD *)(a1 + 664) & 0x10000000000LL) != 0
    || (RmHamHostGetCurrentState(
          (struct _RM_HAM_ACTIVITY_HOST *)a1,
          (union _RM_OPTIMIZATION_STATE *)&v46,
          (union _RM_OPTIMIZATION_STATE *)&v50),
        (v46 & 0x80u) != 0)
    && (v50 & 0x80u) == 0
    || (v46 & 0x100) != 0 && (v50 & 0x100) == 0
    || (v42 = *(_QWORD *)(a1 + 664), (v42 & 0x800000000LL) != 0)
    || (v42 & 0x40000000000LL) != 0 && (v42 & 0x30000) != 0 )
  {
    v8 = 0;
  }
  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  v34 = *(_QWORD *)Data;
  v35 = FirstActivity;
  while ( v35 )
  {
    if ( (*((_BYTE *)v35 + 552) & 8) == 0 )
    {
      if ( *((_QWORD *)v35 + 64) )
      {
        HampActInvalidateAndNotify(v35, v27);
        v40 = *((_QWORD *)v35 + 9);
        if ( v40 )
        {
          if ( *(_BYTE *)(v40 + 40) == 2 )
            *((_QWORD *)v35 + 64) = v34;
        }
      }
    }
    v36 = *((_QWORD *)v35 + 12);
    v37 = *((_QWORD *)v35 + 10);
    v35 = 0LL;
    if ( v36 != v37 + 608 )
      v35 = (struct _HAM_ACTIVITY *)(v36 - 96);
  }
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, v8);
  *(_QWORD *)(a1 + 664) &= 0xFFFFFFFFFFFCFFFFuLL;
  *(_QWORD *)(a1 + 672) &= 0xFFFFFFFFFFFFFFE7uLL;
  *(_WORD *)(a1 + 664) = 0;
  v38 = *(_QWORD *)(a1 + 664) & 0x7FF5FFFFFC03FFFFLL;
  *(_QWORD *)(a1 + 808) = v34;
  *(_QWORD *)(a1 + 840) = 0LL;
  *(_QWORD *)(a1 + 664) = v38 | 0x1940000;
  *(_QWORD *)(a1 + 960) = 0LL;
  *(_QWORD *)(a1 + 976) = 0LL;
  *(_DWORD *)(a1 + 848) = 0;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)a1);
  RtlWakeAddressAll(a1 + 808);
  HampHostCheckQueueDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)a1);
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*(_QWORD *)(a1 + 792) + 88LL));
}
