/*
 * XREFs of PopDiagTraceAbnormalReset @ 0x140608034
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     PopReadRegKeyValue @ 0x1404ECAE8 (PopReadRegKeyValue.c)
 *     Feature_WerOfflineDumpTriggerWnf__private_IsEnabledDeviceUsageNoInline @ 0x140607F34 (Feature_WerOfflineDumpTriggerWnf__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

char __fastcall PopDiagTraceAbnormalReset(int a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v3; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF
  int v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = a1;
  IsEnabledDeviceUsageNoInline = Feature_WerOfflineDumpTriggerWnf__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( LODWORD(stru_140F12D20.KcsanThread) )
    {
      if ( HIDWORD(stru_140F12D20.KcsanThread) )
      {
        if ( stru_140F12D20.SchedulerAssistYieldCounter )
        {
          LODWORD(v3) = 0;
          LOBYTE(IsEnabledDeviceUsageNoInline) = PopReadRegKeyValue(
                                                   L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl",
                                                   L"EnableOfflineDumps",
                                                   4uLL,
                                                   4,
                                                   &v3);
          if ( (_DWORD)v3 )
          {
            v3 = WNF_WER_OFFLINE_DUMP_ABNORMAL_RESET;
            LOBYTE(IsEnabledDeviceUsageNoInline) = ZwUpdateWnfStateData(&v3, 0LL, 0LL, 0LL, 0LL, 0, 0);
          }
        }
      }
    }
  }
  if ( byte_140E67628 )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = EtwEventEnabled(
                                             *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                                             &POP_ETW_EVENT_ABNORMAL_RESET);
    if ( (_BYTE)IsEnabledDeviceUsageNoInline )
    {
      UserData.Ptr = (ULONGLONG)&v5;
      *(_QWORD *)&UserData.Size = 4LL;
      LOBYTE(IsEnabledDeviceUsageNoInline) = EtwWriteEx(
                                               *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
                                               &POP_ETW_EVENT_ABNORMAL_RESET,
                                               0LL,
                                               0,
                                               0LL,
                                               0LL,
                                               1u,
                                               &UserData);
    }
  }
  return IsEnabledDeviceUsageNoInline;
}
