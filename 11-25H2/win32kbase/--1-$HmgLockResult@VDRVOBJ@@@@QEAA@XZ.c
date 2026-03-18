/*
 * XREFs of ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1401D09D8
 * Callers:
 *     EngDeleteDriverObj @ 0x1401D0A50 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1401D0B60 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1401D0BC0 (EngUnlockDriverObj.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     ?CleanupRoutine@?$HmgLockResult@VDRVOBJ@@@@QEAAXXZ @ 0x1401D09FC (-CleanupRoutine@-$HmgLockResult@VDRVOBJ@@@@QEAAXXZ.c)
 */

void __fastcall HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(__int64 a1)
{
  HmgLockResult<DRVOBJ>::CleanupRoutine();
  PopThreadGuardedObject((_QWORD *)(a1 + 8));
}
