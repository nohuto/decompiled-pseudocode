/*
 * XREFs of EngDeleteDriverObj @ 0x1401D0A50
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgLock @ 0x140018210 (HmgLock.c)
 *     HmgRemoveObject @ 0x140019EC0 (HmgRemoveObject.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140086794 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     FreeObject @ 0x14014C950 (FreeObject.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1401D0994 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1401D09D8 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ebx
  BOOL v9; // ebx
  __int64 v10; // rdi
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v13[5]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v6 = HmgLock((__int64)hdo, 28);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((__int64)v13, v6);
  v7 = v13[0];
  if ( !v13[0] )
    goto LABEL_8;
  v14 = *(_QWORD *)(v13[0] + 40LL);
  if ( bCallBack )
  {
    SEMOBJ<8>::SEMOBJ<8>(&v12, (__int64)&v14);
    v8 = (*(__int64 (__fastcall **)(__int64))(v13[0] + 32LL))((v7 + 24) & -(__int64)(v7 != 0));
    if ( v12 )
      GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v12);
    if ( !v8 )
      goto LABEL_8;
  }
  v9 = 1;
  v10 = HmgRemoveObject((__int64)hdo, (unsigned int)bLocked + 1, 0, 1, 28, 0LL);
  if ( v10 )
  {
    v13[0] = 0LL;
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v14);
    FreeObject(v10, 0x1Cu);
  }
  else
  {
LABEL_8:
    v9 = 0;
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>((__int64)v13);
  return v9;
}
