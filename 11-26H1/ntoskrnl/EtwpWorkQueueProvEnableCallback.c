/*
 * XREFs of EtwpWorkQueueProvEnableCallback @ 0x1406C4480
 * Callers:
 *     <none>
 * Callees:
 *     ExStartStopWorkQueueProvider @ 0x14083F6BC (ExStartStopWorkQueueProvider.c)
 */

void __fastcall EtwpWorkQueueProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  ExStartStopWorkQueueProvider(ControlCode);
}
