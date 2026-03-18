/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140322640
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x140326BE0 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x14008FB6C (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x140091F30 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x14009344C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095BDC (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095C60 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x140095E48 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1400977D0 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x140097B38 (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140099AFC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     DwmAsyncDirtySprite @ 0x1401CF5F4 (DwmAsyncDirtySprite.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(struct XDCOBJ *a1, HSPRITE a2)
{
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rbx
  Gre::Base *v5; // rcx
  struct DWMSPRITE *v6; // rdi
  struct SFMLOGICALSURFACE *v7; // rbx
  UINT_PTR v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // r8
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v19[32]; // [rsp+38h] [rbp-28h] BYREF
  struct DWMSPRITE *v20; // [rsp+58h] [rbp-8h]
  struct XDCOBJ *v21; // [rsp+80h] [rbp+20h] BYREF
  __int64 v22; // [rsp+90h] [rbp+30h] BYREF
  __int64 v23; // [rsp+98h] [rbp+38h] BYREF

  v21 = a1;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v18);
  v4 = Gre::Base::Globals(v3);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v23, v4);
  SEMOBJ<7>::SEMOBJ<7>((HSEMAPHORE *)&v22, v4);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v19, 0LL, a2);
  if ( IsDwmActive(v5) && (v6 = v20) != 0LL )
  {
    v7 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v20 + 18);
    vSpDwmUpdateSpriteVisibility(v20, 1u);
    LODWORD(v21) = 0;
    vSpUpdateDirtyRgn(v6, v7, 0LL, (struct _RECTL *)((char *)v6 + 56), (unsigned int *)&v21, 0);
    if ( (_DWORD)v21 )
    {
      if ( bShouldUseSfmTokenArray(*((_DWORD *)v7 + 63)) )
      {
        v8 = SFMLOGICALSURFACE::uiCookie(v7);
        v9 = GreAddLogicalSurfaceToDirtyQueue(*(Gre::Base **)v7, (ULONG)v21, v8);
      }
      else
      {
        v11 = SFMLOGICALSURFACE::uiCookie(v7);
        v12 = *(_QWORD *)v6;
        v13 = v11;
        v15 = (void *)UserReferenceDwmApiPort(v14);
        v9 = DwmAsyncDirtySprite(v15, v12, v16, (int)v21, v13);
      }
      v10 = v9;
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v10 = -1073741816;
  }
  DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v19);
  if ( v22 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v22);
  if ( v23 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v23);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v18);
  return v10;
}
