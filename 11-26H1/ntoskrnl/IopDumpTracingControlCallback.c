/*
 * XREFs of IopDumpTracingControlCallback @ 0x1405C9600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IopDumpTracingControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  _InterlockedExchange(&IopDumpEtwEnabled, ControlCode != 0);
}
