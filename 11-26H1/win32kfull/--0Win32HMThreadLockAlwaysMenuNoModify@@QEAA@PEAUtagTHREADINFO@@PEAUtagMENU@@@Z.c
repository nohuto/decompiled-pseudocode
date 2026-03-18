/*
 * XREFs of ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagTHREADINFO@@PEAUtagMENU@@@Z @ 0x14021A924
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagMENU@@@Z @ 0x14021A8EC (--0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagMENU@@@Z.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
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
