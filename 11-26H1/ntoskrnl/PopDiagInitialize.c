/*
 * XREFs of PopDiagInitialize @ 0x140CD1950
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140446880 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1406094C4 (PopDiagTraceThermalZoneEnumeration.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopDiagSleepStudyInitialize @ 0x1407D23DC (PopDiagSleepStudyInitialize.c)
 *     EtwSetInformation @ 0x1408287B0 (EtwSetInformation.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopTransitionTelemetryOsState @ 0x140B20D08 (PopTransitionTelemetryOsState.c)
 */

__int64 PopDiagInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct _KLOCK_ENTRIES *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  unsigned __int64 *i; // rbx
  unsigned __int64 UnbiasedInterruptTime; // rax
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

  if ( EtwRegister(
         &POP_ETW_PROVIDER,
         (PETWENABLECALLBACK)PopDiagTraceControlCallback,
         &PopSleepstudySessionLock.PriorityFloorCounts[16],
         (PREGHANDLE)&PopSleepstudySessionLock.PriorityFloorCounts[16]) >= 0 )
  {
    byte_140E67628 = 1;
    EtwSetInformation(
      *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  }
  PopSleepstudySessionLock.ReadTransferCount = 0LL;
  PopSleepstudySessionLock.OtherOperationCount = (__int64)PopDiagDeviceRundownWorker;
  PopSleepstudySessionLock.ReadOperationCount = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
    (__int64)&dword_140E07598,
    (__int64)PopDiagTraceControlCallback,
    (__int64)&dword_140E07598);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E07560, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E075D0, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E07608, 0LL, 0LL);
  if ( EtwRegister(
         &POP_TRIGGER_ETW_PROVIDER,
         0LL,
         0LL,
         (PREGHANDLE)&PopSleepstudySessionLock.AbCompletedIoQoSBoostCount) >= 0 )
    byte_140E67614 = 1;
  if ( byte_140E67614 )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)&unk_140F10E30.Header.Lock, v0, v1, v2);
    for ( i = (unsigned __int64 *)stru_140F10828.FirstArgument;
          i != (unsigned __int64 *)&stru_140F10828.FirstArgument;
          i = (unsigned __int64 *)*i )
    {
      PopAcquireRwLockExclusive(i + 54, v3, v4, v5);
      if ( (*((_BYTE *)i + 65) & 0x12) == 2 )
        PopDiagTraceThermalZoneEnumeration((__int64)i);
      PopReleaseRwLock((struct _KTHREAD *)(i + 54));
    }
    PopReleaseRwLock(&unk_140F10E30);
  }
  PopDiagSleepStudyInitialize();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E081F0, 0LL, 0LL) >= 0 )
    PotsPowerTransitionsHandleRegistered = 1;
  PopSleepstudySessionLock.SchedulerAssist = 0LL;
  PopSleepstudySessionLock.TracingPrivate[0] = 0LL;
  *(_QWORD *)&PopSleepstudySessionLock.ReservedPreviousReadyTimeValue = MEMORY[0xFFFFF78000000014];
  PopSleepstudySessionLock.KernelWaitTime = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  BYTE4(PopSleepstudySessionLock.KernelShadowStack) = v8;
  PopSleepstudySessionLock.UserWaitTime = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1, v9, v10);
  PdcTaskClientRegister(68LL, &PopSleepstudySessionLock.WriteTransferCount);
  if ( (unsigned int)dword_140E07598 > 5 && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)byte_14004CB75, 0LL, 0LL, 6u, &v16);
  }
  return 0LL;
}
