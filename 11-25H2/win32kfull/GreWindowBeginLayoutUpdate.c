/*
 * XREFs of GreWindowBeginLayoutUpdate @ 0x1401E9744
 * Callers:
 *     NtUserBeginLayoutUpdate @ 0x1401E9650 (NtUserBeginLayoutUpdate.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14005B3F8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FE7C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140093B24 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreWindowBeginLayoutUpdate(Gre::Base *a1)
{
  unsigned int v2; // edi
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  __int64 v4; // rsi
  Gre::Base *v5; // rcx
  __int64 v6; // rbx
  Gre::Base *v7; // rcx
  int v9; // eax
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  v4 = *(_QWORD *)v3 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v4);
  if ( IsDwmActive(v5) )
  {
    v6 = *(_QWORD *)v3 + 520LL;
    GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v6);
    if ( IsDwmActive(v7) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v10, (HWND)a1);
      if ( v11 )
      {
        v2 = 1;
        if ( *(int *)(v11 + 116) >= 1 )
        {
          v9 = *(_DWORD *)(v11 + 120);
          if ( v9 > 0 )
            *(_DWORD *)(v11 + 120) = v9 + 1;
        }
      }
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v10);
    }
    if ( v6 )
      GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v6);
  }
  if ( v4 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v4);
  return v2;
}
