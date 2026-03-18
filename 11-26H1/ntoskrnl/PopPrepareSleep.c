/*
 * XREFs of PopPrepareSleep @ 0x1404FF018
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTracePrepareSleep @ 0x14077AD1C (PopDiagTracePrepareSleep.c)
 *     PopDispatchStateCallout @ 0x140A39B10 (PopDispatchStateCallout.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140B5CAEC (PopDiagTracePrepareSleepEnd.c)
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopPrepareSleep(__int64 a1)
{
  PopDiagTracePrepareSleep();
  PopCheckpointSystemSleep(54LL);
  *(_DWORD *)(a1 + 32) = 13;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTracePrepareSleepEnd();
  return PopCheckpointSystemSleep(55LL);
}
