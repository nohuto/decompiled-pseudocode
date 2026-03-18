/*
 * XREFs of KdDisableDebugger @ 0x1405E39D0
 * Callers:
 *     NtSystemDebugControl @ 0x1408459A0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140C803F0 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140C80C28 (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140C80D10 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x1405E39E8 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
