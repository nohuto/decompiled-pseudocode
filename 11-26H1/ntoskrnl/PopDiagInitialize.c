/*
 * XREFs of PopDiagInitialize @ 0x140CD7AF8
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14060C084 (PopDiagTraceThermalZoneEnumeration.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopDiagSleepStudyInitialize @ 0x1407D547C (PopDiagSleepStudyInitialize.c)
 *     EtwSetInformation @ 0x14082E9F0 (EtwSetInformation.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopTransitionTelemetryOsState @ 0x140B23108 (PopTransitionTelemetryOsState.c)
 */

__int64 PopDiagInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct _KLOCK_ENTRIES *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  struct _SINGLE_LIST_ENTRY *i; // rbx
  __int64 UnbiasedInterruptTime; // rax
  char v8; // cl
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  int v12; // [rsp+38h] [rbp-39h] BYREF
  int v13; // [rsp+3Ch] [rbp-35h] BYREF
  int v14; // [rsp+40h] [rbp-31h] BYREF
  __int64 v15; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+58h] [rbp-19h] BYREF
  int *v17; // [rsp+78h] [rbp+7h]
  __int64 v18; // [rsp+80h] [rbp+Fh]
  int *v19; // [rsp+88h] [rbp+17h]
  __int64 v20; // [rsp+90h] [rbp+1Fh]
  int *v21; // [rsp+98h] [rbp+27h]
  __int64 v22; // [rsp+A0h] [rbp+2Fh]
  __int64 *v23; // [rsp+A8h] [rbp+37h]
  __int64 v24; // [rsp+B0h] [rbp+3Fh]

  if ( EtwRegister(&POP_ETW_PROVIDER, (PETWENABLECALLBACK)PopDiagTraceControlCallback, &PopDiagHandle, &PopDiagHandle) >= 0 )
  {
    PopDiagHandleRegistered = 1;
    EtwSetInformation(
      PopDiagHandle,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  }
  PopDiagDeviceRundownWorkItem.Parameter = 0LL;
  PopDiagDeviceRundownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDiagDeviceRundownWorker;
  PopDiagDeviceRundownWorkItem.List.Flink = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
    (__int64)&dword_140E07560,
    (__int64)PopDiagTraceControlCallback,
    (__int64)&dword_140E07560);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E07598, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E07608, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E075D0, 0LL, 0LL);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  if ( PopTriggerDiagHandleRegistered )
  {
    PopAcquireRwLockShared(&PopPolicyDeviceLock, v0, v1, v2);
    for ( i = PpmIdlePolicyLock.SystemAffinityTokenListHead.Next;
          i != &PpmIdlePolicyLock.SystemAffinityTokenListHead;
          i = i->Next )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&i[54], v3, v4, v5);
      if ( (BYTE1(i[8].Next) & 0x12) == 2 )
        PopDiagTraceThermalZoneEnumeration((__int64)i);
      PopReleaseRwLock((struct _KTHREAD *)&i[54]);
    }
    PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
  }
  PopDiagSleepStudyInitialize();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E081E0, 0LL, 0LL) >= 0 )
    PotsPowerTransitionsHandleRegistered = 1;
  qword_140F0F768 = 0LL;
  PopTelemetryOsState = 0LL;
  qword_140F0F778 = MEMORY[0xFFFFF78000000014];
  qword_140F0F780 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_140F0F7AC = v8;
  qword_140F0F788 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1, v9, v10);
  PdcTaskClientRegister(68LL, &PopSleepStudyTaskClientActivator);
  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v12 = 0;
    v17 = &v12;
    v18 = 4LL;
    v19 = &v13;
    v13 = 0;
    v21 = &v14;
    v20 = 4LL;
    v23 = &v15;
    v14 = 0;
    v22 = 4LL;
    v15 = 0x1000000LL;
    v24 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07560,
      (unsigned __int8 *)&dword_14004D64C,
      0LL,
      0LL,
      6u,
      &v16);
  }
  return 0LL;
}
