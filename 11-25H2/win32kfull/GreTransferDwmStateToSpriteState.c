/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x14012313C
 * Callers:
 *     zzzDecomposeDesktop @ 0x1401229EC (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 * Callees:
 *     GreDeleteSprite @ 0x14005AEC4 (GreDeleteSprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14005B174 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     DwmAsyncDestroySprite @ 0x14005B354 (DwmAsyncDestroySprite.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14005CC08 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x14005CD64 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreReferenceObject @ 0x14005CDA4 (GreReferenceObject.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14007EEC4 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14008A2D8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14008D8A4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008E720 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x140095B18 (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095BDC (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095C14 (--0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095C60 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140095C98 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095D2C (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x14009DBE4 (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1400DEAC4 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34K.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1400E064C (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x140172F10 (UserIsWindowOnDesktopAndComposed.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1401DDA40 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x14032CDA0 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreTransferDwmStateToSpriteState(Gre::Base *a1, __int64 a2, HDC a3)
{
  unsigned int v4; // r15d
  struct Gre::Base::SESSION_GLOBALS *v5; // rbx
  Gre::Base *v6; // rcx
  Gre::Base *v7; // rcx
  HDC DisplayDC; // r12
  __int64 v9; // r13
  __int64 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned int v21; // r9d
  OPTAPIDCOBJ *v22; // rcx
  HDC v23; // rax
  __int64 v24; // r9
  LONG v25; // eax
  void *v26; // rbx
  void *v27; // rax
  struct tagSIZE v29; // [rsp+60h] [rbp-A0h] BYREF
  struct tagPOINT v30; // [rsp+68h] [rbp-98h] BYREF
  HDC v31; // [rsp+70h] [rbp-90h]
  struct tagSIZE v32; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v33; // [rsp+80h] [rbp-80h] BYREF
  Gre::Base *v34; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  struct tagPOINT v37; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-58h]
  struct Gre::Base::SESSION_GLOBALS *v39; // [rsp+B0h] [rbp-50h]
  _BYTE v40[16]; // [rsp+C0h] [rbp-40h] BYREF
  HSEMAPHORE v41; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-28h] BYREF
  HSEMAPHORE v43; // [rsp+E0h] [rbp-20h]
  HSEMAPHORE v44; // [rsp+E8h] [rbp-18h] BYREF
  HSEMAPHORE v45; // [rsp+F0h] [rbp-10h] BYREF
  HSEMAPHORE v46; // [rsp+F8h] [rbp-8h] BYREF
  HDC v47[16]; // [rsp+100h] [rbp+0h] BYREF
  char v48[16]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v49[128]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v50[176]; // [rsp+210h] [rbp+110h] BYREF

  v31 = a3;
  v35 = a2;
  v36 = 0LL;
  v34 = a1;
  v4 = 1;
  v5 = Gre::Base::Globals(a1);
  GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared((GreAcquireUnownedDMCLockShared *)v40, v5);
  SEMOBJ<2>::SEMOBJ<2>(&v41, v5);
  SEMOBJ<3>::SEMOBJ<3>(&v42, v5);
  v43 = (HSEMAPHORE)*((_QWORD *)a1 + 7);
  GreAcquireSemaphoreInternal(v43);
  GrepAcquireLockValidate<4>();
  SEMOBJ<6>::SEMOBJ<6>(&v44, v5);
  SEMOBJ<7>::SEMOBJ<7>(&v45, v5);
  SEMOBJ<8>::SEMOBJ<8>(&v46, (__int64)&v34);
  if ( !IsDwmActive(v6) )
    goto LABEL_41;
  DisplayDC = 0LL;
  v9 = 0LL;
  v39 = Gre::Base::Globals(v7);
  v10 = (__int64 *)(*((_QWORD *)v39 + 17) + 80LL);
  v11 = *v10;
  while ( (__int64 *)v11 != v10 )
  {
    v12 = v11 - 24;
    v13 = -v11;
    v14 = v12 & -(__int64)(v13 != 0);
    v15 = *(_QWORD *)(v14 + 0x90);
    if ( (*(_DWORD *)(v14 + 0x48) & 0x400000) != 0 )
    {
      v11 = *(_QWORD *)((v12 & -(__int64)(v13 != 0)) + 0x18);
      GreDeleteSprite(a1, 0LL, *(void **)v14, 1);
      goto LABEL_35;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)((v12 & -(__int64)(v13 != 0)) + 0x28), v35) )
    {
      v11 = *(_QWORD *)(v14 + 24);
      goto LABEL_35;
    }
    if ( !GdiCreateSprite(a1, *(HWND *)(v14 + 40), (struct _RECTL *)(v14 + 56)) )
    {
      v4 = 0;
      goto LABEL_34;
    }
    v18 = *(_QWORD *)(v15 + 184);
    v4 = 1;
    if ( v18 )
    {
      v19 = *(_DWORD *)(v15 + 244);
      if ( (v19 & 0x20) != 0 )
      {
        v9 = 0LL;
      }
      else
      {
        v9 = v18 - 24;
        *(_DWORD *)(v15 + 244) = v19 | 0x20;
        GreReferenceObject(*(HSURF *)(v18 - 24 + 32));
      }
      SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, (HDEV)a1, 0LL);
    }
    else if ( !(unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v14 + 40), v16) )
    {
      goto LABEL_34;
    }
    v20 = *(_QWORD *)(v14 + 72) - v36;
    if ( !v20 )
      v20 = *(unsigned int *)(v14 + 80) - (unsigned __int64)(unsigned int)v36;
    if ( !v20 )
    {
      *(_DWORD *)(v14 + 72) = 4;
      *(_DWORD *)(v14 + 76) = 16711680;
    }
    if ( !v18 )
    {
      v25 = *(_DWORD *)(v14 + 56);
      v32 = 0LL;
      v33.x = v25;
      v33.y = *(_DWORD *)(v14 + 60);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v47, 0LL);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v50, 0LL);
      GdiUpdateSprite(
        a1,
        *(HWND *)(v14 + 40),
        0LL,
        (struct OPTAPIDCOBJ *)v47,
        (struct _POINTL *)&v33,
        &v32,
        (struct OPTAPIDCOBJ *)v50,
        0LL,
        *(_DWORD *)(v14 + 80),
        (struct _BLENDFUNCTION *)(v14 + 76),
        *(_DWORD *)(v14 + 72) | 0x20000000,
        0LL);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v50);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v47);
      goto LABEL_34;
    }
    v21 = *(_DWORD *)(v15 + 252);
    if ( (v21 & 1) != 0 )
    {
      GdiHintSpriteShape((HDEV)a1, *(HWND *)(v14 + 40), *(HBITMAP *)(v18 + 8), (v21 >> 6) & 1, 1);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v49, 0LL);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v47, 0LL);
      GdiUpdateSprite(
        a1,
        *(HWND *)(v14 + 40),
        0LL,
        (struct OPTAPIDCOBJ *)v49,
        0LL,
        0LL,
        (struct OPTAPIDCOBJ *)v47,
        0LL,
        *(_DWORD *)(v14 + 80),
        (struct _BLENDFUNCTION *)(v14 + 76),
        *(_DWORD *)(v14 + 72) | 0x20000000,
        0LL);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v47);
      v22 = (OPTAPIDCOBJ *)v49;
    }
    else
    {
      v30 = 0LL;
      v37 = 0LL;
      v29 = 0LL;
      if ( !DisplayDC )
        DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL, 0LL);
      v23 = v31;
      if ( !v31 )
        goto LABEL_31;
      if ( !DisplayDC )
        goto LABEL_31;
      *(_DWORD *)(v9 + 112) |= 0x4000000u;
      v38 = GreSelectBitmap(v23, *(_QWORD *)(v18 + 8));
      if ( !v38 )
        goto LABEL_31;
      v30 = *(struct tagPOINT *)(v14 + 56);
      v29 = *(struct tagSIZE *)(v18 + 32);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v50, DisplayDC);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v47, v31);
      GdiUpdateSprite(
        a1,
        *(HWND *)(v14 + 40),
        0LL,
        (struct OPTAPIDCOBJ *)v50,
        (struct _POINTL *)&v30,
        &v29,
        (struct OPTAPIDCOBJ *)v47,
        (struct _POINTL *)&v37,
        *(_DWORD *)(v14 + 80),
        (struct _BLENDFUNCTION *)(v14 + 76),
        *(_DWORD *)(v14 + 72) | 0x20000000,
        0LL);
      if ( OPTAPIDCOBJ::bValid(v47) )
      {
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v49, (struct Gre::Base::SESSION_GLOBALS **)v47);
        LOBYTE(v24) = 4;
        GrepSelectBitmap(v48, v49, v38, v24);
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v49);
      }
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v47);
      v22 = (OPTAPIDCOBJ *)v50;
    }
    OPTAPIDCOBJ::~OPTAPIDCOBJ(v22);
LABEL_31:
    SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v15, (HSURF *)v9);
LABEL_34:
    v11 = *(_QWORD *)(v14 + 24);
    v26 = *(void **)v14;
    v27 = (void *)UserReferenceDwmApiPort(v17);
    DwmAsyncDestroySprite(v27, (__int64)v26);
    vspDestroyDwmSpriteObjInternal((HDEV)a1, 0LL, (struct DWMSPRITE *)v14);
LABEL_35:
    v10 = (__int64 *)(*((_QWORD *)v39 + 17) + 80LL);
  }
  if ( (*((_DWORD *)a1 + 10) & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v34);
  if ( DisplayDC )
    GreDeleteDC(DisplayDC);
LABEL_41:
  ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v40);
  return v4;
}
