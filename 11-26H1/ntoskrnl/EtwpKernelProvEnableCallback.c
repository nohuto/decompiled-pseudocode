/*
 * XREFs of EtwpKernelProvEnableCallback @ 0x140826460
 * Callers:
 *     <none>
 * Callees:
 *     SeEtwEnableCallback @ 0x14063B63C (SeEtwEnableCallback.c)
 */

void __fastcall EtwpKernelProvEnableCallback(
        __int64 SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  SeEtwEnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword);
}
