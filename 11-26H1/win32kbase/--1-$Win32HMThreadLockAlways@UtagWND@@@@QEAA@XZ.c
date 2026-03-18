/*
 * XREFs of ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1401C62C4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14016C394 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 */

__int64 __fastcall Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(_QWORD *a1, __int64 a2)
{
  return Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(a1, a2);
}
