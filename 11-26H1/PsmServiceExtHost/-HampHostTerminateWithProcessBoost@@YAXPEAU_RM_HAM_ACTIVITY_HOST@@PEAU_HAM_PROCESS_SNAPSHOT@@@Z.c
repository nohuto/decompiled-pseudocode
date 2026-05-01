/*
 * XREFs of ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180017954
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000CEE0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001684 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTempl.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampSystemWaitForSingleObject@@YAJPEAXK@Z @ 0x180017CC8 (-HampSystemWaitForSingleObject@@YAJPEAXK@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilQueryTerminateTimeouts@@YAXPEAK00@Z @ 0x180017D5C (-HampUtilQueryTerminateTimeouts@@YAXPEAK00@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampProcessSnapshotBoostPriority@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@W4_RM_EXECUTION_SPEED@@@Z @ 0x180065018 (-HampProcessSnapshotBoostPriority@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@W4_RM_EXECUTION_SPEED@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006E74C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18007921C (-HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampHostTerminateWithProcessBoost(struct _RM_HAM_ACTIVITY_HOST *a1, struct _HAM_PROCESS_SNAPSHOT *a2)
{
  int v3; // r13d
  NTSTATUS v4; // r15d
  int v5; // r12d
  int v6; // r14d
  unsigned int v7; // ebx
  int v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // esi
  unsigned int i; // ecx
  int v12; // r15d
  __int64 *v13; // r12
  DWORD v14; // r14d
  _QWORD *Value; // rbx
  unsigned int v16; // edx
  int v17; // ebx
  DWORD CurrentThreadId; // eax
  DWORD v19; // ecx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  BOOL v26; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-45h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v30; // [rsp+50h] [rbp-39h]
  const wchar_t *v31; // [rsp+58h] [rbp-31h] BYREF
  struct _HAM_PROCESS_SNAPSHOT *v32; // [rsp+60h] [rbp-29h] BYREF
  __int64 UnbiasedInterruptTimeMs64; // [rsp+68h] [rbp-21h] BYREF
  __int64 v34; // [rsp+70h] [rbp-19h] BYREF
  __int128 v35; // [rsp+80h] [rbp-9h] BYREF
  __int128 v36; // [rsp+90h] [rbp+7h]

  v32 = a2;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v3 = -1;
  v4 = 1;
  v34 = 0LL;
  LODWORD(v31) = 1;
  v35 = 0LL;
  v36 = 0LL;
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
  v5 = UnbiasedInterruptTimeMs64;
  HampUtilQueryTerminateTimeouts(&v29, &v28, &v27);
  v26 = 0;
  v6 = 0;
  v30 = 0;
  while ( 1 )
  {
    v7 = -1;
    NtSetInformationJobObject(*((HANDLE *)a1 + 72), JobObjectExtendedLimitInformation|0x10, 0LL, 0);
    NtTerminateJobObject(*((HANDLE *)a1 + 72), v4);
    v8 = CempQueryUnbiasedInterruptTimeMs64();
    v9 = v27;
    v10 = v8 - v5;
    for ( i = 1; i <= 3; ++i )
    {
      if ( v10 < v9 )
      {
        v7 = v9 - v10;
        break;
      }
      v9 += v27;
    }
    if ( v10 < v28 )
    {
      if ( v7 >= v28 - v10 )
        v7 = v28 - v10;
    }
    else
    {
      LODWORD(v31) = 1073807364;
    }
    if ( v10 < v29 )
    {
      v12 = 0;
      if ( v7 >= v29 - v10 )
        v7 = v29 - v10;
    }
    else
    {
      v12 = 1;
    }
    if ( v7 == -1 )
    {
      v13 = 0LL;
      if ( !v6 )
      {
        v30 = 1;
        HampHostReportTerminateHang(a1, v32);
      }
    }
    else
    {
      v13 = &v34;
      v34 = -10000LL * v7;
    }
    v14 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
    }
    CempLockAcquireExclusive(a1);
    if ( (unsigned int)HampSystemWaitForSingleObject(*((void **)a1 + 72), v16) != 258 )
      break;
    if ( v12
      && ((HampHostComputeStaticEnforcementSettings(
             (__m128i *)a1,
             (struct _RM_ENFORCEMENT_SETTINGS *)&v35,
             0LL,
             0LL,
             0LL),
           v3 == -1)
       || v3 < SDWORD2(v36)) )
    {
      HampHostReleaseLockExclusive(a1);
      v3 = DWORD2(v36);
      HampProcessSnapshotBoostPriority(v32, DWORD2(v36));
    }
    else
    {
      *((_DWORD *)a1 + 2) = 0;
      v17 = RtlSleepConditionVariableSRW((char *)a1 + 696, a1, v13, 0LL);
      CurrentThreadId = GetCurrentThreadId();
      v19 = HampLockTrackerId;
      *((_DWORD *)a1 + 2) = CurrentThreadId;
      v26 = v17 == 258;
      if ( v19 != -1 )
      {
        v20 = (__int64 *)TlsGetValue(v19);
        v21 = *v20;
        if ( (*v20 & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        if ( v20[2]-- == 1 )
          *v20 = v21 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *((_DWORD *)a1 + 2) = 0;
      RtlReleaseSRWLockExclusive(a1);
    }
    v6 = v30;
    v4 = (int)v31;
    v5 = UnbiasedInterruptTimeMs64;
  }
  if ( v26 )
  {
    if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 0x400000000008LL) )
    {
      v32 = (struct _HAM_PROCESS_SNAPSHOT *)*((_QWORD *)a1 - 3);
      v31 = (const wchar_t *)((char *)a1 + 24);
      UnbiasedInterruptTimeMs64 = 0x1000000LL;
      v26 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v23,
        (__int64)&unk_1800CD931,
        v24,
        v25,
        &v31,
        (__int64)&v32,
        (__int64)&v26,
        (__int64)&UnbiasedInterruptTimeMs64);
    }
    if ( v10 >= 0xEA60 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  HampHostReleaseLockExclusive(a1);
}
