/*
 * XREFs of EngLockDriverObj @ 0x1401F1DF0
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140035B80 (-HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1401F1C1C (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1401F1C60 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

DRIVEROBJ *__stdcall EngLockDriverObj(HDRVOBJ hdo)
{
  unsigned int v1; // ebx
  DRIVEROBJ *v2; // rdi
  __int64 SessionState; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (unsigned int)hdo;
  v2 = 0LL;
  SessionState = W32GetSessionState(hdo);
  v4 = HmgLock(*(_QWORD *)(SessionState + 88), v1, 28, 0);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((__int64)v8, v4);
  v5 = v8[0];
  if ( v8[0] )
  {
    v6 = v8[0] + 24LL;
    v8[0] = 0LL;
    v2 = (DRIVEROBJ *)(v6 & ((unsigned __int128)-(__int128)v5 >> 64));
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v8);
  return v2;
}
