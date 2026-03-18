/*
 * XREFs of PopAdaptiveConsoleSessionOverrideTrigger @ 0x1407DDB54
 * Callers:
 *     PopSessionConnectedV2 @ 0x1407DDDF4 (PopSessionConnectedV2.c)
 *     PopAdaptiveWnfCallback @ 0x140B4D470 (PopAdaptiveWnfCallback.c)
 *     PopSessionConnected @ 0x140B72588 (PopSessionConnected.c)
 * Callees:
 *     PopDiagTraceAdaptiveOverrideTriggered @ 0x1407D2A08 (PopDiagTraceAdaptiveOverrideTriggered.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideTrigger(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r10

  v4 = 3LL * a2;
  *((_BYTE *)&PopAdaptiveStandbyLock.SchedulerSharedSystemSlot + 8 * v4) = 1;
  *((_QWORD *)&PopAdaptiveStandbyLock.PropagateBoostsEntry.Next + v4) = a1;
  *((_DWORD *)&PopAdaptiveStandbyLock.IoSelfBoostsEntry.Next + 2 * v4) = a3;
  *(_DWORD *)&PopAdaptiveStandbyLock.PriorityFloorCounts[8 * v4 - 4] = a4;
  PopDiagTraceAdaptiveOverrideTriggered();
}
