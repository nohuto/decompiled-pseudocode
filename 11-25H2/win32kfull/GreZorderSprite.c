/*
 * XREFs of GreZorderSprite @ 0x14008FC58
 * Callers:
 *     TrackLayeredZorder @ 0x14004BACC (TrackLayeredZorder.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x14004BFA8 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14001B280 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x14008E444 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FE7C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x140091F8C (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1400DF4D4 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1401A0398 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

void __fastcall GreZorderSprite(Gre::Base *a1, HWND a2, HWND a3, int a4)
{
  int v8; // ebp
  struct Gre::Base::SESSION_GLOBALS *v9; // r15
  HSEMAPHORE v10; // rdi
  Gre::Base *v11; // rcx
  struct PDEVOBJ *v12; // rdx
  Gre::Base *v13; // rcx
  HSPRITE v14; // rbx
  HSPRITE v15; // r15
  _BYTE v16[8]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  char v18; // [rsp+38h] [rbp-20h]

  v8 = 1;
  v9 = Gre::Base::Globals(a1);
  v10 = (HSEMAPHORE)(*(_QWORD *)v9 + 1144LL);
  GreAcquireSemaphoreInternal(v10);
  GrepAcquireLockValidate<2>();
  if ( !a4 || !IsDwmActive(v11) )
    goto LABEL_8;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v16, v12, 0, 0);
  v17 = *(_QWORD *)v9 + 520LL;
  v18 = 0;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v17);
  if ( IsDwmActive(v13) )
  {
    v8 = 0;
    v14 = 0LL;
    v15 = DWMSPRITEREF::hspLookupWindow(a2);
    if ( a3 )
      v14 = DWMSPRITEREF::hspLookupWindow(a3);
    vSpDwmZorderSprite(v15, v14);
  }
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)&v17);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v16);
  if ( v8 )
LABEL_8:
    GdiZorderSprite((HDEV)a1, a2, a3);
  if ( v10 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v10);
}
