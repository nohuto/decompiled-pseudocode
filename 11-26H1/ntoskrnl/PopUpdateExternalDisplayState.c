/*
 * XREFs of PopUpdateExternalDisplayState @ 0x140B777F0
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     PopDiagTraceExternalDisplayState @ 0x1407D668C (PopDiagTraceExternalDisplayState.c)
 *     PopUpdateExternalDisplayStateV1 @ 0x1407E2648 (PopUpdateExternalDisplayStateV1.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopUpdateExternalDisplayState(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+20h] [rbp-8h]

  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    LOBYTE(v3) = a1;
    return PopUpdateExternalDisplayStateV1(v3, v2);
  }
  else
  {
    PopAcquirePolicyLock(v3, v2);
    PopConsoleExternalDisplayConnected = a1;
    PopDiagTraceExternalDisplayState(a1, 0);
    PopQueueWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, DelayedWorkQueue);
    return PopReleasePolicyLock(v6, v5, v7, v8, v9);
  }
}
