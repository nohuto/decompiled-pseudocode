/*
 * XREFs of EngDeleteDriverObj @ 0x1401F1C90
 * Callers:
 *     ?GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z @ 0x140023DBC (-GrepDeleteOneGdiObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@PEAVOBJECT@@@Z.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1401FA56C (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z @ 0x140034CA0 (-FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z.c)
 *     ?HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140035B80 (-HmgLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400C6748 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1401F1C1C (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1401F1C60 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  unsigned int v5; // r14d
  struct Gre::Base::SESSION_GLOBALS *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r8d
  struct _ERESOURCE *v11; // rbx
  int v12; // esi
  struct _GRETHREAD *v13; // rax
  BOOL v15; // ebx
  struct OBJECT *v16; // rsi
  HDEV v18; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v19[5]; // [rsp+48h] [rbp-40h] BYREF
  HSEMAPHORE v20; // [rsp+A8h] [rbp+20h] BYREF

  v5 = (unsigned int)hdo;
  v6 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(hdo) + 88);
  v7 = HmgLock((__int64)v6, v5, 28, 0);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((__int64)v19, v7);
  v8 = v19[0];
  if ( !v19[0] )
    goto LABEL_11;
  v18 = *(HDEV *)(v19[0] + 40LL);
  if ( bCallBack )
  {
    SEMOBJ<8>::SEMOBJ<8>((struct _ERESOURCE **)&v20, (__int64)&v18);
    v9 = (*(__int64 (__fastcall **)(__int64))(v19[0] + 32LL))((v8 + 24) & -(__int64)(v8 != 0));
    v11 = (struct _ERESOURCE *)v20;
    v12 = v9;
    if ( v20 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"DevLock", (int)v20, v10);
      v13 = GreGetCurrentThreadCrossSessionCheck();
      if ( v13 )
      {
        if ( (*((_BYTE *)v13 + 16))-- == 1 )
          *(_QWORD *)v13 &= ~0x100uLL;
      }
      GreReleaseSemaphoreSharedInternal(v11);
    }
    if ( !v12 )
      goto LABEL_11;
  }
  v15 = 1;
  v16 = HmgRemoveObject(v6, v5, (unsigned int)bLocked + 1, 0, 1, 28, 0LL);
  if ( v16 )
  {
    v19[0] = 0LL;
    PDEVOBJ::vUnreferencePdev(&v18, v6);
    FreeObject((void **)v6, v16, 0x1Cu);
  }
  else
  {
LABEL_11:
    v15 = 0;
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v19);
  return v15;
}
