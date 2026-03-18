/*
 * XREFs of ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140076840
 * Callers:
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1400757E8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x14009D800 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x1403442D4 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x14009E158 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14009EA74 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1400A3ED4 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1400D0098 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401C32E0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1401EA0C0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpDwmCreateLogicalSurface(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct tagSIZE *a4,
        struct SFMLOGICALSURFACE **a5)
{
  int v9; // r15d
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  struct SFMLOGICALSURFACE *v14; // rax
  Gre::Base *v15; // rcx
  HLSURF HLSURFClone; // rdi
  struct Gre::Base::SESSION_GLOBALS *v17; // rax
  __int64 v18; // r8
  HDEV v19; // rdx
  HDEV v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  SURFACE *v24; // r13
  Gre::Base *v26; // rcx
  HLSURF v27; // r14
  struct Gre::Base::SESSION_GLOBALS *v28; // rax
  __int64 v29; // r8
  HDEV v30; // rdx
  struct SFMLOGICALSURFACE *v31; // r14
  HDEV v32; // rdx
  Gre::Base *v33; // rcx
  __int64 v34; // rsi
  struct Gre::Base::SESSION_GLOBALS *v35; // rbx
  _OWORD v36[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct SFMLOGICALSURFACE *v37; // [rsp+50h] [rbp-B0h]
  int v38; // [rsp+58h] [rbp-A8h]
  HDEV v39; // [rsp+60h] [rbp-A0h]
  _BYTE v40[32]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h]
  _BYTE v42[96]; // [rsp+90h] [rbp-70h] BYREF

  v39 = a1;
  memset(v36, 0, sizeof(v36));
  v9 = 1;
  PushThreadGuardedObject(
    v36,
    v36,
    UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
  v10 = 0;
  v37 = 0LL;
  v38 = 0;
  if ( a4 )
  {
    v11 = *((_QWORD *)a3 + 23);
    if ( v11 || (*((_DWORD *)a3 + 61) & 1) != 0 )
    {
      v12 = 0;
      v13 = 0;
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 36);
        v13 = *(_DWORD *)(v11 + 32);
      }
      if ( a4->cx == v13 && a4->cy == v12 )
        goto LABEL_18;
      *((_DWORD *)a2 + 16) = *((_DWORD *)a2 + 14);
      *((_DWORD *)a2 + 17) = *((_DWORD *)a2 + 15);
      v14 = *a5;
      if ( *a5 == a3 )
      {
        ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v42);
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
        if ( HLSURFClone )
        {
          v17 = Gre::Base::Globals(v15);
          LOBYTE(v18) = 18;
          v37 = (struct SFMLOGICALSURFACE *)HmgLock(v17, HLSURFClone, v18, 0LL);
        }
        ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v42);
        a3 = v37;
        if ( !v37 )
          goto LABEL_19;
        DWMSPRITE::SetLogicalSurface(a2, v19, 0LL);
        DWMSPRITE::SetLogicalSurface(a2, v20, a3);
        *a5 = a3;
        goto LABEL_11;
      }
    }
    else
    {
      v14 = *a5;
      if ( *a5 == a3 )
      {
LABEL_11:
        DWMSPRITE::vUpdateDpiScaling(a2, 0LL);
        if ( (*((_DWORD *)a2 + 34) & 0x20) != 0 )
        {
          bFToL(v21, a4, 6LL);
          bFToL(v22, &a4->cy, v23);
        }
        SpCreateSurface(v40, a1, a4);
        v24 = (SURFACE *)v41;
        if ( v41 )
        {
          SFMLOGICALSURFACE::SetShape(a3, v39, (struct _SURFOBJ *)(v41 + 24));
          *((_DWORD *)a3 + 63) |= 8u;
          *((_DWORD *)a2 + 16) = a4->cx + *((_DWORD *)a2 + 14);
          *((_DWORD *)a2 + 17) = a4->cy + *((_DWORD *)a2 + 15);
          if ( *((_BYTE *)a2 + 126) )
            SURFACE::set_AppContainerW32PID(v24, *((_DWORD *)a2 + 28));
        }
        else
        {
          v9 = 0;
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v40);
        goto LABEL_18;
      }
    }
    a3 = v14;
    goto LABEL_11;
  }
  if ( *a5 != a3 )
  {
LABEL_18:
    v10 = v9;
LABEL_19:
    SFMLOGICALSURFACEREF_vDestructor((__int64)v36);
    PopThreadGuardedObject(v36);
    return v10;
  }
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v42);
  v27 = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
  if ( v27 )
  {
    v28 = Gre::Base::Globals(v26);
    LOBYTE(v29) = 18;
    v37 = (struct SFMLOGICALSURFACE *)HmgLock(v28, v27, v29, 0LL);
  }
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v42);
  v31 = v37;
  if ( v37 )
  {
    DWMSPRITE::SetLogicalSurface(a2, v30, 0LL);
    DWMSPRITE::SetLogicalSurface(a2, v32, v31);
    v34 = (*((_QWORD *)a3 + 23) - 24LL) & -(__int64)(*((_QWORD *)a3 + 23) != 0LL);
    if ( v34 )
    {
      v35 = Gre::Base::Globals(v33);
      INC_SHARE_REF_CNT(v35, v34);
      SFMLOGICALSURFACE::SetShape(a3, a1, 0LL);
      SFMLOGICALSURFACE::SetShape(v31, a1, (struct _SURFOBJ *)(v34 + 24));
      *((_DWORD *)v31 + 63) |= 8u;
      DEC_SHARE_REF_CNT(v35, v34);
    }
    *a5 = v31;
    goto LABEL_18;
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v36);
  return 0LL;
}
