/*
 * XREFs of ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002D4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000CBD8 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000CC30 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180014294 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800142F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x18002DBDC (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 *     ?HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18003DFCC (-HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18003F124 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18006CB0C (-HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006E74C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BE98 (-HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampPdcPlmWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // esi
  DWORD CurrentThreadId; // eax
  struct _HOST_ACTIVITY_MANAGER *v7; // rcx
  int v8; // r15d
  unsigned int v9; // edi
  unsigned int updated; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  struct _HOST_ACTIVITY_MANAGER *v15; // rcx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  struct _HOST_ACTIVITY_MANAGER *v19; // [rsp+38h] [rbp-89h] BYREF
  __int64 v20; // [rsp+40h] [rbp-81h]
  __int64 v21; // [rsp+48h] [rbp-79h] BYREF
  __int64 v22; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v23[144]; // [rsp+58h] [rbp-69h] BYREF

  memset_0(v23, 0, 0x88uLL);
  v4 = 0;
  v20 = 0LL;
  v5 = 0;
  v21 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800D0477);
  v19 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  HampManagerAcquireLockExclusive(v19);
  CurrentThreadId = GetCurrentThreadId();
  v7 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 18) = CurrentThreadId;
  HampManagerReleaseLockExclusive(v7);
  *((_QWORD *)a2 + 5) = 0LL;
  v8 = 0;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_DWORD *)a2 + 14) |= 1u;
  while ( 1 )
  {
    HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
    if ( !*((_DWORD *)a2 + 21) )
      break;
    v5 = CempQueryUnbiasedInterruptTimeMs64() - *((_DWORD *)a2 + 21);
    v21 = *((_QWORD *)a2 + 12);
    HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
    v9 = -1;
    if ( v5 >= 0x57E40 )
    {
      if ( !v8 )
      {
        v8 = 1;
        v4 = 1;
        HampManagerLogCaptureState(v19);
        MicrosoftTelemetryAssertTriggeredNoArgs();
      }
    }
    else
    {
      v9 = 360000 - v5;
    }
    updated = HampPdcPlmUpdateState((struct _HAM_PDC_CONTEXT *)a2, v5, v4);
    v4 = 0;
    if ( !updated )
      goto LABEL_19;
    v11 = *((_DWORD *)a2 + 19);
    if ( v5 < v11 )
    {
      v12 = v11 - v5;
      if ( v9 >= v12 )
        v9 = v12;
    }
    v13 = *((_DWORD *)a2 + 20);
    if ( v5 < v13 )
    {
      v14 = v13 - v5;
      if ( v9 >= v14 )
        v9 = v14;
    }
    v20 = -10000LL * v9;
    RtlWaitOnAddress(a2 + 96, &v21, 8LL);
  }
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
LABEL_19:
  HampSlsEndScenarioInstance((struct _HAM_SLEEP_STUDY_CONTEXT *)(a2 + 24));
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  v15 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 18) = 0;
  HampManagerReleaseLockExclusive(v15);
  HampSystemNotificationClientAcknowledge(*((void **)a2 + 1), v16);
  if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 0x400000000008LL) )
  {
    v22 = 0x1000000LL;
    LODWORD(v19) = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E12B0,
      (unsigned int)&unk_1800D038D,
      v17,
      v18,
      (__int64)&v19,
      (__int64)&v22);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 8LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800D0502);
}
