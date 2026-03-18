/*
 * XREFs of GreNotifyDirtySprite @ 0x140057C3C
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140057D28 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FE7C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400979BC (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x140097B38 (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreNotifyDirtySprite(HWND a1)
{
  __int64 result; // rax
  Gre::Base *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  struct SFMLOGICALSURFACE *v7; // rcx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  result = IsDwmActive();
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)Gre::Base::Globals(v3);
    GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreSharedInternal, v4 + 520);
    if ( (unsigned int)IsDwmActive() )
    {
      DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v8, a1);
      v5 = v8;
      if ( v8 )
      {
        if ( v8 != -88 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v8 + 88));
        v6 = SFMLOGICALSURFACE::uiCookie(*(SFMLOGICALSURFACE **)(v5 + 144));
        bSpDwmNotifyDirty(*(HSPRITE *)v5, v7, 1u, v6);
        if ( v5 != -88 )
          GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v5 + 88));
        if ( v5 )
          DEC_SHARE_REF_CNT(v5);
      }
    }
    return GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v4 + 520);
  }
  return result;
}
