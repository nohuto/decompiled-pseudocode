/*
 * XREFs of GreConfirmWindowResizeCommit @ 0x140322B00
 * Callers:
 *     NtUserConfirmResizeCommit @ 0x140294DF0 (NtUserConfirmResizeCommit.c)
 * Callees:
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140093B24 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095BDC (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095C60 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreConfirmWindowResizeCommit(Gre::Base *a1)
{
  unsigned int v2; // ebx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  Gre::Base *v4; // rcx
  Gre::Base *v5; // rcx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v10, v3);
  if ( IsDwmActive(v4) )
  {
    SEMOBJ<7>::SEMOBJ<7>((HSEMAPHORE *)&v9, v3);
    if ( IsDwmActive(v5) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v7, (HWND)a1);
      if ( v8 )
      {
        *(_DWORD *)(v8 + 124) = 0;
        v2 = 1;
      }
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v7);
    }
    if ( v9 )
      GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v9);
  }
  if ( v10 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v10);
  return v2;
}
