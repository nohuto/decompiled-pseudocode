/*
 * XREFs of TraceRawMouseThrottlingThresholds @ 0x1401C5624
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14008FA40 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ?RawMouseThrottlingThresholds@Mouse@InputTraceLogging@@SAXU0@@Z @ 0x14019DCF0 (-RawMouseThrottlingThresholds@Mouse@InputTraceLogging@@SAXU0@@Z.c)
 */

void __fastcall TraceRawMouseThrottlingThresholds(int a1, int a2, int a3)
{
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 3136) )
    InputTraceLogging::Mouse::RawMouseThrottlingThresholds();
}
