/*
 * XREFs of GreCancelSynchronizedWindowResize @ 0x140322A3C
 * Callers:
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402A7F00 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x14005CDF0 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140093B24 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095BDC (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095C60 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __fastcall GreCancelSynchronizedWindowResize(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  Gre::Base *v3; // rcx
  Gre::Base *v4; // rcx
  struct DWMSPRITE *v5; // rbx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  struct DWMSPRITE *v7; // [rsp+40h] [rbp-18h]
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v2 = Gre::Base::Globals(a1);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v9, v2);
  if ( IsDwmActive(v3) )
  {
    SEMOBJ<7>::SEMOBJ<7>((HSEMAPHORE *)&v8, v2);
    if ( IsDwmActive(v4) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v6, (HWND)a1);
      v5 = v7;
      if ( v7 && *((int *)v7 + 29) >= 1 )
      {
        CheckAndProcessWindowResizeComplete(v7, 1, 0LL);
        *((_DWORD *)v5 + 32) = 1;
      }
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v6);
    }
    if ( v8 )
      GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v8);
  }
  if ( v9 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v9);
}
