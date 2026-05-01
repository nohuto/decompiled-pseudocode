/*
 * XREFs of GetTickCount_0 @ 0x1800702AA
 * Callers:
 *     ReportHangInternal @ 0x1800978D0 (ReportHangInternal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetTickCount_0()
{
  return GetTickCount();
}
