/*
 * XREFs of PopAdaptiveStandbyInitialize @ 0x1407E44EC
 * Callers:
 *     PopInitPlatformSettings @ 0x140CD5B14 (PopInitPlatformSettings.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     IoSetActivityIdThread @ 0x14048B360 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140493970 (IoClearActivityIdThread.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     PopInitializeIRTimer @ 0x140603270 (PopInitializeIRTimer.c)
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x14060E86C (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 *     RtlIsMultiSessionSku @ 0x140A968C0 (RtlIsMultiSessionSku.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
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
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
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
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E08138, 0LL, 0LL);
  EtwActivityIdControl(3u, &ActivityId);
  v0 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v22 = (GUID *)v0;
  if ( (unsigned int)dword_140E08138 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)&dword_14004FF2C,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v23);
  qword_140F0BD18 = 0LL;
  PopAdaptiveStandbyLock = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v1, v2, v3);
  if ( SSHSupportIsPlatformAoAc() && RtlIsMultiSessionSku() )
  {
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      DWORD1(xmmword_140F0BB28) = 1;
      *((_QWORD *)&xmmword_140F0BB28 + 1) = 0xFFFFFFFF00000001uLL;
      dword_140F0BB38 = 10800;
    }
    else
    {
      dword_140F0BB1C = 1;
      dword_140F0BB24 = -1;
      dword_140F0BB20 = 1;
      LODWORD(xmmword_140F0BB28) = 10800;
    }
    LODWORD(xmmword_140F0BB68) = xmmword_140F0BB68 | 1;
    *((_QWORD *)&xmmword_140F0BB68 + 1) = -1LL;
    qword_140F0BCF0 = (__int64)PopAdaptiveStandbyActionWorker;
    dword_140F0BB78 = 100;
    qword_140F0BCF8 = 0LL;
    qword_140F0BCE0 = 0LL;
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
      PopInitializeIRTimer(
        (__int64)&unk_140F0BC30,
        (__int64)PopAdaptiveStandbyPolicyTimerCallback,
        v4,
        (__int64)PopAdaptiveStandbyPolicyTimerWorker,
        Handle,
        6,
        34);
    v5 = 0LL;
    v6 = (LPCGUID *)&PopAdaptiveStandbyPowerSettings;
    do
    {
      v7 = PoRegisterPowerSettingCallback(
             0LL,
             *v6,
             PopAdaptiveStandbyPowerSettingCallback,
             &PopAdaptiveStandbyPowerSettings + 3 * v5,
             (PVOID *)&PopAdaptiveStandbyPowerSettings + 3 * v5 + 2);
      if ( v7 < 0 )
        goto LABEL_27;
      v5 = (unsigned int)(v5 + 1);
      v6 += 3;
    }
    while ( (unsigned int)v5 < 7 );
    v8 = 0;
    v9 = v20;
    do
    {
      v7 = ExSubscribeWnfStateChange((unsigned int)&v19, *v9, 1, 0, (__int64)PopAdaptiveStandbyWnfCallback, 0LL);
      if ( v7 < 0 )
        goto LABEL_27;
      ++v8;
      ++v9;
    }
    while ( v8 < 3 );
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      v11 = Feature_AdaptiveHibernateEnhancements__private_GetVariant(v10) - 6;
      if ( !v11 )
      {
        v14 = dword_140E0C528;
        v15 = xmmword_140E0C500;
        PopAdaptiveStandbyRegions = PopAdaptiveStandbyRegionsOEM;
        xmmword_140E0C450 = xmmword_140E0C510;
        v16 = qword_140E0C520;
        goto LABEL_24;
      }
      v12 = v11 - 1;
      if ( !v12 || (v13 = v12 - 1) == 0 )
      {
        v14 = dword_140E0C4A8;
        v15 = xmmword_140E0C480;
        PopAdaptiveStandbyRegions = PopAdaptiveStandbyRegionsT3;
        xmmword_140E0C450 = xmmword_140E0C490;
        v16 = qword_140E0C4A0;
        goto LABEL_24;
      }
      if ( (unsigned int)(v13 - 1) <= 1 )
      {
        v14 = dword_140E0C4E8;
        v15 = xmmword_140E0C4C0;
        PopAdaptiveStandbyRegions = PopAdaptiveStandbyRegionsT35;
        xmmword_140E0C450 = xmmword_140E0C4D0;
        v16 = qword_140E0C4E0;
LABEL_24:
        xmmword_140E0C440 = v15;
        dword_140E0C468 = v14;
        qword_140E0C460 = v16;
      }
    }
    PopAdaptiveStandbyContext = 1;
    v7 = 0;
    goto LABEL_27;
  }
  v7 = -1073741637;
LABEL_27:
  PopReleaseRwLock((struct _KTHREAD *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08138 > 5 )
  {
    v24 = &v19;
    v19 = v7;
    v25 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)word_14004FE8A,
      &ActivityId,
      v22,
      3u,
      v23);
  }
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v22);
}
