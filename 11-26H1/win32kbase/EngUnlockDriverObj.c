/*
 * XREFs of EngUnlockDriverObj @ 0x1401F1E70
 * Callers:
 *     <none>
 * Callees:
 *     ?HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140035B80 (-HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1401F1C1C (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1401F1C60 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

BOOL __stdcall EngUnlockDriverObj(HDRVOBJ hdo)
{
  unsigned int v1; // ebx
  __int64 SessionState; // rax
  __int64 v3; // rax
  BOOL v4; // ebx
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (unsigned int)hdo;
  SessionState = W32GetSessionState(hdo);
  v3 = HmgLock(*(_QWORD *)(SessionState + 88), v1, 28, 0);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((__int64)v6, v3);
  v4 = 0;
  if ( v6[0] )
  {
    _InterlockedDecrement16((volatile signed __int16 *)(v6[0] + 12LL));
    v4 = 1;
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v6);
  return v4;
}
