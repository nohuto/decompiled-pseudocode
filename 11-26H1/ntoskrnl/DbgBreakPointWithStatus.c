/*
 * XREFs of DbgBreakPointWithStatus @ 0x140534930
 * Callers:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x140397670 (vDbgPrintExWithPrefixInternalHelper.c)
 *     KdCheckForDebugBreak @ 0x140487E4C (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x1405E7550 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x1408459A0 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x140C16D60 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
