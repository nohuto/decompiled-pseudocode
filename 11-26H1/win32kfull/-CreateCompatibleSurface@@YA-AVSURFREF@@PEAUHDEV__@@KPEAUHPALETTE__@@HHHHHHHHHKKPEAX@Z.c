/*
 * XREFs of ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x140017A80
 * Callers:
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x1400173F4 (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ?GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z @ 0x1401C306C (-GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401C32E0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x14001811C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x140018158 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1400AED70 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CreateCompatibleSurface(
        __int64 a1,
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
  unsigned int v17; // r12d
  __int64 v19; // rcx
  unsigned int v20; // esi
  int v21; // eax
  __int64 (__fastcall *v22)(_QWORD, unsigned __int64, _QWORD); // rax
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rdi
  Gre::Base *v26; // rcx
  struct Gre::Base::SESSION_GLOBALS *v27; // rax
  SURFACE *v29; // rax
  unsigned int v30; // ecx
  Gre::Base *v31; // rcx
  struct Gre::Base::SESSION_GLOBALS *v32; // rax
  __int64 v33; // r8
  SURFACE *v34; // rax
  Gre::Base *v35; // rcx
  int v36; // r12d
  unsigned int v37; // edi
  HSURF v38; // rax
  ThreadRestrictNewHandlesRegion *v39; // rcx
  __int64 v40; // rsi
  struct Gre::Base::SESSION_GLOBALS *v41; // rax
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned int v44; // r12d
  HSURF v45; // rax
  int (*v46)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  char v48; // [rsp+68h] [rbp-98h]
  int v49; // [rsp+6Ch] [rbp-94h]
  int v50; // [rsp+70h] [rbp-90h]
  _OWORD v51[2]; // [rsp+78h] [rbp-88h] BYREF
  SURFACE *v52; // [rsp+98h] [rbp-68h]
  unsigned __int64 v53; // [rsp+A0h] [rbp-60h]
  unsigned int v54; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v56[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v60; // [rsp+E0h] [rbp-20h]
  unsigned int v61; // [rsp+E4h] [rbp-1Ch]
  _BYTE v62[96]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v63[96]; // [rsp+150h] [rbp+50h] BYREF

  v17 = a5;
  v19 = 262145LL;
  v20 = a7;
  v50 = a15;
  v55 = a16;
  v58 = 1LL;
  v59 = a2;
  v56[3] = 0;
  v56[1] = a5;
  v56[2] = a6;
  v57 = a4;
  v21 = 1;
  v56[0] = a3;
  if ( (*(_DWORD *)(a2 + 40) & 0x8000) != 0 )
    v21 = 262145;
  LODWORD(v58) = v21;
  if ( !a7 )
  {
    if ( !a9 )
      goto LABEL_15;
    v20 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v59);
    if ( !v20 )
      goto LABEL_15;
  }
  if ( a9 )
  {
    v20 = 0;
    if ( *((_QWORD *)Gre::Base::Globals((Gre::Base *)v19) + 28) )
      v20 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState() + 96) + 88LL);
    if ( !v20 )
      goto LABEL_15;
  }
  v53 = __PAIR64__(a6, a5);
  if ( a9 )
  {
    v36 = 87;
    if ( a14 )
      v36 = a14;
    if ( *(_QWORD *)(a2 + 3432) )
    {
      v59 = 0LL;
      v37 = (a12 != 0 ? 5 : 1) | 8;
      if ( !a13 )
        v37 = a12 != 0 ? 5 : 1;
      v54 = v37;
      ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v62);
      v38 = (HSURF)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *))(a2 + 3432))(
                     *(_QWORD *)(a2 + 1784),
                     v53,
                     v56[0],
                     v37,
                     0LL,
                     0,
                     v50,
                     &v59);
      v23 = (__int64)v38;
      if ( v38 )
      {
        SURFREF::SURFREF((SURFREF *)v51, v38);
        v29 = v52;
        if ( !v52 )
        {
          UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
          *(_QWORD *)(a1 + 32) = 0LL;
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v51);
          v39 = (ThreadRestrictNewHandlesRegion *)v62;
          goto LABEL_43;
        }
        if ( a13 )
        {
          *((_DWORD *)v52 + 29) |= 0x400u;
          v29 = v52;
        }
        *((_DWORD *)v29 + 29) |= 1u;
        *((_QWORD *)v52 + 71) = v59;
        v30 = v54;
        *((_DWORD *)v52 + 31) = v36;
        *((_DWORD *)v52 + 30) = v30;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v51);
      }
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v62);
      if ( v23 )
        goto LABEL_29;
    }
    if ( !a10 )
      goto LABEL_15;
LABEL_54:
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
    *(_QWORD *)(a1 + 32) = 0LL;
    return a1;
  }
  if ( a11 )
  {
    if ( *(_QWORD *)(a2 + 3432) )
    {
      ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v63);
      v44 = a12 != 0 ? 6 : 2;
      v45 = (HSURF)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *))(a2 + 3432))(
                     *(_QWORD *)(a2 + 1784),
                     v53,
                     v56[0],
                     v44,
                     0LL,
                     a14,
                     v50,
                     &v55);
      v23 = (__int64)v45;
      if ( !v45 )
        goto LABEL_53;
      SURFREF::SURFREF((SURFREF *)v51, v45);
      if ( v52 )
      {
        *((_DWORD *)v52 + 29) |= 8u;
        *((_QWORD *)v52 + 71) = v55;
        *((_DWORD *)v52 + 30) = v44;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v51);
LABEL_53:
        ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v63);
        if ( !v23 )
          goto LABEL_54;
LABEL_29:
        v17 = a5;
        goto LABEL_30;
      }
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
      *(_QWORD *)(a1 + 32) = 0LL;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v51);
      v39 = (ThreadRestrictNewHandlesRegion *)v63;
LABEL_43:
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion(v39);
      return a1;
    }
    goto LABEL_54;
  }
  v22 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(a2 + 2760);
  if ( !v22 )
    goto LABEL_15;
  v23 = v22(*(_QWORD *)(a2 + 1784), v53, v56[0]);
  if ( !v23 )
    goto LABEL_15;
LABEL_30:
  if ( (_DWORD)v23 == -1 )
  {
LABEL_15:
    v47 = 0LL;
    v24 = 1;
    if ( !a9 )
      v24 = a8;
    v48 = 0;
    v49 = 0;
    LODWORD(v58) = (v24 != 0 ? 0x800 : 0) | v58;
    SURFMEM::bCreateDIB((SURFMEM *)&v47, (struct _DEVBITMAPINFO *)v56, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
    if ( v47 )
    {
      v48 |= 1u;
      *(_DWORD *)(v47 + 112) |= 0x800000u;
      *(_DWORD *)(v47 + 112) |= 0x4000000u;
      *(_QWORD *)(v47 + 48) = a2;
      if ( *(_QWORD *)(v47 + 248) )
        *(_DWORD *)(v47 + 112) |= 0x4000u;
      else
        *(_DWORD *)(v47 + 112) |= 0x200u;
      EtwPhysicalSurfCreateEvent(*(_QWORD *)(v47 + 32), 0LL, 0LL, v20);
      v25 = v47;
      *(_OWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 16) = 0LL;
      PushThreadGuardedObject(
        a1,
        a1,
        UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
      if ( v25 )
      {
        *(_QWORD *)(a1 + 32) = v25;
        v27 = Gre::Base::Globals(v26);
        INC_SHARE_REF_CNT(v27, *(_QWORD *)(a1 + 32));
      }
    }
    else
    {
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v47);
    return a1;
  }
  memset(v51, 0, sizeof(v51));
  PushThreadGuardedObject(
    v51,
    v51,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  v32 = Gre::Base::Globals(v31);
  LOBYTE(v33) = 5;
  v34 = (SURFACE *)HmgShareLock(v32, v23, v33, 0LL);
  v52 = v34;
  if ( v34 )
  {
    *((_DWORD *)v34 + 28) |= 0x800000u;
    *((_DWORD *)v52 + 28) |= 0x4000000u;
    *((_DWORD *)v52 + 28) |= 0x4000u;
    v40 = v57;
    if ( v57 )
    {
      v41 = Gre::Base::Globals(v35);
      LOBYTE(v42) = 8;
      v43 = HmgShareLock(v41, v40, v42, 0LL);
      if ( v43 )
        *((_QWORD *)v52 + 16) = v43;
    }
    if ( !a9 && (!a11 || !v55) )
    {
      v61 = a6;
      v59 = 0LL;
      v60 = v17;
      v46 = SURFACE::pfnBitBlt(v52);
      ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v46)(
        ((unsigned __int64)v52 + 24) & -(__int64)(v52 != 0LL),
        0LL,
        0LL,
        0LL,
        0LL,
        &v59,
        0LL,
        0LL,
        0LL,
        0LL,
        0);
    }
    EtwPhysicalSurfCreateEvent(v23, 1LL, *((_QWORD *)v52 + 71), 1LL);
  }
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
  *(_QWORD *)(a1 + 32) = v52;
  v52 = 0LL;
  PopThreadGuardedObject(v51);
  return a1;
}
