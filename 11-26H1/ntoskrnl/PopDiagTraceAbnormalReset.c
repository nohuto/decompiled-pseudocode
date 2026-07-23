/*
 * XREFs of PopDiagTraceAbnormalReset @ 0x14060ABE4
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PopReadRegKeyValue @ 0x1404E60C8 (PopReadRegKeyValue.c)
 *     Feature_WerOfflineDumpTriggerAlways__private_IsEnabledDeviceUsageNoInline @ 0x1405C89BC (Feature_WerOfflineDumpTriggerAlways__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_WerOfflineDumpTriggerWnf__private_IsEnabledDeviceUsageNoInline @ 0x14060AAE4 (Feature_WerOfflineDumpTriggerWnf__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

char __fastcall PopDiagTraceAbnormalReset(int a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  WNF_STATE_NAME StateName; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF
  int v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = a1;
  IsEnabledDeviceUsageNoInline = Feature_WerOfflineDumpTriggerAlways__private_IsEnabledDeviceUsageNoInline();
  if ( !IsEnabledDeviceUsageNoInline )
  {
    IsEnabledDeviceUsageNoInline = Feature_WerOfflineDumpTriggerWnf__private_IsEnabledDeviceUsageNoInline();
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( LODWORD(stru_140F12EA0.KcsanThread) )
      {
        if ( HIDWORD(stru_140F12EA0.KcsanThread) )
        {
          if ( stru_140F12EA0.SchedulerAssistYieldCounter )
          {
            StateName.Data[0] = 0;
            LOBYTE(IsEnabledDeviceUsageNoInline) = PopReadRegKeyValue(
                                                     L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl",
                                                     L"EnableOfflineDumps",
                                                     4uLL,
                                                     4,
                                                     &StateName);
            if ( StateName.Data[0] )
            {
              StateName = (WNF_STATE_NAME)WNF_WER_OFFLINE_DUMP_ABNORMAL_RESET;
              LOBYTE(IsEnabledDeviceUsageNoInline) = ZwUpdateWnfStateData(&StateName, 0LL, 0, 0LL, 0LL, 0, 0);
            }
          }
        }
      }
    }
  }
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ABNORMAL_RESET);
    if ( (_BYTE)IsEnabledDeviceUsageNoInline )
    {
      UserData.Ptr = (ULONGLONG)&v5;
      *(_QWORD *)&UserData.Size = 4LL;
      LOBYTE(IsEnabledDeviceUsageNoInline) = EtwWriteEx(
                                               PopDiagHandle,
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
