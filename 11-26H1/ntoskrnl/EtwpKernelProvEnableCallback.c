/*
 * XREFs of EtwpKernelProvEnableCallback @ 0x14082C6A0
 * Callers:
 *     <none>
 * Callees:
 *     SeEtwEnableCallback @ 0x14063E758 (SeEtwEnableCallback.c)
 */

void __fastcall EtwpKernelProvEnableCallback(
        __int64 SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  SeEtwEnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword);
}
