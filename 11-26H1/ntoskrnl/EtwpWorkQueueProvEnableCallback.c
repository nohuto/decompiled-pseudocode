/*
 * XREFs of EtwpWorkQueueProvEnableCallback @ 0x1406C80C0
 * Callers:
 *     <none>
 * Callees:
 *     ExStartStopWorkQueueProvider @ 0x1408458FC (ExStartStopWorkQueueProvider.c)
 */

void __fastcall EtwpWorkQueueProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  ExStartStopWorkQueueProvider(ControlCode);
}
