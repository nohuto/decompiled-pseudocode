/*
 * XREFs of ??0?$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@PEAKP6AXPEAX@Z@Z @ 0x140192C24
 * Callers:
 *     NtUserSetSysColors @ 0x1401E9AA0 (NtUserSetSysColors.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall Win32RawLockedItemNoCleanup<unsigned long,0>::Win32RawLockedItemNoCleanup<unsigned long,0>(
        _QWORD *a1,
        __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  _QWORD *result; // rax

  v4 = PtiCurrent((__int64)a1, a2);
  *a1 = *((_QWORD *)v4 + 47);
  *((_QWORD *)v4 + 47) = a1;
  a1[2] = GreDeleteFastMutex;
  result = a1;
  a1[1] = a2;
  return result;
}
