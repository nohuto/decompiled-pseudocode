/*
 * XREFs of ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025F10
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800027E0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023F34 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026554 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800265E4 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026690 (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800266E8 (-HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E540 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x180046400 (-HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserAcquireLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x180046460 (-HampUserAcquireLockShared@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x1800464DC (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180067138 (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     IsUMgrQueryUserContextFromSidPresent @ 0x18006FA28 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x18006FCDC (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007E560 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppCheckQueueLicenseUpgradeForHost(
        struct _HAM_APPLICATION *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  DWORD v3; // r12d
  __int64 v5; // rsi
  unsigned int v6; // r15d
  _QWORD *Value; // rbx
  unsigned int v8; // ecx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  NTSTATUS refreshed; // r12d
  unsigned int i; // eax
  __int64 *v14; // rax
  __int64 v15; // rdx
  bool v16; // zf
  DWORD v17; // edi
  _QWORD *v18; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v20; // edi
  _QWORD *v21; // rbx
  __int64 *v23; // rax
  __int64 v24; // rdx
  const wchar_t *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // r12d
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _BYTE v33[4]; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-75h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-71h] BYREF
  const wchar_t *v36; // [rsp+60h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-49h] BYREF
  void *v39; // [rsp+90h] [rbp-39h]
  int v40; // [rsp+98h] [rbp-31h]
  int v41; // [rsp+9Ch] [rbp-2Dh]
  unsigned __int64 *v42; // [rsp+A0h] [rbp-29h]
  __int64 v43; // [rsp+A8h] [rbp-21h]
  const wchar_t *v44; // [rsp+B0h] [rbp-19h]
  int v45; // [rsp+B8h] [rbp-11h]
  int v46; // [rsp+BCh] [rbp-Dh]
  const wchar_t **v47; // [rsp+C0h] [rbp-9h]
  __int64 v48; // [rsp+C8h] [rbp-1h]
  _BYTE *v49; // [rsp+D0h] [rbp+7h]
  __int64 v50; // [rsp+D8h] [rbp+Fh]

  v3 = HampLockTrackerId;
  v5 = *((_QWORD *)a2 + 83) >> 61;
  v35 = 0LL;
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
  if ( ((*((_DWORD *)a1 + 154) >> 21) & 3u) >= v6 )
  {
    if ( HampLockTrackerId != -1 )
    {
      v23 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v24 = *v23;
      if ( (*v23 & 0x20) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v16 = v23[6]-- == 1;
      if ( v16 )
        *v23 = v24 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    RtlReleaseSRWLockShared((char *)a1 + 584);
    return 0LL;
  }
  HampAppReleaseLockShared(a1);
  RmReleaseEnforcementLocks((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 56));
  HampAppAcquireLockExclusive(a1);
  while ( 1 )
  {
    v8 = *((_DWORD *)a1 + 154);
    if ( ((v8 >> 21) & 3) >= v6 )
      goto LABEL_18;
    if ( (v8 & 0x100000) == 0 )
      break;
    HampAppTraceWaitForLicenseWorkerForHost(a2);
    HampAppWaitForFlagChange(a1);
  }
  *((_DWORD *)a1 + 154) = v8 | 0x100000;
  HampAppReleaseLockExclusive(a1);
  v9 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL);
  HampUserAcquireLockShared((struct _HAM_USER *)v9);
  if ( (*(_BYTE *)(v9 + 192) & 2) != 0 )
  {
    v35 = *(_QWORD *)(v9 + 184);
    HampUserReleaseLockShared((struct _HAM_USER *)v9);
  }
  else
  {
    HampUserReleaseLockShared((struct _HAM_USER *)v9);
    refreshed = HampUserTryRefreshContextToken((struct _HAM_USER *)v9, &v35);
    if ( refreshed < 0 )
      goto LABEL_11;
  }
  refreshed = 0;
LABEL_11:
  for ( i = (refreshed >> 31) & 2; ; i = v34 + 1 )
  {
    v34 = i;
    if ( i >= 2 )
      break;
    if ( v6 == 1 )
    {
      v28 = 4;
    }
    else
    {
      v11 = v6 - 2;
      if ( v6 == 2 )
      {
        v28 = 2;
      }
      else
      {
        if ( v6 != 3 )
        {
          refreshed = -1073741584;
          goto LABEL_54;
        }
        v28 = 1;
      }
    }
    if ( !(unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present(v11, v10) )
      goto LABEL_49;
    if ( (unsigned __int8)IsUMgrQueryUserContextFromSidPresent() )
    {
      if ( IsWellKnownSid((PSID)(*((_QWORD *)a1 + 11) + 228LL), WinLocalAccountAndAdministratorSid|WinCreatorGroupSid) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL) + 160LL) + 88LL) )
        {
          refreshed = -1073741637;
          goto LABEL_54;
        }
        v29 = 0LL;
      }
      else
      {
        v29 = v35;
      }
      refreshed = BeginAcquireStoreLicenseForPackageActivation2((char *)a1 + 96, v28, v29);
      if ( refreshed >= 0 )
      {
LABEL_49:
        refreshed = 0;
        if ( v34 )
        {
          if ( (unsigned int)dword_1800E12B0 <= 4 )
            goto LABEL_15;
          if ( (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 8LL) )
          {
            *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)a2 - 3);
            v36 = (const wchar_t *)((char *)a2 + 24);
            v34 = v31;
            v33[0] = v5 & 3;
            LODWORD(v35) = v32;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
              v30,
              (__int64)&unk_1800D0714,
              v31,
              v32,
              (__int64)&v35,
              &v36,
              (__int64)&EventDescriptor,
              (__int64)v33,
              (__int64)&v34);
          }
        }
        break;
      }
    }
    else
    {
      refreshed = -1073741822;
    }
LABEL_54:
    if ( !v34 )
    {
      refreshed = HampUserTryRefreshContextToken((struct _HAM_USER *)v9, &v35);
      if ( refreshed >= 0 )
        continue;
    }
    break;
  }
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v25 = (const wchar_t *)((char *)a2 + 24);
    v36 = (const wchar_t *)*((_QWORD *)a2 - 3);
    v33[0] = v5 & 3;
    v49 = v33;
    v47 = &v36;
    LODWORD(v35) = refreshed;
    v50 = 1LL;
    v48 = 8LL;
    if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
    {
      v25 = &word_1800BBB1C;
      v27 = 2;
    }
    else
    {
      v26 = -1LL;
      do
        v16 = v25[++v26] == 0;
      while ( !v16 );
      v27 = 2 * v26 + 2;
    }
    v45 = v27;
    v44 = v25;
    v42 = &v35;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    v46 = 0;
    v43 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v39 = &unk_1800D07D5;
    UserData.Reserved = 2;
    v40 = 62;
    v41 = 1;
    v34 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
LABEL_15:
  if ( refreshed < 0 )
  {
    HampAppRequestLicensingActivityStops(a1, refreshed);
    HampAppAcquireLockExclusive(a1);
  }
  else
  {
    HampAppAcquireLockExclusive(a1);
    *((_DWORD *)a1 + 154) ^= (*((_DWORD *)a1 + 154) ^ ((_DWORD)v5 << 21)) & 0x600000;
  }
  HampAppExitLicenseWorker(a1);
LABEL_18:
  if ( HampLockTrackerId != -1 )
  {
    v14 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v15 = *v14;
    if ( (*v14 & 0x20) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v16 = v14[6]-- == 1;
    if ( v16 )
      *v14 = v15 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *((_DWORD *)a1 + 148) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 584);
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v18 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v17) )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v18 |= 1uLL;
    ++v18[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v20 = HampLockTrackerId;
  dword_1800E3390 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v21 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v20) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v21 |= 2uLL;
    ++v21[2];
  }
  RtlAcquireSRWLockExclusive(a2);
  *((_DWORD *)a2 + 2) = GetCurrentThreadId();
  return 1LL;
}
