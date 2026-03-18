/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1400A34B8
 * Callers:
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x14009AEF8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1400A1B40 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     GreCreateSprite @ 0x1400A33C0 (GreCreateSprite.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140073358 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14009D0A4 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x14009E12C (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     DwmAsyncCreateSprite @ 0x1400A19E8 (DwmAsyncCreateSprite.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1400A1FFC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1400A3968 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1400D0098 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x14018532C (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x1401C84C4 (DwmAsyncZorderSprite.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void *__fastcall GreCreateSpriteInternal(
        Gre::Base *a1,
        __int64 a2,
        struct tagRECT *a3,
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
  HWND v14; // rdi
  __int64 v16; // r13
  Gre::Base *v17; // rcx
  __int64 *v18; // rbx
  Gre::Base *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  HSPRITE DwmSpriteObj; // rbx
  Gre::Base *v24; // rcx
  struct Gre::Base::SESSION_GLOBALS *v25; // rax
  __int64 v26; // r8
  DWMSPRITE *v27; // rdi
  SFMLOGICALSURFACE *v28; // r15
  struct tagRECT *v29; // rbx
  unsigned int v30; // ecx
  int v31; // edx
  int v32; // edx
  int v33; // eax
  struct REGION *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ebx
  void *v39; // rax
  Gre::Base *v40; // rcx
  struct Gre::Base::SESSION_GLOBALS *v41; // rax
  __int64 v42; // rbx
  Gre::Base *v44; // rcx
  struct Gre::Base::SESSION_GLOBALS *v45; // rax
  __int64 v46; // r8
  __int64 v47; // rcx
  void *v48; // rax
  struct DWMSPRITE *v49; // r8
  int v50; // [rsp+40h] [rbp-C0h]
  __int64 v51; // [rsp+48h] [rbp-B8h]
  struct REGION *v53; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v54[2]; // [rsp+60h] [rbp-A0h] BYREF
  DWMSPRITE *v55; // [rsp+80h] [rbp-80h]
  __int64 NeighborSprite; // [rsp+88h] [rbp-78h]
  _OWORD v57[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-50h]
  _OWORD v59[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  __int64 v62; // [rsp+F0h] [rbp-10h]
  _BYTE v63[32]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v64[96]; // [rsp+170h] [rbp+70h] BYREF

  v53 = a12;
  v14 = (HWND)a2;
  v16 = 0LL;
  v50 = 1;
  v18 = (__int64 *)Gre::Base::Globals(a1);
  if ( !a6 || !IsDwmActive(v17) )
    return GdiCreateSprite((HDEV)a1, v14, a3);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v63, v18, (__int64)a1, 0);
  if ( IsDwmActive(v19) )
  {
    memset_0(v59, 0, 0x88uLL);
    v50 = 0;
    if ( a4 )
      v22 = *((_QWORD *)a4 + 6);
    else
      v22 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 18704);
    memset(v54, 0, sizeof(v54));
    PushThreadGuardedObject(
      v54,
      v54,
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
    v55 = 0LL;
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v64);
    DwmSpriteObj = hspCreateDwmSpriteObj(v14, v22, (HDEV)a1, a8);
    v25 = Gre::Base::Globals(v24);
    if ( DwmSpriteObj )
    {
      LOBYTE(v26) = 15;
      v55 = (DWMSPRITE *)HmgLock(v25, DwmSpriteObj, v26, 0LL);
    }
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v64);
    v27 = v55;
    if ( v55 )
    {
      v28 = (SFMLOGICALSURFACE *)*((_QWORD *)v55 + 18);
      v29 = (struct tagRECT *)((char *)v55 + 56);
      *((_DWORD *)v55 + 29) = 0;
      if ( a3 )
        *v29 = *a3;
      v30 = *((_DWORD *)v27 + 34) & 0xFFFFFFFE | (a7 != 0);
      *((_DWORD *)v27 + 34) = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(2 * a8)) & 2;
      v31 = *((_DWORD *)v28 + 63) ^ ((unsigned __int8)*((_DWORD *)v28 + 63) ^ (unsigned __int8)(16 * a8)) & 0x10;
      *((_DWORD *)v28 + 63) = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)(4 * a9)) & 4;
      v32 = *((_DWORD *)v27 + 34) ^ ((unsigned __int8)*((_DWORD *)v27 + 34) ^ (unsigned __int8)(8 * a10)) & 8;
      v33 = v32 ^ ((unsigned __int8)v32 ^ (unsigned __int8)(a11 << 6)) & 0x40;
      v34 = v53;
      *((_DWORD *)v27 + 34) = v33;
      DWMSPRITE::vUpdateDpiScaling(v27, (const unsigned __int16 *)v34);
      v51 = *(_QWORD *)v27;
      NeighborSprite = hspGetNeighborSprite(*(Gre::Base **)v27, 0, 1);
      if ( !a2 && !a4 )
      {
        if ( v27 != (DWMSPRITE *)-56LL )
        {
          v59[0] = *v29;
          v59[1] = v59[0];
        }
        v60 = 0LL;
        v61 = 0LL;
        a4 = (struct tagMINIWINDOWINFO *)v59;
        v62 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 18704);
      }
      if ( (*((_DWORD *)v28 + 63) & 4) != 0 )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v53);
        SFMLOGICALSURFACE::vDirtyRegionAccum(v28, v53);
      }
      v37 = *((_DWORD *)v27 + 34) & 1;
      v38 = *((_DWORD *)v28 + 63) & 0xC | v37 | (2
                                               * (*((_DWORD *)v28 + 63) & 1 | *((_DWORD *)v27 + 34) & 0x40 | (4 * (*((_DWORD *)v27 + 34) & 0xE))));
      v39 = (void *)UserReferenceDwmApiPort(v37);
      if ( (int)DwmAsyncCreateSprite(v39, v51, a2, (__int128 *)&a3->left, v38, (__int128 *)a4, a5) < 0 )
      {
        v49 = v55;
        if ( v55 )
          _InterlockedDecrement16((volatile signed __int16 *)v55 + 6);
        v55 = 0LL;
        vspDestroyDwmSpriteObjInternal(a1, 0LL, v49);
      }
      else
      {
        v41 = Gre::Base::Globals(v40);
        v42 = NeighborSprite;
        if ( NeighborSprite && *(_QWORD *)(*((_QWORD *)v41 + 28) + 144LL) )
        {
          memset(v57, 0, sizeof(v57));
          PushThreadGuardedObject(
            v57,
            v57,
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
          v58 = 0LL;
          v45 = Gre::Base::Globals(v44);
          LOBYTE(v46) = 15;
          v58 = HmgLock(v45, v42, v46, 0LL);
          v48 = (void *)UserReferenceDwmApiPort(v47);
          DwmAsyncZorderSprite(v48);
          if ( v58 )
            _InterlockedDecrement16((volatile signed __int16 *)(v58 + 12));
          v58 = 0LL;
          PopThreadGuardedObject(v57);
        }
        *((_DWORD *)v27 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
        v16 = v51;
        *((_BYTE *)v27 + 126) = (unsigned int)UserIsCurrentProcessImmersiveAppContainer() != 0;
      }
      if ( v55 )
        _InterlockedDecrement16((volatile signed __int16 *)v55 + 6);
    }
    v55 = 0LL;
    PopThreadGuardedObject(v54);
    v14 = (HWND)a2;
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v63);
  if ( v50 )
    return GdiCreateSprite((HDEV)a1, v14, a3);
  return (void *)v16;
}
