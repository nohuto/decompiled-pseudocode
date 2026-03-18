/*
 * XREFs of ??1?$Win32HMThreadLock@UtagKL@@@@QEAA@XZ @ 0x1401904A4
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x140087130 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401904BC (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 */

__int64 __fastcall Win32HMThreadLock<tagKL>::~Win32HMThreadLock<tagKL>(ULONG_PTR a1)
{
  return Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(a1);
}
