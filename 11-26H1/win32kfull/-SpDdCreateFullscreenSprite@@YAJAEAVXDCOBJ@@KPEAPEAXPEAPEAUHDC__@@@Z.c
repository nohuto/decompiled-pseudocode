/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x1403442D4
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x140348C30 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     GreUpdateSprite @ 0x140016514 (GreUpdateSprite.c)
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140076840 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDeleteSprite @ 0x14009CAE8 (GreDeleteSprite.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x14009EE88 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreCreateSprite @ 0x1400A33C0 (GreCreateSprite.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1ENTER_DWM_CRIT@@QEAA@XZ @ 0x1400A6DEC (--1ENTER_DWM_CRIT@@QEAA@XZ.c)
 *     ??0ENTER_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@@Z @ 0x1400BBF54 (--0ENTER_DWM_CRIT@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x140166834 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1401D14AC (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x1401D6F9C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1401E783C (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x14023AA54 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(struct XDCOBJ *a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // r14
  int v6; // esi
  __int64 v7; // rdi
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rbx
  Gre::Base *HDEV; // r12
  Gre::Base *v11; // rcx
  __int64 v12; // r15
  HSPRITE v13; // rax
  struct DWMSPRITE *v14; // r14
  struct SFMLOGICALSURFACE *v15; // rbx
  struct _SURFOBJ *v16; // rdx
  BOOL (__stdcall *v17)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r10
  unsigned int v18; // edi
  int v20; // [rsp+70h] [rbp-1D8h]
  HSPRITE Src; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 DisplayDC; // [rsp+88h] [rbp-1C0h] BYREF
  struct tagSIZE v23; // [rsp+90h] [rbp-1B8h] BYREF
  HDC *v24; // [rsp+98h] [rbp-1B0h]
  __int64 v25; // [rsp+A0h] [rbp-1A8h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp-1A0h]
  __int64 v27; // [rsp+B0h] [rbp-198h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-190h] BYREF
  struct SFMLOGICALSURFACE *v29; // [rsp+C0h] [rbp-188h] BYREF
  _QWORD v30[2]; // [rsp+C8h] [rbp-180h] BYREF
  __int128 v31; // [rsp+D8h] [rbp-170h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-160h]
  _QWORD v33[4]; // [rsp+F0h] [rbp-158h] BYREF
  _BYTE v34[32]; // [rsp+110h] [rbp-138h] BYREF
  struct DWMSPRITE *v35; // [rsp+130h] [rbp-118h]
  _BYTE v36[160]; // [rsp+140h] [rbp-108h] BYREF
  struct tagRECT v37; // [rsp+1E0h] [rbp-68h] BYREF
  _QWORD v38[2]; // [rsp+1F0h] [rbp-58h] BYREF

  v4 = a4;
  v24 = a4;
  v26 = a2;
  v6 = -1073741811;
  Src = 0LL;
  DisplayDC = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v28);
  v9 = Gre::Base::Globals(v8);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v27, v9);
  HDEV = (Gre::Base *)UserGetHDEV();
  ENTER_DWM_CRIT::ENTER_DWM_CRIT((ENTER_DWM_CRIT *)v33, v9, (HDEV)HDEV);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v36, (struct PDEVOBJ *)v33);
  v12 = v33[0];
  if ( !v33[0] || (*(_DWORD *)(v33[0] + 40LL) & 0x400) != 0 )
    goto LABEL_20;
  v6 = -1073741801;
  if ( IsDwmActive(v11) )
  {
    v25 = v7;
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 40) & 0x20400) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v25) )
        {
          v37.left = *(_DWORD *)(v7 + 2576);
          v37.top = *(_DWORD *)(v7 + 2580);
          v37.right = v37.left + *(_DWORD *)(*(_QWORD *)(v7 + 2584) + 172LL);
          v37.bottom = v37.top + *(_DWORD *)(*(_QWORD *)(v7 + 2584) + 176LL);
          v13 = (HSPRITE)GreCreateSprite(HDEV, 0LL, &v37, 0LL, 0x9900u, 1, 0, 0, 0, 0, 0, 0LL);
          Src = v13;
          if ( v13 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v34, 0LL, v13);
            v14 = v35;
            if ( v35 )
            {
              v29 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v35 + 18);
              v15 = v29;
              vSpDwmUpdateSpriteVisibility(v35, 0);
              v23 = *(struct tagSIZE *)(*(_QWORD *)(v7 + 2584) + 172LL);
              if ( (unsigned int)bSpDwmCreateLogicalSurface((HDEV)HDEV, v14, v15, &v23, &v29) )
              {
                v16 = (struct _SURFOBJ *)*((_QWORD *)v15 + 23);
                v30[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v30, v16);
                v38[0] = 0LL;
                v38[1] = v23;
                v25 = 0LL;
                v31 = 0LL;
                v32 = 0LL;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)v33) )
                {
                  v17 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))RedirBitBlt;
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v15 + 23) + 88LL) & 1) != 0 )
                {
                  v17 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v12 + 2824);
                }
                else
                {
                  v17 = EngBitBlt;
                }
                v18 = v26;
                LODWORD(v31) = v26 & 0xFFFFFF;
                LODWORD(v32) = 0;
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, __int64 *, _QWORD, __int128 *, _QWORD, int))v17)(
                  *((_QWORD *)v15 + 23),
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v38,
                  &v25,
                  0LL,
                  &v31,
                  0LL,
                  61680);
                GreUpdateSprite(HDEV, 0LL, Src, 0LL, 0LL, 0LL, 0LL, 0LL, v18, 0LL, 0x20400001u, &v37, 0LL, 1, v20, 0);
                DisplayDC = GreCreateDisplayDC(HDEV, 1LL);
                if ( DisplayDC )
                {
                  *(_DWORD *)(*((_QWORD *)v15 + 23) + 88LL) |= 0x4000000u;
                  GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v15 + 23) + 8LL));
                  v6 = 0;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v30);
              }
            }
            DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v34);
            v4 = v24;
          }
        }
      }
    }
LABEL_20:
    if ( v6 >= 0 )
      goto LABEL_25;
    goto LABEL_21;
  }
  v6 = -1073741637;
LABEL_21:
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
LABEL_25:
  RtlCopyToUser(a3, &Src, 8uLL);
  RtlCopyToUser(v4, &DisplayDC, 8uLL);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v36);
  ENTER_DWM_CRIT::~ENTER_DWM_CRIT((ENTER_DWM_CRIT *)v33);
  if ( v27 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v27);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v28);
  return (unsigned int)v6;
}
