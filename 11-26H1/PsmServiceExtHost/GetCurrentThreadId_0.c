/*
 * XREFs of GetCurrentThreadId_0 @ 0x180070286
 * Callers:
 *     ReportHangInternal @ 0x1800978D0 (ReportHangInternal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}
