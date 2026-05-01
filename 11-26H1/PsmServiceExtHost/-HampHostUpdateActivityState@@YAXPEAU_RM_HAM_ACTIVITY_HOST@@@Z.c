/*
 * XREFs of ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00
 * Callers:
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000A6C0 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000A750 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18000FABC (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180012138 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800126A4 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180012EA8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180016FA4 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180022DE4 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180040B0C (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18005AE30 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007C89C (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007CAD0 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18007CCB0 (-HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x18000B490 (RmpActivityImportanceMergeVectors.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B680 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckRevokeSuspendExtensions@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000B9B0 (-HampHostCheckRevokeSuspendExtensions@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BB40 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BC40 (-HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000C624 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     CempListEntryIsNull @ 0x180014218 (CempListEntryIsNull.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180014294 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800142F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023628 (-RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003F3F8 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x18003FBB0 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006372C (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180066910 (-HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18006E324 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

void __fastcall HampHostUpdateActivityState(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v1; // r13d
  unsigned int v3; // r15d
  unsigned __int64 v4; // rcx
  int v5; // r12d
  int v6; // r14d
  struct _RM_HAM_ACTIVITY_HOST *v7; // rdi
  unsigned int v8; // ebx
  char v9; // di
  int v10; // ebx
  int v11; // r15d
  int v12; // ebp
  DWORD v13; // r12d
  __int64 v14; // r14
  _QWORD *Value; // rdi
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v19; // rax
  char *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _HOST_ACTIVITY_MANAGER *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // bp
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rdx
  char v31; // cl
  char v32; // r8
  unsigned __int64 v33; // [rsp+58h] [rbp-60h]
  int v34; // [rsp+60h] [rbp-58h]
  unsigned int v35; // [rsp+C0h] [rbp+8h] BYREF
  int v36; // [rsp+C8h] [rbp+10h] BYREF
  int v37; // [rsp+D0h] [rbp+18h]
  _FILETIME SystemTimeAsFileTime; // [rsp+D8h] [rbp+20h] BYREF

  v1 = 0;
  v36 = 0;
  v35 = 0;
  if ( (*((_QWORD *)a1 + 83) & 0x10000000000LL) != 0 )
  {
    v3 = 0;
  }
  else
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v36, (union _RM_OPTIMIZATION_STATE *)&v35);
    if ( (v36 & 0x80u) == 0 || (v35 & 0x80u) != 0 )
    {
      if ( (v36 & 0x100) == 0 || (v35 & 0x100) != 0 )
      {
        v24 = *((_QWORD *)a1 + 83);
        if ( (v24 & 0x800000000LL) != 0 )
        {
          v3 = 0;
        }
        else if ( (v24 & 0x40000000000LL) == 0 || (v3 = 0, (v24 & 0x30000) == 0) )
        {
          v3 = 1;
        }
      }
      else
      {
        v3 = 0;
      }
    }
    else
    {
      v3 = 0;
    }
  }
  HampHostEvaluatePendState(a1);
  HampHostCheckRevokeSuspendExtensions(a1);
  v4 = *((_QWORD *)a1 + 83);
  v5 = 0;
  *((_QWORD *)a1 + 84) &= ~4uLL;
  v33 = v4 >> 37;
  v6 = (v4 >> 40) & 1;
  v34 = (v4 >> 44) & 1;
  v35 = 1;
  *((_QWORD *)a1 + 83) = v4 & 0x9FFFE09FFFFFFFFFuLL;
  v7 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
  v36 = 0;
  v37 = 0;
  if ( v7 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
  {
    v20 = (char *)v7 - 96;
    if ( v20 )
    {
      v8 = v35;
      while ( 1 )
      {
        if ( (v20[552] & 0x48) == 0 )
        {
          v26 = v20[562];
          if ( v26 == 3 )
          {
            v27 = *((unsigned int *)v20 + 106);
LABEL_76:
            v8 = RmpActivityImportanceMergeVectors(v8, v27);
            v35 = v8;
            v28 = *((unsigned int *)v20 + 28);
            if ( (v28 & 0x2000) != 0 )
              *((_QWORD *)a1 + 83) |= 0x80000000000uLL;
            v29 = v28 >> 23;
            if ( ((v28 >> 23) & 3) <= ((*((_QWORD *)a1 + 83) >> 61) & 3uLL) )
              v29 = *((_QWORD *)a1 + 83) >> 61;
            v30 = (v29 << 61) ^ (*((_QWORD *)a1 + 83) ^ (v29 << 61)) & 0x9FFFFFFFFFFFFFFFuLL;
            *((_QWORD *)a1 + 83) = v30;
            if ( (v29 & 3) != 0 )
              *((_QWORD *)a1 + 84) |= 3uLL;
            v31 = v20[562];
            if ( v31 == 3 || v31 == 2 && (unsigned __int8)v20[563] >= 3u )
            {
              if ( (v28 & 0x400) != 0 )
              {
                v30 |= 0x4000000000uLL;
                *((_QWORD *)a1 + 83) = v30;
              }
              v32 = v20[562];
              if ( v32 == 3 || v32 == 2 && (unsigned __int8)v20[563] >= 5u )
              {
                if ( (v28 & 0x400) != 0 )
                {
                  v30 |= 0x10000000000uLL;
                  *((_QWORD *)a1 + 83) = v30;
                }
                if ( v26 == 3 )
                {
                  if ( (v28 & 0x800) != 0 )
                  {
                    v30 |= 0x20000000000uLL;
                    *((_QWORD *)a1 + 83) = v30;
                  }
                  if ( (v28 & 0x1000) != 0 )
                  {
                    v30 |= 0x40000000000uLL;
                    *((_QWORD *)a1 + 83) = v30;
                  }
                  if ( (v20[120] & 8) != 0 )
                    *((_QWORD *)a1 + 84) |= 4uLL;
                  if ( (v28 & 0x10000) != 0 )
                  {
                    *((_QWORD *)a1 + 84) |= 8uLL;
                    v36 = 1;
                  }
                  if ( (v28 & 0x1800000) == 0x1000000 )
                    *((_QWORD *)a1 + 84) |= 0x10uLL;
                  *((_QWORD *)a1 + 83) = v30 | 0x2000000000LL;
                }
              }
            }
            goto LABEL_32;
          }
          if ( v26 == 2 && v20[563] )
          {
            v27 = *((unsigned int *)v20 + 106);
            if ( !*((_QWORD *)v20 + 64) && ((v27 & 0x40) != 0 || ((unsigned __int8)v27 & 0xEu) >= 8) )
              *((_QWORD *)a1 + 83) |= 0x100000000000uLL;
            if ( (*((_DWORD *)v20 + 28) & 0x400) == 0 )
              v5 = 1;
            v37 = v5;
            goto LABEL_76;
          }
        }
LABEL_32:
        v21 = *((_QWORD *)v20 + 12);
        if ( v21 != *((_QWORD *)v20 + 10) + 608LL )
        {
          v20 = (char *)(v21 - 96);
          if ( v21 != 96 )
            continue;
        }
        goto LABEL_7;
      }
    }
  }
  v8 = v35;
LABEL_7:
  HampHostCheckUpdateSuspendWaitState(a1, v3);
  SystemTimeAsFileTime = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v9 = v35;
  if ( (*((_BYTE *)a1 + 680) & 0xE) == 8 )
  {
    if ( (v35 & 0xE) == 8 )
      goto LABEL_9;
    *((_FILETIME *)a1 + 130) = SystemTimeAsFileTime;
  }
  else
  {
    if ( (v35 & 0xE) != 8 )
      goto LABEL_9;
    *((_FILETIME *)a1 + 129) = SystemTimeAsFileTime;
  }
  *((_QWORD *)a1 + 83) |= 0x1000000000000000uLL;
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL));
LABEL_9:
  *((_DWORD *)a1 + 170) = v8;
  if ( (v35 & 0x400) == 0 )
    *((_QWORD *)a1 + 83) &= ~0x4000000000000uLL;
  if ( (v9 & 0x40) != 0 && !(unsigned int)CempListEntryIsNull((char *)a1 + 984) )
  {
    v23 = (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL)
                                                                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                   + 120)
                                                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          - 392);
    HampManagerAcquireLockExclusive(v23);
    HampManagerTriggerInswapTurn(v23, 1u);
    HampManagerReleaseLockExclusive(v23);
  }
  if ( (*((_QWORD *)a1 + 83) & 0x10000000000LL) != 0 && !v6 && HampHostIsResumed(a1) )
    HampHostChangeApplicationExecutionState(a1, 0LL, 1LL);
  v10 = (unsigned __int16)v35 >> 6;
  v11 = (unsigned __int16)v35 >> 4;
  v12 = (unsigned __int16)v35 >> 1;
  if ( *((_DWORD *)a1 + 140) == 2 )
  {
    v13 = HampLockTrackerId;
    v14 = *((_QWORD *)a1 + 99);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 0x20uLL;
      ++Value[6];
    }
    RtlAcquireSRWLockExclusive(v14 + 584);
    *(_DWORD *)(v14 + 592) = GetCurrentThreadId();
    v35 = v12 & 7 | *(_DWORD *)(v14 + 620) & 0xFFFFFCE0 | (8 * (v11 & 3 | (32 * (v36 & 1 | (2 * (v10 & 1))))));
    if ( *(_DWORD *)(v14 + 620) != v35 )
      HampAppCommitStateSummary((struct _HAM_APPLICATION *)v14, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v35);
    if ( HampLockTrackerId != -1 )
    {
      v16 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v17 = *v16;
      if ( (*v16 & 0x20) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      if ( v16[6]-- == 1 )
        *v16 = v17 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    *(_DWORD *)(v14 + 592) = 0;
    RtlReleaseSRWLockExclusive(v14 + 584);
    v5 = v37;
  }
  if ( (((unsigned __int8)v33 ^ (unsigned __int8)(*((_QWORD *)a1 + 83) >> 37)) & 1) != 0 )
    RtlWakeAllConditionVariable((char *)a1 + 16);
  v19 = *((_QWORD *)a1 + 83);
  if ( (v19 & 0x100000000000LL) != 0 && !v34 && (v19 & 0x30000) != 0 )
    HampHostIssueStopRequests(a1, 2LL, 5LL, 0LL, 5, 0, 2, 0LL);
  RtlWakeAllConditionVariable((char *)a1 + 696);
  HampHostCheckQueueStateWorker(a1, v5 != 0);
  if ( HampHostShouldTerminate(a1) )
  {
    v22 = *((_QWORD *)a1 + 83);
    if ( (v22 & 0x800000000LL) == 0 )
    {
      v36 = 0;
      v35 = 0;
      if ( (v22 & 0x10000000000LL) == 0 )
      {
        RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v36, (union _RM_OPTIMIZATION_STATE *)&v35);
        if ( ((v36 & 0x80u) == 0 || (v35 & 0x80u) != 0) && ((v36 & 0x100) == 0 || (v35 & 0x100) != 0) )
        {
          v25 = *((_QWORD *)a1 + 83);
          if ( (v25 & 0x800000000LL) == 0 && ((v25 & 0x40000000000LL) == 0 || (v25 & 0x30000) == 0) )
            v1 = 1;
        }
      }
      *((_QWORD *)a1 + 83) |= 0x800000000uLL;
      RmActivityHostReferenceFromHam(a1);
      TpPostWork(*((_QWORD *)a1 + 79));
      HampHostCheckUpdateSuspendWaitState(a1, v1);
    }
  }
  HampHostCheckQueueInterruptiveUIChangeWorker(a1);
}
