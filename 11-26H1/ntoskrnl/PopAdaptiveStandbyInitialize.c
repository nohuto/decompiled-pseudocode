/*
 * XREFs of PopAdaptiveStandbyInitialize @ 0x1407DFAF8
 * Callers:
 *     PopInitPlatformSettings @ 0x140CCF964 (PopInitPlatformSettings.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     IoSetActivityIdThread @ 0x140491810 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140499E20 (IoClearActivityIdThread.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C9760 (SSHSupportIsPlatformAoAc.c)
 *     PopInitializeIRTimer @ 0x1406007C0 (PopInitializeIRTimer.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060B92C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x140610CA0 (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 *     RtlIsMultiSessionSku @ 0x140A91D70 (RtlIsMultiSessionSku.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 */

struct _KTHREAD *PopAdaptiveStandbyInitialize()
{
  struct _LIST_ENTRY *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  __int64 v4; // r8
  __int64 v5; // rsi
  LPCGUID *v6; // r14
  NTSTATUS v7; // edi
  unsigned int v8; // esi
  _QWORD *v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int128 v15; // xmm0
  int v16; // eax
  int Handle; // [rsp+28h] [rbp-39h]
  NTSTATUS v19; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v20[3]; // [rsp+50h] [rbp-11h] BYREF
  GUID ActivityId; // [rsp+68h] [rbp+7h] BYREF
  GUID *v22; // [rsp+78h] [rbp+17h]
  struct _EVENT_DATA_DESCRIPTOR v23[2]; // [rsp+80h] [rbp+1Fh] BYREF
  NTSTATUS *v24; // [rsp+A0h] [rbp+3Fh]
  __int64 v25; // [rsp+A8h] [rbp+47h]

  v22 = 0LL;
  v20[0] = &WNF_PO_COMPOSITE_BATTERY;
  v20[1] = &WNF_SEB_AUDIO_ACTIVITY;
  v20[2] = &WNF_PO_SLEEPSTUDY_SESSION_CHANGE;
  ActivityId = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E08090, 0LL, 0LL);
  EtwActivityIdControl(3u, &ActivityId);
  v0 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v22 = (GUID *)v0;
  if ( (unsigned int)dword_140E08090 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)&dword_14004FABC,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v23);
  PopAdaptiveStandbyLock.Header.WaitListHead.Flink = 0LL;
  *(_QWORD *)&PopAdaptiveStandbyLock.Header.Lock = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v1, v2, v3);
  if ( !SSHSupportIsPlatformAoAc() || !(unsigned __int8)RtlIsMultiSessionSku() )
  {
    v7 = -1073741637;
    goto LABEL_31;
  }
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    DWORD1(xmmword_140F0B7A8) = 1;
    *((_QWORD *)&xmmword_140F0B7A8 + 1) = 0xFFFFFFFF00000001uLL;
    dword_140F0B7B8 = 10800;
  }
  else
  {
    dword_140F0B79C = 1;
    dword_140F0B7A4 = -1;
    dword_140F0B7A0 = 1;
    LODWORD(xmmword_140F0B7A8) = 10800;
  }
  LODWORD(xmmword_140F0B7E8) = xmmword_140F0B7E8 | 1;
  *((_QWORD *)&xmmword_140F0B7E8 + 1) = -1LL;
  qword_140F0B960 = (__int64)PopAdaptiveStandbyActionWorker;
  dword_140F0B7F8 = 100;
  qword_140F0B968 = 0LL;
  qword_140F0B950 = 0LL;
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    PopInitializeIRTimer(
      (__int64)&unk_140F0B8A0,
      (__int64)PopAdaptiveStandbyPolicyTimerCallback,
      v4,
      (__int64)PopAdaptiveStandbyPolicyTimerWorker,
      Handle,
      6,
      34);
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
LABEL_14:
    v8 = 0;
    v9 = v20;
    do
    {
      v7 = ExSubscribeWnfStateChange((unsigned int)&v19, *v9, 1, 0, (__int64)PopAdaptiveStandbyWnfCallback, 0LL);
      if ( v7 < 0 )
        goto LABEL_31;
      ++v8;
      ++v9;
    }
    while ( v8 < 3 );
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      v11 = Feature_AdaptiveHibernateEnhancements__private_GetVariant(v10) - 1;
      if ( !v11 )
      {
        v15 = Control;
        v16 = dword_140E0C460;
        goto LABEL_28;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        v15 = HighTreatment1;
        v16 = dword_140E0C478;
        goto LABEL_28;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        v15 = HighTreatment2;
        v16 = dword_140E0C490;
        goto LABEL_28;
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
        v15 = HighTreatment3;
        v16 = dword_140E0C4A8;
        goto LABEL_28;
      }
      if ( v14 == 1 )
      {
        v15 = HighTreatment4;
        v16 = dword_140E0C4C0;
LABEL_28:
        PopAdaptiveStandbyRegions = v15;
        dword_140E0C438 = v16;
      }
    }
    PopAdaptiveStandbyContext = 1;
    v7 = 0;
    goto LABEL_31;
  }
  v5 = 0LL;
  v6 = (LPCGUID *)&PopAdaptiveStandbyPowerSettings;
  while ( 1 )
  {
    v7 = PoRegisterPowerSettingCallback(
           0LL,
           *v6,
           PopAdaptiveStandbyPowerSettingCallback,
           &PopAdaptiveStandbyPowerSettings + 3 * v5,
           (PVOID *)&PopAdaptiveStandbyPowerSettings + 3 * v5 + 2);
    if ( v7 < 0 )
      break;
    v5 = (unsigned int)(v5 + 1);
    v6 += 3;
    if ( (unsigned int)v5 >= 7 )
      goto LABEL_14;
  }
LABEL_31:
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08090 > 5 )
  {
    v24 = &v19;
    v19 = v7;
    v25 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)byte_14004F0CB,
      &ActivityId,
      v22,
      3u,
      v23);
  }
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v22);
}
