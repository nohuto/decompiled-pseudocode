/*
 * XREFs of ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800256C0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180023ED8 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023F34 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026554 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800265E4 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800266E8 (-HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18002685C (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180026F0C (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E540 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DF14 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostVetoesSuspendLicense@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005AC4C (-HampHostVetoesSuspendLicense@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180060D68 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180067138 (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x18006FCDC (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppCheckDowngradeLicense(struct _HAM_APPLICATION *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rax
  int i; // edi
  int v8; // edi
  unsigned int v9; // r15d
  int v10; // r12d
  struct _RM_HAM_ACTIVITY_HOST *j; // rax
  struct _RM_HAM_ACTIVITY_HOST *v12; // r14
  __int64 v13; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v14; // rax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rdi
  __int64 v16; // r9
  int v17; // r14d
  __int64 v18; // rdi
  const struct _TraceLoggingMetadata_t *v19; // rdx
  int v20; // edx
  struct _RM_HAM_ACTIVITY_HOST *k; // rdi
  __int64 *v22; // rax
  __int64 v23; // rdx
  bool v24; // zf
  DWORD v25; // esi
  _QWORD *v26; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v28; // esi
  _QWORD *v29; // rdi
  DWORD v30; // r15d
  _QWORD *v31; // r14
  __int64 *v32; // rax
  __int64 v33; // rdx
  const wchar_t *v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  DWORD v37; // r13d
  _QWORD *Value; // r12
  unsigned int v39; // edx
  __int64 *v40; // rax
  __int64 v41; // rdx
  const wchar_t *v42; // rax
  int v43; // edi
  int v44; // edi
  int v45; // [rsp+30h] [rbp-79h] BYREF
  int v46; // [rsp+34h] [rbp-75h] BYREF
  char v47; // [rsp+38h] [rbp-71h] BYREF
  __int64 v48; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-49h] BYREF
  void *v51; // [rsp+70h] [rbp-39h]
  int v52; // [rsp+78h] [rbp-31h]
  int v53; // [rsp+7Ch] [rbp-2Dh]
  int *v54; // [rsp+80h] [rbp-29h]
  __int64 v55; // [rsp+88h] [rbp-21h]
  const wchar_t *v56; // [rsp+90h] [rbp-19h]
  int v57; // [rsp+98h] [rbp-11h]
  int v58; // [rsp+9Ch] [rbp-Dh]
  __int64 *v59; // [rsp+A0h] [rbp-9h]
  __int64 v60; // [rsp+A8h] [rbp-1h]
  char *v61; // [rsp+B0h] [rbp+7h]
  __int64 v62; // [rsp+B8h] [rbp+Fh]

  if ( ((*((_QWORD *)a2 + 83) >> 61) & 3) != 0 )
    return 0LL;
  v46 = 0;
  v45 = 0;
  RmHamHostGetCurrentState(a2, (union _RM_OPTIMIZATION_STATE *)&v46, (union _RM_OPTIMIZATION_STATE *)&v45);
  if ( (v46 & 0x100) == 0
    || (v45 & 0x100) != 0
    || *((_BYTE *)a2 + 592) == 1 && (*((_QWORD *)a2 + 83) & 0x2000000000000LL) != 0 )
  {
    return 0LL;
  }
  v4 = *((_QWORD *)a2 + 84);
  if ( (v4 & 1) == 0 && ((v4 & 2) == 0 || (*((_QWORD *)a2 + 83) & 0x2000000000000LL) != 0) )
    return 0LL;
  v6 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  *((_QWORD *)a2 + 84) = v6;
  if ( (*((_QWORD *)a2 + 83) & 0x2000000000000LL) == 0 )
    *((_QWORD *)a2 + 84) = v6 & 0xFFFFFFFFFFFFFFFDuLL;
  RmReleaseEnforcementLocks((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 56));
  HampAppAcquireLockExclusive(a1);
  for ( i = *((_DWORD *)a1 + 154); (i & 0x100000) != 0; i = *((_DWORD *)a1 + 154) )
  {
    HampAppTraceWaitForLicenseWorkerForHost(a2);
    HampAppWaitForFlagChange(a1);
  }
  v8 = i | 0x100000;
  v9 = (v8 & 0xFF9FFFFF) >> 23;
  *((_DWORD *)a1 + 154) = v8 & 0xFE1FFFFF;
  v46 = v9 & 3;
  HampAppReleaseLockExclusive(a1);
  v45 = 0;
  v10 = 0;
  for ( j = HampAppGetFirstHost(a1); ; j = HampAppGetNextHost(v12) )
  {
    v12 = j;
    if ( !j )
      break;
    v37 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v37) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
      v10 = v45;
    }
    RtlAcquireSRWLockShared(v12);
    if ( HampHostVetoesSuspendLicense(v12) )
    {
      HampHostReleaseLockSharedEx(v12, v39);
      RmHamHostDereference(v12);
      HampAppAcquireLockExclusive(a1);
      v44 = *((_DWORD *)a1 + 154) ^ (*((_DWORD *)a1 + 154) ^ v8) & 0x600000;
      *((_DWORD *)a1 + 154) = v44 ^ (v44 ^ (v9 << 23)) & 0x1800000;
      HampAppReleaseLockExclusive(a1);
      HampAppCheckQueueHostWorkersPostLicensing(a1, a2);
      goto LABEL_32;
    }
    v10 |= (*((_QWORD *)v12 + 83) >> 49) & 1;
    v45 = v10;
    if ( HampLockTrackerId != -1 )
    {
      v40 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v41 = *v40;
      if ( (*v40 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v24 = v40[2]-- == 1;
      if ( v24 )
        *v40 = v41 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    RtlReleaseSRWLockShared(v12);
  }
  if ( (unsigned __int8)((__int64 (*)(void))IsPackageRundownNotificationForStoreLicense2Present)() )
  {
    v14 = HampAppTryReferenceMixedHost(a1);
    v15 = v14;
    if ( v14 )
      v16 = *((_QWORD *)v14 + 72);
    else
      v16 = 0LL;
    v17 = PackageSuspendedNotificationForStoreLicense2(
            (char *)a1 + 96,
            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL) + 160LL) + 88LL),
            *((_QWORD *)a1 + 11) + 228LL,
            v16);
    if ( v17 >= 0 )
      v17 = 0;
    if ( v15 )
      RmHamHostDereference(v15);
  }
  else
  {
    v17 = 0;
  }
  v18 = -1LL;
  v19 = &TraceLoggingMetadata;
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v34 = (const wchar_t *)((char *)a2 + 24);
    v47 = v46;
    v48 = *((_QWORD *)a2 - 3);
    v61 = &v47;
    v59 = &v48;
    v45 = v17;
    v62 = 1LL;
    v60 = 8LL;
    if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
    {
      v34 = &word_1800BBB1C;
      v36 = 2;
    }
    else
    {
      v35 = -1LL;
      do
        v24 = v34[++v35] == 0;
      while ( !v24 );
      v36 = 2 * v35 + 2;
    }
    v57 = v36;
    v56 = v34;
    v54 = &v45;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v58 = 0;
    v55 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v51 = &unk_1800D0694;
    UserData.Reserved = 2;
    v52 = 65;
    v53 = 1;
    v46 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  if ( !v10 )
  {
    if ( !(unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present(v13, v19)
      || (v20 = PackageRundownNotificationForStoreLicense2(
                  (char *)a1 + 96,
                  *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL) + 160LL) + 88LL),
                  *((_QWORD *)a1 + 11) + 228LL),
          v20 >= 0) )
    {
      v20 = 0;
    }
    if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
    {
      v48 = *((_QWORD *)a2 - 3);
      v42 = (const wchar_t *)((char *)a2 + 24);
      v45 = v20;
      v59 = &v48;
      v60 = 8LL;
      if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
      {
        v42 = &word_1800BBB1C;
        v43 = 2;
      }
      else
      {
        do
          v24 = v42[++v18] == 0;
        while ( !v24 );
        v43 = 2 * v18 + 2;
      }
      v56 = v42;
      v57 = v43;
      v54 = &v45;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E12B8;
      v58 = 0;
      v55 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 8LL;
      UserData.Size = *(unsigned __int16 *)off_1800E12B8;
      v51 = &unk_1800D0878;
      UserData.Reserved = 2;
      v52 = 55;
      v53 = 1;
      v46 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  for ( k = HampAppGetFirstHost(a1); k; k = HampAppGetNextHost(k) )
  {
    if ( k != a2 )
    {
      v30 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v31 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v30) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *v31 |= 2uLL;
        ++v31[2];
      }
      RtlAcquireSRWLockExclusive(k);
      *((_DWORD *)k + 2) = GetCurrentThreadId();
      HampHostCheckQueueStateWorker(k, 0);
      if ( HampLockTrackerId != -1 )
      {
        v32 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v33 = *v32;
        if ( (*v32 & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v24 = v32[2]-- == 1;
        if ( v24 )
          *v32 = v33 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *((_DWORD *)k + 2) = 0;
      RtlReleaseSRWLockExclusive(k);
    }
  }
LABEL_32:
  HampAppAcquireLockExclusive(a1);
  HampAppExitLicenseWorker(a1);
  if ( HampLockTrackerId != -1 )
  {
    v22 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v23 = *v22;
    if ( (*v22 & 0x20) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v24 = v22[6]-- == 1;
    if ( v24 )
      *v22 = v23 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *((_DWORD *)a1 + 148) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 584);
  v25 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v26 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v25) )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v26 |= 1uLL;
    ++v26[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v28 = HampLockTrackerId;
  dword_1800E3390 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v29 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v28) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v29 |= 2uLL;
    ++v29[2];
  }
  RtlAcquireSRWLockExclusive(a2);
  *((_DWORD *)a2 + 2) = GetCurrentThreadId();
  return 1LL;
}
