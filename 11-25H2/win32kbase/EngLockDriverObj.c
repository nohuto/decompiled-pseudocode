/*
 * XREFs of EngLockDriverObj @ 0x1401D0B60
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgLock @ 0x140018210 (HmgLock.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1401D0994 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1401D09D8 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

DRIVEROBJ *__stdcall EngLockDriverObj(HDRVOBJ hdo)
{
  DRIVEROBJ *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0LL;
  v2 = HmgLock((__int64)hdo, 28);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((__int64)v6, v2);
  v3 = v6[0];
  if ( v6[0] )
  {
    v4 = v6[0] + 24LL;
    v6[0] = 0LL;
    v1 = (DRIVEROBJ *)(v4 & ((unsigned __int128)-(__int128)v3 >> 64));
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>((__int64)v6);
  return v1;
}
