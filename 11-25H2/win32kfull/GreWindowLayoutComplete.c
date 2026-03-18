/*
 * XREFs of GreWindowLayoutComplete @ 0x140023DA8
 * Callers:
 *     NtUserLayoutCompleted @ 0x140023670 (NtUserLayoutCompleted.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14005B3F8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x14005CDF0 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FE7C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140093B24 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreWindowLayoutComplete(Gre::Base *a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // ebp
  unsigned int v7; // esi
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rbx
  struct DWMSPRITE *v11; // rcx
  int v12; // eax
  _BYTE v14[32]; // [rsp+20h] [rbp-48h] BYREF
  struct DWMSPRITE *v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  v16 = 0;
  v7 = 0;
  v8 = Gre::Base::Globals(a1);
  v9 = *(_QWORD *)v8 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v9);
  if ( (unsigned int)IsDwmActive() )
  {
    v10 = *(_QWORD *)v8 + 520LL;
    GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v10);
    if ( (unsigned int)IsDwmActive() )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v14, (HWND)a1);
      v11 = v15;
      if ( v15 )
      {
        v7 = 1;
        if ( *((int *)v15 + 29) >= 1 )
        {
          v12 = *((_DWORD *)v15 + 30);
          if ( v12 > 0 )
          {
            *((_DWORD *)v15 + 30) = v12 - 1;
            CheckAndProcessWindowResizeComplete(v11, 0, &v16);
            v4 = v16;
          }
        }
      }
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v14);
    }
    if ( v10 )
      GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v10);
  }
  *a4 = v4;
  if ( v9 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v9);
  return v7;
}
