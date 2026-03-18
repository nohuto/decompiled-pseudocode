/*
 * XREFs of TraceRawMouseThrottlingThresholds @ 0x140216E3C
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B77F0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ?RawMouseThrottlingThresholds@Mouse@InputTraceLogging@@SAXU0@@Z @ 0x1402147C4 (-RawMouseThrottlingThresholds@Mouse@InputTraceLogging@@SAXU0@@Z.c)
 */

void __fastcall TraceRawMouseThrottlingThresholds(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3136) )
    InputTraceLogging::Mouse::RawMouseThrottlingThresholds();
}
