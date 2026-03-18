/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140344914
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x140348ED0 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140074A40 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB18 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1400A16AC (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1400A16FC (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400A19CC (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x140166834 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1401D14AC (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x1401D6F9C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1401E783C (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     DwmAsyncDirtySprite @ 0x1401F9188 (DwmAsyncDirtySprite.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(struct XDCOBJ *a1, HSPRITE a2)
{
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rbx
  Gre::Base *v5; // rcx
  struct DWMSPRITE *v6; // rdi
  unsigned int *v7; // rbx
  __int64 v8; // rdx
  UINT_PTR v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // r8
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v20[32]; // [rsp+38h] [rbp-28h] BYREF
  struct DWMSPRITE *v21; // [rsp+58h] [rbp-8h]
  struct XDCOBJ *v22; // [rsp+80h] [rbp+20h] BYREF
  __int64 v23; // [rsp+90h] [rbp+30h] BYREF
  __int64 v24; // [rsp+98h] [rbp+38h] BYREF

  v22 = a1;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v19);
  v4 = Gre::Base::Globals(v3);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v24, v4);
  SEMOBJ<7>::SEMOBJ<7>((HSEMAPHORE *)&v23, v4);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v20, 0LL, a2);
  if ( IsDwmActive(v5) && (v6 = v21) != 0LL )
  {
    v7 = (unsigned int *)*((_QWORD *)v21 + 18);
    vSpDwmUpdateSpriteVisibility(v21, 1u);
    LODWORD(v22) = 0;
    vSpUpdateDirtyRgn(
      v6,
      (struct SFMLOGICALSURFACE *)v7,
      0LL,
      (const struct _RECTL *)((char *)v6 + 56),
      (unsigned int *)&v22,
      0);
    if ( (_DWORD)v22 )
    {
      if ( bShouldUseSfmTokenArray(v7[63], v8) )
      {
        v9 = SFMLOGICALSURFACE::uiCookie((SFMLOGICALSURFACE *)v7);
        v10 = GreAddLogicalSurfaceToDirtyQueue(*(Gre::Base **)v7, (ULONG)v22, v9);
      }
      else
      {
        v12 = SFMLOGICALSURFACE::uiCookie((SFMLOGICALSURFACE *)v7);
        v13 = *(_QWORD *)v6;
        v14 = v12;
        v16 = (void *)UserReferenceDwmApiPort(v15);
        v10 = DwmAsyncDirtySprite(v16, v13, v17, (int)v22, v14);
      }
      v11 = v10;
    }
    else
    {
      v11 = 0;
    }
  }
  else
  {
    v11 = -1073741816;
  }
  DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v20);
  if ( v23 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v23);
  if ( v24 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v24);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v19);
  return v11;
}
