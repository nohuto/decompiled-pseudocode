/*
 * XREFs of ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800085A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B680 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023628 (-RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180023F94 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002409C (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180024610 (-HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025520 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800256C0 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025F10 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800265E4 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026E1C (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180027234 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18003F560 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180057A04 (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x18005EBE8 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005EED8 (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006AED4 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmHamHostStateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v3; // ebx
  __int64 v5; // r13
  __int64 v6; // r12
  unsigned __int64 v7; // rdx
  struct _HAM_APPLICATION *v8; // rbx
  int v9; // r14d
  unsigned int v10; // ebx
  bool v11; // sf
  int v12; // ebx
  __int64 *Value; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  char **v16; // r8
  void **v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rax
  __int64 v21; // rdx
  signed __int64 v22; // rax
  bool v23; // cc
  signed __int64 v24; // rax
  DWORD v25; // ebx
  bool v26; // zf
  int v27; // ebx
  int v28; // edx
  struct _HAM_ACTIVITY *FirstActivity; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // ecx
  char v33; // cl
  unsigned int v34; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v35; // [rsp+34h] [rbp-CCh] BYREF
  int v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD TlsValue[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+10Ch] [rbp+Ch]
  __int64 *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  unsigned int *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]

  v3 = HampLockTrackerId;
  v41 = 0LL;
  memset(TlsValue, 0, sizeof(TlsValue));
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v3, TlsValue);
  }
  v5 = *((_QWORD *)a2 + 6);
  v6 = *((_QWORD *)a2 + 4);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    v34 = *((_DWORD *)a2 + 313);
    v37 = v6;
    v48 = &v34;
    v46 = &v37;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v49 = 4LL;
    v47 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v43 = &unk_1800D2457;
    UserData.Reserved = 2;
    v44 = 42;
    v45 = 1;
    v35 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  v36 = 0;
  RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a2);
  *((_DWORD *)a2 + 178) = GetCurrentThreadId();
  while ( *((int *)a2 + 6) >= 0 )
  {
    HampHostCheckStartPendingActivities((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56));
    v37 = 0LL;
    v35 = 0;
    v34 = 0;
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56),
      (union _RM_OPTIMIZATION_STATE *)&v35,
      (union _RM_OPTIMIZATION_STATE *)&v34);
    v7 = *((_QWORD *)a2 + 90);
    if ( ((v7 >> 16) & 3) != 0 )
    {
      if ( ((*((_QWORD *)a2 + 90) >> 16) & 3LL) == 1 )
      {
        if ( (v35 & 0x80u) == 0 || (v34 & 0x80u) != 0 || (v7 & 0x40000000000LL) != 0 )
          goto LABEL_11;
        FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56));
        while ( FirstActivity )
        {
          if ( (*((_BYTE *)FirstActivity + 552) & 0x48) == 0 )
          {
            v33 = *((_BYTE *)FirstActivity + 562);
            if ( (v33 == 3 || v33 == 2 && *((_BYTE *)FirstActivity + 563) >= 5u)
              && (*((_DWORD *)FirstActivity + 28) & 0x2000) != 0 )
            {
              goto LABEL_11;
            }
          }
          v30 = *((_QWORD *)FirstActivity + 12);
          if ( v30 == *((_QWORD *)FirstActivity + 10) + 608LL )
            FirstActivity = 0LL;
          else
            FirstActivity = (struct _HAM_ACTIVITY *)(v30 - 96);
        }
      }
      else
      {
        if ( ((*((_QWORD *)a2 + 90) >> 16) & 3LL) == 2 )
          v26 = (v7 & 0x8000000000000LL) == 0;
        else
          v26 = ((*((_QWORD *)a2 + 90) >> 16) & 3LL) == 3;
        if ( !v26 )
          goto LABEL_11;
      }
      if ( (v7 & 0x800000000LL) == 0 )
      {
        v34 = 0;
        v35 = 0;
        if ( (v7 & 0x10000000000LL) != 0 )
        {
          v27 = 0;
        }
        else
        {
          RmHamHostGetCurrentState(
            (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56),
            (union _RM_OPTIMIZATION_STATE *)&v34,
            (union _RM_OPTIMIZATION_STATE *)&v35);
          if ( (v34 & 0x80u) == 0 || (v35 & 0x80u) != 0 )
          {
            if ( (v34 & 0x100) == 0 || (v35 & 0x100) != 0 )
            {
              v31 = *((_QWORD *)a2 + 90);
              if ( (v31 & 0x800000000LL) != 0 )
              {
                v27 = 0;
              }
              else if ( (v31 & 0x40000000000LL) == 0 || (v27 = 0, (v31 & 0x30000) == 0) )
              {
                v27 = 1;
              }
            }
            else
            {
              v27 = 0;
            }
          }
          else
          {
            v27 = 0;
          }
        }
        *((_QWORD *)a2 + 90) |= 0x800000000uLL;
        RmActivityHostReferenceFromHam((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56));
        TpPostWork(*((_QWORD *)a2 + 86));
        HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56), v27);
      }
      while ( (*((_DWORD *)a2 + 180) & 0x30000) != 0 )
      {
        v37 = *((_QWORD *)a2 + 108);
        RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a2);
        RtlWaitOnAddress(a2 + 864, &v37, 8LL);
        RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a2);
      }
    }
    else
    {
LABEL_11:
      if ( (v7 & 0x8000000000000LL) != 0 )
      {
        HampHostCollectErrorReport((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56));
      }
      else if ( (a2[728] & 0x20) != 0 )
      {
        RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a2);
        TpWaitForWork(*((_QWORD *)a2 + 88), 0LL);
        RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a2);
      }
      else
      {
        v8 = (struct _HAM_APPLICATION *)*((_QWORD *)a2 + 106);
        if ( !HampAppCheckQueueLicenseUpgradeForHost(v8, (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56))
          && ((a2[1252] & 8) != 0
           || !(unsigned int)HampAppCheckWaitForLicenseForHost(v8, (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56)))
          && !HampAppCheckDowngradeLicense(v8, (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56)) )
        {
          v9 = HampHostCheckUpdateEnforcementSettings(
                 (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56),
                 (struct _HAM_ENFORCEMENT_SETTINGS_CONTEXT *)&v36);
          v10 = RmpPolicyComputeDesiredState((__int64)a2);
          if ( (a2[1252] & 8) == 0
            && (v10 & 8) != 0
            && (*((_QWORD *)a2 + 90) & 0x200000000000LL) == 0
            && !RmpPolicyIsActivityHostSwappable((struct _RM_ACTIVITY_HOST *)a2) )
          {
            *((_QWORD *)a2 + 90) |= 0x200000000000uLL;
          }
          if ( *((_DWORD *)a2 + 313) == v10 )
          {
            if ( !v9 || RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)a2) )
              break;
          }
          else
          {
            if ( (unsigned int)dword_1800E12B0 > 4
              && (qword_1800E12C0 & 0x40) != 0
              && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
            {
              v34 = v10;
              v48 = &v34;
              v37 = v6;
              v46 = &v37;
              *(_DWORD *)&EventDescriptor.Level = 4;
              UserData.Ptr = (ULONGLONG)off_1800E12B8;
              v49 = 4LL;
              v47 = 8LL;
              *(_DWORD *)&EventDescriptor.Id = 184549376;
              EventDescriptor.Keyword = 64LL;
              UserData.Size = *(unsigned __int16 *)off_1800E12B8;
              v43 = &unk_1800D237C;
              UserData.Reserved = 2;
              v44 = 51;
              v45 = 1;
              v35 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
            }
            v28 = *((_DWORD *)a2 + 313);
            if ( (v10 & v28) == v10 )
              RmpEnforcementUnoptimizeHost(a2, ~v10 & v28);
            else
              RmpEnforcementOptimizeHost((__int64)a2, v10 & ~v28);
            RtlWakeAllConditionVariable(a2 + 1240);
          }
        }
      }
    }
  }
  HampHostCheckStartPendingActivities((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56));
  *((_DWORD *)a2 + 178) = 0;
  *((_QWORD *)a2 + 90) &= ~0x400000000uLL;
  v11 = *((int *)a2 + 6) < 0;
  v35 = 0;
  v34 = 0;
  if ( v11
    || *((_DWORD *)a2 + 284) + *((_DWORD *)a2 + 290)
    || *((_QWORD *)a2 + 82)
    || (RmHamHostGetCurrentState(
          (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56),
          (union _RM_OPTIMIZATION_STATE *)&v35,
          (union _RM_OPTIMIZATION_STATE *)&v34),
        v34)
    || (v35 & 0x80u) == 0
    || (v35 & 0x100) == 0 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 0;
    if ( (a2[728] & 2) == 0 )
      LOBYTE(v12) = *((_QWORD *)a2 + 138) == 0LL;
  }
  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v14 = *Value;
    if ( (*Value & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v26 = Value[2]-- == 1;
    if ( v26 )
      *Value = v14 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a2 + 16) = 0;
  RtlReleaseSRWLockExclusive(a2 + 56);
  v15 = *((_QWORD *)a2 + 176);
  *((_DWORD *)a2 + 361) = 0;
  if ( v15 )
  {
    v16 = (char **)*((_QWORD *)a2 + 177);
    if ( v16[1] != a2 + 1416 || (v17 = (void **)*((_QWORD *)a2 + 178), *v17 != a2 + 1416) )
      __fastfail(3u);
    *v17 = v16;
    v16[1] = (char *)v17;
    *((_QWORD *)a2 + 176) = 0LL;
    if ( *(_QWORD *)v15 == v15 )
      SetEvent(*(HANDLE *)(v15 + 16));
    RmpObjectRelease(a2);
  }
  v18 = *(_QWORD *)(v5 + 3544);
  v19 = *(_DWORD *)(v18 + 160);
  if ( (v19 & 3) == 0 )
  {
    *(_DWORD *)(v18 + 160) = v19 | 1;
    TpPostWork(*(_QWORD *)(v18 + 144));
  }
  if ( v12 )
    RmpActivityHostDelete((unsigned __int64)a2);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v36 = *((_DWORD *)a2 + 313);
    v38 = v6;
    v48 = (unsigned int *)&v36;
    v49 = 4LL;
    v46 = &v38;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v47 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v43 = &unk_1800D23BB;
    UserData.Reserved = 2;
    v44 = 42;
    v45 = 1;
    v34 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  dword_1800E3390 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v21 = *v20;
    if ( (*v20 & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v26 = v20[1]-- == 1;
    if ( v26 )
      *v20 = v21 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  RtlWakeAllConditionVariable(a2 + 1240);
  v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v23 = v22 <= 1;
  v24 = v22 - 1;
  if ( v23 )
  {
    if ( v24 )
      __fastfail(0xEu);
    v32 = *((_DWORD *)a2 + 10);
    if ( v32 != 1 )
    {
      if ( v32 )
      {
        if ( v32 == 2 && !*((_DWORD *)a2 + 24) && !*((_DWORD *)a2 + 25) )
          NtDeleteWnfStateName(a2 + 96);
      }
      else
      {
        RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(a2 + 1304));
        HampHostCleanup((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 56));
      }
    }
    HampFreeHeap(a2);
  }
  v25 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v25, 0LL);
  }
}
