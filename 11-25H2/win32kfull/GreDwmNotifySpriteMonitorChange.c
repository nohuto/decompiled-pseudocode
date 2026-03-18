/*
 * XREFs of GreDwmNotifySpriteMonitorChange @ 0x14009009C
 * Callers:
 *     UpdateWindowSpriteMonitor @ 0x140090008 (UpdateWindowSpriteMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14001B280 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x14008E444 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FE7C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x140091F30 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     DwmAsyncNotifySpriteMonitorChange @ 0x1401B0980 (DwmAsyncNotifySpriteMonitorChange.c)
 */

__int64 __fastcall GreDwmNotifySpriteMonitorChange(Gre::Base *a1, HWND a2, HSPRITE a3)
{
  unsigned int v5; // ebp
  struct Gre::Base::SESSION_GLOBALS *v6; // rdi
  HSEMAPHORE v7; // rsi
  struct PDEVOBJ *v8; // rdx
  Gre::Base *v9; // rcx
  __int64 v10; // rcx
  void *v11; // rax
  _BYTE v13[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  char v15; // [rsp+38h] [rbp-50h]
  _BYTE v16[32]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+60h] [rbp-28h]

  v5 = 0;
  v6 = Gre::Base::Globals(a1);
  v7 = (HSEMAPHORE)(*(_QWORD *)v6 + 1144LL);
  GreAcquireSemaphoreInternal(v7);
  GrepAcquireLockValidate<2>();
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v13, v8, 0, 0);
  v14 = *(_QWORD *)v6 + 520LL;
  v15 = 0;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v14);
  if ( IsDwmActive(v9) )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v16, a2, a3);
    if ( v17 )
    {
      v11 = (void *)UserReferenceDwmApiPort(v10);
      v5 = DwmAsyncNotifySpriteMonitorChange(v11);
    }
    DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v16);
  }
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)&v14);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v13);
  if ( v7 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v7);
  return v5;
}
