/*
 * XREFs of CloseHandle_0 @ 0x180070292
 * Callers:
 *     ReportHangInternal @ 0x1800978D0 (ReportHangInternal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall CloseHandle_0(HANDLE hObject)
{
  return CloseHandle(hObject);
}
