/*
 * XREFs of KdDisableDebugger @ 0x1405E6340
 * Callers:
 *     NtSystemDebugControl @ 0x14084A9E0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140C863F0 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140C86C28 (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140C86D10 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x1405E6358 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
