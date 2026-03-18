/*
 * XREFs of ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagMENU@@@Z @ 0x14021A8EC
 * Callers:
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagTHREADINFO@@PEAUtagMENU@@@Z @ 0x14021A924 (--0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagTHREADINFO@@PEAUtagMENU@@@Z.c)
 */

Win32HMThreadLockAlwaysMenuNoModify *__fastcall Win32HMThreadLockAlwaysMenuNoModify::Win32HMThreadLockAlwaysMenuNoModify(
        Win32HMThreadLockAlwaysMenuNoModify *this,
        struct tagMENU *a2)
{
  struct tagTHREADINFO *v4; // rax

  v4 = PtiCurrent((__int64)this);
  Win32HMThreadLockAlwaysMenuNoModify::Win32HMThreadLockAlwaysMenuNoModify(this, v4, a2);
  return this;
}
