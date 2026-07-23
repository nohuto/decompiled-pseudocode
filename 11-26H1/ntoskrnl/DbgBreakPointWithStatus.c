/*
 * XREFs of DbgBreakPointWithStatus @ 0x140536DB0
 * Callers:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1403993F0 (vDbgPrintExWithPrefixInternalHelper.c)
 *     KdCheckForDebugBreak @ 0x14048198C (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x1405E9EC0 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x14084A9E0 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x140C1CD60 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
