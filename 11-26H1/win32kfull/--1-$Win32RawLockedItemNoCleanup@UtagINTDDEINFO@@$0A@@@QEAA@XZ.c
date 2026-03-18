/*
 * XREFs of ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x14018BC44
 * Callers:
 *     xxxConnectService @ 0x14018B600 (xxxConnectService.c)
 *     xxxClientCopyDDEIn1 @ 0x1402591EC (xxxClientCopyDDEIn1.c)
 *     EditionCreateWindowStationEntryPoint @ 0x1402AEA80 (EditionCreateWindowStationEntryPoint.c)
 *     NtUserInjectTouchInput @ 0x1402B6AF0 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x1402BB4D0 (NtUserSendInput.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *__fastcall Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(
        _QWORD *a1)
{
  struct tagTHREADINFO *result; // rax

  result = PtiCurrent((__int64)a1);
  *((_QWORD *)result + 47) = *a1;
  a1[2] = -1LL;
  return result;
}
