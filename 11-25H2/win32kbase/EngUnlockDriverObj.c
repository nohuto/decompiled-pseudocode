/*
 * XREFs of EngUnlockDriverObj @ 0x1401D0BC0
 * Callers:
 *     <none>
 * Callees:
 *     HmgLock @ 0x140018210 (HmgLock.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1401D0994 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1401D09D8 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

BOOL __stdcall EngUnlockDriverObj(HDRVOBJ hdo)
{
  __int64 v1; // rax
  BOOL v2; // ebx
  OBJECT *v4[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = HmgLock((__int64)hdo, 28);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((__int64)v4, v1);
  v2 = 0;
  if ( v4[0] )
  {
    OBJECT::InterlockedDecrementExclusiveLockCount(v4[0]);
    v2 = 1;
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>((__int64)v4);
  return v2;
}
