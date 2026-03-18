/*
 * XREFs of ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x14007DE28
 * Callers:
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x14007D1C4 (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401C4020 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z @ 0x1401D2F9C (-GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     GreDwmUseDeviceBitmaps @ 0x14007E3D0 (GreDwmUseDeviceBitmaps.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x14007E6B0 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140082160 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14009A8F4 (--0SURFREF@@QEAA@XZ.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1401C4248 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x14026108C (--0SURFREF@@QEAA@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

SURFREF *__fastcall CreateCompatibleSurface(
        SURFREF *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16)
{
  unsigned int v18; // esi
  int v19; // eax
  HSURF v20; // rbx
  __int64 (__fastcall *v21)(_QWORD, unsigned __int64, _QWORD); // rax
  int v22; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // r12d
  unsigned int v27; // r13d
  HSURF v28; // rax
  SURFACE *v29; // rax
  HSURF v30; // rax
  ThreadRestrictNewHandlesRegion *v31; // rcx
  int (*v32)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  struct SURFACE *v33; // [rsp+60h] [rbp-A0h] BYREF
  char v34; // [rsp+68h] [rbp-98h]
  int v35; // [rsp+6Ch] [rbp-94h]
  int v36; // [rsp+70h] [rbp-90h]
  unsigned __int64 v37; // [rsp+78h] [rbp-88h]
  _BYTE v38[32]; // [rsp+80h] [rbp-80h] BYREF
  SURFACE *v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v41[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  __int64 v44; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v45; // [rsp+D8h] [rbp-28h]
  unsigned int v46; // [rsp+DCh] [rbp-24h]
  _BYTE v47[96]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v48[96]; // [rsp+140h] [rbp+40h] BYREF

  v18 = a7;
  v36 = a15;
  v40 = a16;
  v41[2] = a6;
  v43 = 1LL;
  v44 = a2;
  v41[3] = 0;
  v41[1] = a5;
  v42 = a4;
  v41[0] = a3;
  v19 = 1;
  if ( (*(_DWORD *)(a2 + 40) & 0x8000) != 0 )
    v19 = 262145;
  LODWORD(v43) = v19;
  if ( !a7 )
  {
    if ( !a9 )
      goto LABEL_11;
    v18 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v44);
    if ( !v18 )
      goto LABEL_11;
  }
  if ( a9 )
  {
    v18 = GreDwmUseDeviceBitmaps();
    if ( !v18 )
      goto LABEL_11;
  }
  v20 = 0LL;
  v37 = __PAIR64__(a6, a5);
  if ( !a9 )
  {
    if ( !a11 )
    {
      v21 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(a2 + 2760);
      if ( !v21 )
      {
LABEL_11:
        v22 = 1;
        if ( !a9 )
          v22 = a8;
        v33 = 0LL;
        v34 = 0;
        LODWORD(v43) = (v22 != 0 ? 0x800 : 0) | v43;
        v35 = 0;
        SURFMEM::bCreateDIB((SURFMEM *)&v33, (struct _DEVBITMAPINFO *)v41, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( v33 )
        {
          v34 |= 1u;
          *((_DWORD *)v33 + 28) |= 0x800000u;
          *((_DWORD *)v33 + 28) |= 0x4000000u;
          *((_QWORD *)v33 + 6) = a2;
          if ( *((_QWORD *)v33 + 31) )
            *((_DWORD *)v33 + 28) |= 0x4000u;
          else
            *((_DWORD *)v33 + 28) |= 0x200u;
          EtwPhysicalSurfCreateEvent(*((_QWORD *)v33 + 4), 0LL, 0LL, v18);
          SURFREF::SURFREF(a1, v33);
        }
        else
        {
          SURFREF::SURFREF(a1);
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v33);
        return a1;
      }
      v20 = (HSURF)v21(*(_QWORD *)(a2 + 1784), v37, v41[0]);
      goto LABEL_10;
    }
    if ( !*(_QWORD *)(a2 + 3432) )
    {
LABEL_46:
      SURFREF::SURFREF(a1);
      return a1;
    }
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v48);
    v30 = (HSURF)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *))(a2 + 3432))(
                   *(_QWORD *)(a2 + 1784),
                   v37,
                   v41[0],
                   a12 != 0 ? 6 : 2,
                   0LL,
                   a14,
                   v36,
                   &v40);
    v20 = v30;
    if ( !v30 )
    {
LABEL_45:
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v48);
      if ( v20 )
        goto LABEL_20;
      goto LABEL_46;
    }
    SURFREF::SURFREF((SURFREF *)v38, v30);
    if ( v39 )
    {
      *((_DWORD *)v39 + 29) |= 8u;
      *((_QWORD *)v39 + 71) = v40;
      *((_DWORD *)v39 + 30) = a12 != 0 ? 6 : 2;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v38);
      goto LABEL_45;
    }
    SURFREF::SURFREF(a1);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v38);
    v31 = (ThreadRestrictNewHandlesRegion *)v48;
LABEL_48:
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion(v31);
    return a1;
  }
  v26 = 87;
  if ( a14 )
    v26 = a14;
  if ( *(_QWORD *)(a2 + 3432) )
  {
    v44 = 0LL;
    v27 = (a12 != 0 ? 5 : 1) | 8;
    if ( !a13 )
      v27 = a12 != 0 ? 5 : 1;
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v47);
    v28 = (HSURF)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *))(a2 + 3432))(
                   *(_QWORD *)(a2 + 1784),
                   v37,
                   v41[0],
                   v27,
                   0LL,
                   0,
                   v36,
                   &v44);
    v20 = v28;
    if ( v28 )
    {
      SURFREF::SURFREF((SURFREF *)v38, v28);
      v29 = v39;
      if ( !v39 )
      {
        SURFREF::SURFREF(a1);
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v38);
        v31 = (ThreadRestrictNewHandlesRegion *)v47;
        goto LABEL_48;
      }
      if ( a13 )
      {
        *((_DWORD *)v39 + 29) |= 0x400u;
        v29 = v39;
      }
      *((_DWORD *)v29 + 29) |= 1u;
      *((_QWORD *)v39 + 71) = v44;
      *((_DWORD *)v39 + 31) = v26;
      *((_DWORD *)v39 + 30) = v27;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v38);
    }
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v47);
    if ( v20 )
      goto LABEL_20;
  }
  if ( a10 )
    goto LABEL_46;
LABEL_10:
  if ( !v20 )
    goto LABEL_11;
LABEL_20:
  if ( (_DWORD)v20 == -1 )
    goto LABEL_11;
  SURFREF::SURFREF((SURFREF *)v38, v20);
  if ( v39 )
  {
    *((_DWORD *)v39 + 28) |= 0x800000u;
    *((_DWORD *)v39 + 28) |= 0x4000000u;
    *((_DWORD *)v39 + 28) |= 0x4000u;
    if ( v42 )
    {
      LOBYTE(v24) = 8;
      v25 = HmgShareLockCheck(v42, v24);
      if ( v25 )
        *((_QWORD *)v39 + 16) = v25;
    }
    if ( !a9 && (!a11 || !v40) )
    {
      v45 = a5;
      v46 = a6;
      v44 = 0LL;
      v32 = SURFACE::pfnBitBlt(v39);
      ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v32)(
        ((unsigned __int64)v39 + 24) & -(__int64)(v39 != 0LL),
        0LL,
        0LL,
        0LL,
        0LL,
        &v44,
        0LL,
        0LL,
        0LL,
        0LL,
        0);
    }
    EtwPhysicalSurfCreateEvent(v20, 1LL, *((_QWORD *)v39 + 71), 1LL);
  }
  SURFREF::SURFREF(a1, v38);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v38);
  return a1;
}
