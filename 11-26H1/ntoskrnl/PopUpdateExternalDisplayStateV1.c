/*
 * XREFs of PopUpdateExternalDisplayStateV1 @ 0x1407E2648
 * Callers:
 *     PopUpdateExternalDisplayState @ 0x140B777F0 (PopUpdateExternalDisplayState.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 *     PopDiagTraceExternalDisplayState @ 0x1407D668C (PopDiagTraceExternalDisplayState.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopUpdateExternalDisplayStateV1(__int64 a1, __int64 a2)
{
  char v2; // bl
  char v3; // dl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+20h] [rbp-8h]

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  PopConsoleExternalDisplayConnected = v2;
  v3 = 1;
  if ( v2 )
  {
    v3 = 1;
    if ( PopUsb4DisplayPresent )
      v3 = 3;
  }
  PopDiagTraceExternalDisplayState(v2, v3);
  PopQueueWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, DelayedWorkQueue);
  return PopReleasePolicyLock(v5, v4, v6, v7, v9);
}
