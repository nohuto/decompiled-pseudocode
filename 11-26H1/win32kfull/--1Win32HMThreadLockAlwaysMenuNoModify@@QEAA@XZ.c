/*
 * XREFs of ??1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ @ 0x14023B12C
 * Callers:
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 */

void __fastcall Win32HMThreadLockAlwaysMenuNoModify::~Win32HMThreadLockAlwaysMenuNoModify(
        Win32HMThreadLockAlwaysMenuNoModify *this)
{
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 40LL) &= ~0x200u;
  Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(this);
}
