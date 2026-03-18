/*
 * XREFs of ??1?$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@XZ @ 0x1401C4598
 * Callers:
 *     NtUserSetSysColors @ 0x1401E9AA0 (NtUserSetSysColors.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *__fastcall Win32RawLockedItemNoCleanup<unsigned long,0>::~Win32RawLockedItemNoCleanup<unsigned long,0>(
        _QWORD *a1,
        __int64 a2)
{
  struct tagTHREADINFO *result; // rax

  result = PtiCurrent((__int64)a1, a2);
  *((_QWORD *)result + 47) = *a1;
  a1[2] = -1LL;
  return result;
}
