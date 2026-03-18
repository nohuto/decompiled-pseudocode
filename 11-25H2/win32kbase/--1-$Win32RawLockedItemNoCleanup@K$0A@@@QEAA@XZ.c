/*
 * XREFs of ??1?$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@XZ @ 0x1401A0E34
 * Callers:
 *     NtUserSetSysColors @ 0x140174FA0 (NtUserSetSysColors.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *__fastcall Win32RawLockedItemNoCleanup<unsigned long,0>::~Win32RawLockedItemNoCleanup<unsigned long,0>(
        _QWORD *a1)
{
  struct tagTHREADINFO *result; // rax

  result = PtiCurrent();
  *((_QWORD *)result + 48) = *a1;
  a1[2] = -1LL;
  return result;
}
