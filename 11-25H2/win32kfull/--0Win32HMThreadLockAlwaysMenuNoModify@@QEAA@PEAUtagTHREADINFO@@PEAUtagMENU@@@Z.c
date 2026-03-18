/*
 * XREFs of ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagTHREADINFO@@PEAUtagMENU@@@Z @ 0x1401E7950
 * Callers:
 *     ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagMENU@@@Z @ 0x1401E7918 (--0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

Win32HMThreadLockAlwaysMenuNoModify *__fastcall Win32HMThreadLockAlwaysMenuNoModify::Win32HMThreadLockAlwaysMenuNoModify(
        Win32HMThreadLockAlwaysMenuNoModify *this,
        struct tagTHREADINFO *a2,
        struct tagMENU *a3)
{
  Win32HM_LockIntoThread<0>((__int64)a2, (__int64)a3, this);
  *(_DWORD *)(*((_QWORD *)a3 + 5) + 40LL) |= 0x200u;
  return this;
}
