/*
 * XREFs of ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x1401668B0
 * Callers:
 *     xxxConnectService @ 0x14016629C (xxxConnectService.c)
 *     xxxClientCopyDDEIn1 @ 0x14021CBC0 (xxxClientCopyDDEIn1.c)
 *     NtUserInjectTouchInput @ 0x14024A8D0 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x14024CC60 (NtUserSendInput.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x140293D10 (EditionCreateWindowStationEntryPointEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *__fastcall Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(
        _QWORD *a1,
        __int64 a2)
{
  struct tagTHREADINFO *result; // rax

  result = PtiCurrent((__int64)a1, a2);
  *((_QWORD *)result + 48) = *a1;
  a1[2] = -1LL;
  return result;
}
