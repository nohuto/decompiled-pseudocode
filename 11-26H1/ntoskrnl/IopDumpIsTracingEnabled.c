/*
 * XREFs of IopDumpIsTracingEnabled @ 0x14052F1A4
 * Callers:
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1405076E4 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x1405CB798 (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x1405CB87C (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x1405CB988 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x1405CBA94 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x1405CBBA0 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x1405CBCAC (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x1405CBDB8 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140795CA0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140795F98 (IopDumpTraceForceDumpDisabled.c)
 *     IopInitializeDumpPolicySettings @ 0x140796374 (IopInitializeDumpPolicySettings.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x14079674C (IopTraceCrashDumpDisabledOnBoot.c)
 * Callees:
 *     <none>
 */

bool IopDumpIsTracingEnabled()
{
  return IopDumpEtwRegHandle && IopDumpEtwEnabled != 0;
}
