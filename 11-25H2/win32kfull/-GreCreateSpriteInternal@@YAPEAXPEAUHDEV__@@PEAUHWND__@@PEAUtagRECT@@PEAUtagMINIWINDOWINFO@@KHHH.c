/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1403219F0
 * Callers:
 *     GreCreateSprite @ 0x14005ADD0 (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140173B30 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14005B174 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x14008E604 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1400920E4 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x140092120 (DwmAsyncZorderSprite.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x140095554 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1400E064C (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1401735A8 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1401742B8 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1401A16C0 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1401A8738 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ @ 0x1401AC0CC (-Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ.c)
 *     DwmAsyncCreateSprite @ 0x1401C36CC (DwmAsyncCreateSprite.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1401C3CF0 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1401CC93C (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x140321978 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

struct SPRITE *__fastcall GreCreateSpriteInternal(
        Gre::Base *a1,
        __int64 a2,
        struct _RECTL *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        struct REGION *a12)
{
  Gre::Base *v12; // r12
  HWND v15; // rdi
  int v16; // ebx
  Gre::Base *v18; // rcx
  Gre::Base *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  HSPRITE DwmSpriteObj; // rax
  __int64 v26; // r8
  DWMSPRITE *v27; // rdi
  SFMLOGICALSURFACE *v28; // rbx
  unsigned int v29; // ecx
  int v30; // r13d
  int v31; // edx
  int v32; // eax
  unsigned __int16 *v33; // rdx
  HSPRITE NeighborSprite; // r13
  __int64 v35; // rcx
  int v36; // ebx
  void *v37; // rax
  Gre::Base *v38; // rbx
  Gre::Base *v39; // rcx
  struct Gre::Base::SESSION_GLOBALS *v40; // rax
  __int64 v41; // rcx
  void *v42; // rax
  struct DWMSPRITE *v43; // rax
  int v45; // [rsp+20h] [rbp-E0h]
  struct Gre::Base::SESSION_GLOBALS *v46; // [rsp+40h] [rbp-C0h]
  struct REGION *v48; // [rsp+50h] [rbp-B0h] BYREF
  Gre::Base *v49; // [rsp+58h] [rbp-A8h]
  _OWORD v50[2]; // [rsp+60h] [rbp-A0h] BYREF
  DWMSPRITE *v51; // [rsp+80h] [rbp-80h]
  _BYTE v52[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v53[40]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v54[96]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v55[144]; // [rsp+130h] [rbp+30h] BYREF

  v12 = 0LL;
  v15 = (HWND)a2;
  v48 = a12;
  v16 = 1;
  v46 = Gre::Base::Globals(a1);
  if ( !a6 || !IsDwmActive(v18) )
    return GdiCreateSprite(a1, v15, a3);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v52, v46, (__int64)a1, 0);
  if ( IsDwmActive(v19) )
  {
    memset_0(v55, 0, 0x88uLL);
    if ( a4 )
      v24 = *((_QWORD *)a4 + 6);
    else
      v24 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 18656);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(
      v50,
      v20,
      v22,
      v23);
    v51 = 0LL;
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v54);
    DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj((Gre::Base *)v15, v24, (HDEV)a1, a8);
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v50, DwmSpriteObj);
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v54);
    v27 = v51;
    if ( v51 )
    {
      *((_DWORD *)v51 + 29) = 0;
      v28 = (SFMLOGICALSURFACE *)*((_QWORD *)v27 + 18);
      if ( a3 )
        *(struct _RECTL *)((char *)v27 + 56) = *a3;
      v29 = *((_DWORD *)v27 + 35) & 0xFFFFFFFE | (a7 != 0);
      *((_DWORD *)v27 + 35) = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)(2 * a8)) & 2;
      v30 = *((_DWORD *)v28 + 63) ^ ((unsigned __int8)*((_DWORD *)v28 + 63) ^ (unsigned __int8)(16 * a8)) & 0x10;
      *((_DWORD *)v28 + 63) = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(4 * a9)) & 4;
      v31 = *((_DWORD *)v27 + 35) ^ ((unsigned __int8)*((_DWORD *)v27 + 35) ^ (unsigned __int8)(8 * a10)) & 8;
      v32 = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)(a11 << 6)) & 0x40;
      v33 = (unsigned __int16 *)v48;
      *((_DWORD *)v27 + 35) = v32;
      DWMSPRITE::vUpdateDpiScaling(v27, v33, v26);
      v49 = *(Gre::Base **)v27;
      NeighborSprite = (HSPRITE)hspGetNeighborSprite(v49, 0, 1);
      if ( !a2 && !a4 )
      {
        vSpDwmGetMiniWinInfoForNonWindowSprite((__int64)v55, (__int128 *)((char *)v27 + 56));
        a4 = (struct tagMINIWINDOWINFO *)v55;
      }
      if ( (*((_DWORD *)v28 + 63) & 4) != 0 )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v48);
        SFMLOGICALSURFACE::vDirtyRegionAccum(v28, v48);
      }
      v35 = *((_DWORD *)v27 + 35) & 1;
      v36 = v35 | *((_DWORD *)v28 + 63) & 0xC | (2
                                               * (*((_DWORD *)v28 + 63) & 1 | *((_DWORD *)v27 + 35) & 0x40 | (4 * (*((_DWORD *)v27 + 35) & 0xE))));
      v37 = (void *)UserReferenceDwmApiPort(v35);
      v45 = v36;
      v38 = v49;
      if ( (int)DwmAsyncCreateSprite(v37, (__int64)v49, a2, (__int128 *)&a3->left, v45, (__int128 *)a4, a5) < 0 )
      {
        v43 = DWMSPRITEREF::Detach((DWMSPRITEREF *)v50);
        vspDestroyDwmSpriteObjInternal((HDEV)a1, 0LL, v43);
      }
      else
      {
        v40 = Gre::Base::Globals(v39);
        if ( NeighborSprite && *(_QWORD *)(*((_QWORD *)v40 + 17) + 144LL) )
        {
          DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v53, NeighborSprite);
          v42 = (void *)UserReferenceDwmApiPort(v41);
          DwmAsyncZorderSprite(v42, (__int64)v38, (__int64)NeighborSprite);
          DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v53);
        }
        v12 = v38;
        *((_DWORD *)v27 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      }
    }
    DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v50);
    v15 = (HWND)a2;
    v16 = 0;
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v52);
  if ( v16 )
    return GdiCreateSprite(a1, v15, a3);
  return v12;
}
