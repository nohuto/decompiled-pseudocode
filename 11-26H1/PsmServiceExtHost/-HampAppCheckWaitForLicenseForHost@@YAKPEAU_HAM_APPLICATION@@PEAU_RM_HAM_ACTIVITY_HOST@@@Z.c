/*
 * XREFs of ?HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180024610
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
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026E1C (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180026F0C (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E540 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180067138 (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x18006FCDC (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007E560 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppCheckWaitForLicenseForHost(struct _HAM_APPLICATION *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  DWORD v3; // r14d
  __int64 v5; // rsi
  unsigned int v6; // r15d
  _QWORD *Value; // rbx
  unsigned int v8; // ebx
  __int64 *v9; // rax
  __int64 v10; // rdx
  bool v11; // zf
  unsigned int v12; // ecx
  struct _RM_HAM_ACTIVITY_HOST *v14; // rax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rbx
  __int64 v16; // r9
  NTSTATUS v17; // r15d
  struct _RM_HAM_ACTIVITY_HOST *i; // rbx
  DWORD v19; // esi
  _QWORD *v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rdx
  const wchar_t *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  _DWORD v26[2]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v27; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  void *v30; // [rsp+60h] [rbp-19h]
  int v31; // [rsp+68h] [rbp-11h]
  int v32; // [rsp+6Ch] [rbp-Dh]
  _DWORD *v33; // [rsp+70h] [rbp-9h]
  __int64 v34; // [rsp+78h] [rbp-1h]
  const wchar_t *v35; // [rsp+80h] [rbp+7h]
  int v36; // [rsp+88h] [rbp+Fh]
  int v37; // [rsp+8Ch] [rbp+13h]
  __int64 *v38; // [rsp+90h] [rbp+17h]
  __int64 v39; // [rsp+98h] [rbp+1Fh]

  v3 = HampLockTrackerId;
  v5 = *((_QWORD *)a2 + 83) >> 61;
  v6 = v5 & 3;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockShared((char *)a1 + 584);
  v8 = (*((_DWORD *)a1 + 154) >> 23) & 3;
  if ( HampLockTrackerId != -1 )
  {
    v9 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v10 = *v9;
    if ( (*v9 & 0x20) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v11 = v9[6]-- == 1;
    if ( v11 )
      *v9 = v10 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 584);
  if ( v8 >= v6 )
    return 0LL;
  RmReleaseEnforcementLocks((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 56));
  HampAppAcquireLockExclusive(a1);
  while ( 1 )
  {
    v12 = *((_DWORD *)a1 + 154);
    if ( ((v12 >> 23) & 3) >= v6 || ((v12 >> 21) & 3) < v6 )
    {
      HampAppReleaseLockExclusive(a1);
      goto LABEL_12;
    }
    if ( (v12 & 0x100000) == 0 )
      break;
    HampAppTraceWaitForLicenseWorkerForHost(a2);
    HampAppWaitForFlagChange(a1);
  }
  *((_DWORD *)a1 + 154) = v12 | 0x100000;
  HampAppReleaseLockExclusive(a1);
  if ( (unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present() )
  {
    v14 = HampAppTryReferenceMixedHost(a1);
    v15 = v14;
    if ( v14 )
      v16 = *((_QWORD *)v14 + 72);
    else
      v16 = 0LL;
    v17 = EnsureStoreLicenseForPackageActivation2(
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
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v23 = (const wchar_t *)((char *)a2 + 24);
    v27 = *((_QWORD *)a2 - 3);
    v38 = &v27;
    v26[0] = v17;
    v39 = 8LL;
    if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
    {
      v23 = &word_1800BBB1C;
      v25 = 2;
    }
    else
    {
      v24 = -1LL;
      do
        v11 = v23[++v24] == 0;
      while ( !v11 );
      v25 = 2 * v24 + 2;
    }
    v36 = v25;
    v35 = v23;
    v33 = v26;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v37 = 0;
    v34 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v30 = &unk_1800D09B5;
    UserData.Reserved = 2;
    v31 = 54;
    v32 = 1;
    v26[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  if ( v17 < 0 )
  {
    HampAppRequestLicensingActivityStops(a1, v17);
    HampAppAcquireLockExclusive(a1);
  }
  else
  {
    HampAppAcquireLockExclusive(a1);
    *((_DWORD *)a1 + 154) ^= (*((_DWORD *)a1 + 154) ^ ((_DWORD)v5 << 23)) & 0x1800000;
  }
  HampAppExitLicenseWorker(a1);
  HampAppReleaseLockExclusive(a1);
  for ( i = HampAppGetFirstHost(a1); i; i = HampAppGetNextHost(i) )
  {
    if ( i != a2 )
    {
      v19 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v20 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v19) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *v20 |= 2uLL;
        ++v20[2];
      }
      RtlAcquireSRWLockExclusive(i);
      *((_DWORD *)i + 2) = GetCurrentThreadId();
      HampHostCheckQueueStateWorker(i, 0);
      if ( HampLockTrackerId != -1 )
      {
        v21 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v22 = *v21;
        if ( (*v21 & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v11 = v21[2]-- == 1;
        if ( v11 )
          *v21 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *((_DWORD *)i + 2) = 0;
      RtlReleaseSRWLockExclusive(i);
    }
  }
LABEL_12:
  RmAcquireEnforcementLocks((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 56));
  return 1LL;
}
