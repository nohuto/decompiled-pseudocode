/*
 * XREFs of IopDumpIsTracingEnabled @ 0x14052CC84
 * Callers:
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x14050DC74 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceCrashDumpDisabled @ 0x1405C8EC8 (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x1405C8FAC (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x1405C90B8 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x1405C91C4 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x1405C92D0 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x1405C93DC (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x1405C94E8 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140793170 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140793468 (IopDumpTraceForceDumpDisabled.c)
 *     IopInitializeDumpPolicySettings @ 0x140793844 (IopInitializeDumpPolicySettings.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x140793C1C (IopTraceCrashDumpDisabledOnBoot.c)
 * Callees:
 *     <none>
 */

bool IopDumpIsTracingEnabled()
{
  return IopDumpEtwRegHandle && IopDumpEtwEnabled != 0;
}
