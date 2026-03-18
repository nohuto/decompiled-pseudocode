/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140321FE8
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x140326910 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     GreCreateSprite @ 0x14005ADD0 (GreCreateSprite.c)
 *     GreDeleteSprite @ 0x14005AEC4 (GreDeleteSprite.c)
 *     GreUpdateSprite @ 0x14007BD8C (GreUpdateSprite.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x14008FB6C (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x140091F30 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x14009344C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x140095760 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095BDC (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140097B7C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ??0ENTER_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@@Z @ 0x14019F520 (--0ENTER_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1401A16C0 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x14020F4EC (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(struct XDCOBJ *a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // r14
  int v6; // esi
  __int64 v7; // rdi
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rbx
  Gre::Base *HDEV; // r15
  Gre::Base *v11; // rcx
  __int64 v12; // r13
  int v13; // eax
  HSPRITE v14; // rax
  struct DWMSPRITE *v15; // r14
  struct SFMLOGICALSURFACE *v16; // rbx
  struct _SURFOBJ *v17; // rdx
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r10
  unsigned int v19; // edi
  int v21; // [rsp+70h] [rbp-1C8h]
  HSPRITE Src; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 DisplayDC; // [rsp+88h] [rbp-1B0h] BYREF
  struct tagSIZE v24; // [rsp+90h] [rbp-1A8h] BYREF
  HDC *v25; // [rsp+98h] [rbp-1A0h]
  __int64 v26; // [rsp+A0h] [rbp-198h] BYREF
  unsigned int v27; // [rsp+A8h] [rbp-190h]
  __int64 v28; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-180h] BYREF
  struct SFMLOGICALSURFACE *v30; // [rsp+C0h] [rbp-178h] BYREF
  _QWORD v31[2]; // [rsp+C8h] [rbp-170h] BYREF
  __int128 v32; // [rsp+D8h] [rbp-160h] BYREF
  __int64 v33; // [rsp+E8h] [rbp-150h]
  _QWORD v34[4]; // [rsp+F0h] [rbp-148h] BYREF
  _BYTE v35[32]; // [rsp+110h] [rbp-128h] BYREF
  struct DWMSPRITE *v36; // [rsp+130h] [rbp-108h]
  _BYTE v37[144]; // [rsp+140h] [rbp-F8h] BYREF
  struct tagRECT v38; // [rsp+1D0h] [rbp-68h] BYREF
  _QWORD v39[2]; // [rsp+1E0h] [rbp-58h] BYREF

  v4 = a4;
  v25 = a4;
  v27 = a2;
  v6 = -1073741811;
  Src = 0LL;
  DisplayDC = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v29);
  v9 = Gre::Base::Globals(v8);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v28, v9);
  HDEV = (Gre::Base *)UserGetHDEV();
  ENTER_DWM_CRIT::ENTER_DWM_CRIT((ENTER_DWM_CRIT *)v34, v9, (HDEV)HDEV);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v37, (struct PDEVOBJ *)v34);
  v12 = v34[0];
  if ( !v34[0] || _bittest((const signed __int32 *)(v34[0] + 40LL), 0xAu) )
    goto LABEL_21;
  v6 = -1073741801;
  if ( IsDwmActive(v11) )
  {
    v26 = v7;
    if ( v7 )
    {
      v13 = *(_DWORD *)(v7 + 40);
      if ( (v13 & 0x400) == 0 && (v13 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v26) )
        {
          v38.left = *(_DWORD *)(v7 + 2576);
          v38.top = *(_DWORD *)(v7 + 2580);
          v38.right = v38.left + *(_DWORD *)(*(_QWORD *)(v7 + 2584) + 172LL);
          v38.bottom = v38.top + *(_DWORD *)(*(_QWORD *)(v7 + 2584) + 176LL);
          v14 = (HSPRITE)GreCreateSprite(HDEV, 0LL, &v38, 0LL, 0x9900u, 1, 0, 0, 0, 0, 0, 0LL);
          Src = v14;
          if ( v14 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v35, 0LL, v14);
            v15 = v36;
            if ( v36 )
            {
              v30 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v36 + 18);
              v16 = v30;
              vSpDwmUpdateSpriteVisibility(v36, 0);
              v24 = *(struct tagSIZE *)(*(_QWORD *)(v7 + 2584) + 172LL);
              if ( (unsigned int)bSpDwmCreateLogicalSurface((HDEV)HDEV, v15, v16, &v24, &v30) )
              {
                v17 = (struct _SURFOBJ *)*((_QWORD *)v16 + 23);
                v31[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v31, v17);
                v39[0] = 0LL;
                v39[1] = v24;
                v26 = 0LL;
                v32 = 0LL;
                v33 = 0LL;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)v34) )
                {
                  v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))RedirBitBlt;
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v16 + 23) + 88LL) & 1) != 0 )
                {
                  v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v12 + 2824);
                }
                else
                {
                  v18 = EngBitBlt;
                }
                v19 = v27;
                LODWORD(v32) = v27 & 0xFFFFFF;
                LODWORD(v33) = 0;
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, __int64 *, _QWORD, __int128 *, _QWORD, int))v18)(
                  *((_QWORD *)v16 + 23),
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v39,
                  &v26,
                  0LL,
                  &v32,
                  0LL,
                  61680);
                GreUpdateSprite(
                  (HDEV)HDEV,
                  0LL,
                  Src,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v19,
                  0LL,
                  0x20400001u,
                  &v38,
                  0LL,
                  1,
                  v21,
                  0);
                DisplayDC = GreCreateDisplayDC(HDEV, 1LL, 0LL);
                if ( DisplayDC )
                {
                  *(_DWORD *)(*((_QWORD *)v16 + 23) + 88LL) |= 0x4000000u;
                  GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v16 + 23) + 8LL));
                  v6 = 0;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
              }
            }
            DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v35);
            v4 = v25;
          }
        }
      }
    }
LABEL_21:
    if ( v6 >= 0 )
      goto LABEL_26;
    goto LABEL_22;
  }
  v6 = -1073741637;
LABEL_22:
  if ( Src )
  {
    GreDeleteSprite(HDEV, 0LL, Src, 1);
    Src = 0LL;
  }
  if ( DisplayDC )
  {
    GreDeleteDC(DisplayDC);
    DisplayDC = 0LL;
  }
LABEL_26:
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void **)MmUserProbeAddress;
  RtlCopyVolatileMemory(a3, &Src, 8uLL);
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HDC *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v4, &DisplayDC, 8uLL);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v37);
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v34);
  if ( v28 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v28);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v29);
  return (unsigned int)v6;
}
