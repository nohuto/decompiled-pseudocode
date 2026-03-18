/*
 * XREFs of ??1?$Win32HMThreadLock@UtagKL@@@@QEAA@XZ @ 0x140157830
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x14009F5D0 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x140157848 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 */

__int64 __fastcall Win32HMThreadLock<tagKL>::~Win32HMThreadLock<tagKL>(ULONG_PTR a1)
{
  return Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(a1);
}
