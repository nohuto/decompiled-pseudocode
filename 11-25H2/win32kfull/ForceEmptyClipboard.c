/*
 * XREFs of ForceEmptyClipboard @ 0x1401EF0CC
 * Callers:
 *     FreeWindowStation @ 0x1401EEE70 (FreeWindowStation.c)
 * Callees:
 *     xxxCloseClipboard @ 0x14002B910 (xxxCloseClipboard.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401EF13C (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxEmptyClipboard @ 0x1401EF1DC (xxxEmptyClipboard.c)
 */

void __fastcall ForceEmptyClipboard(struct tagWINDOWSTATION *a1, __int64 a2)
{
  *((_QWORD *)a1 + 10) = PtiCurrent((__int64)a1, a2);
  HMAssignmentUnlock((char *)a1 + 112);
  HMAssignmentUnlock((char *)a1 + 104);
  HMAssignmentUnlock((char *)a1 + 96);
  xxxEmptyClipboard((ULONG_PTR)a1);
  if ( (*((_DWORD *)a1 + 16) & 0x10) == 0 )
    xxxCloseClipboard(a1);
  CloseClipboardToken(a1);
}
