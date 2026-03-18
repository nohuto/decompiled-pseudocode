/*
 * XREFs of ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x140306398
 * Callers:
 *     NtGdiPlgBlt @ 0x140306FF0 (NtGdiPlgBlt.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x140076238 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x140077B78 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x140077F90 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x140078744 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x14007EE58 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14007EEC4 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140087A98 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1400A01E0 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1400A1DA4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DEF38 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z @ 0x140176E00 (-vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1401889D4 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x14019DB48 (-bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x14019E340 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x14019E3C8 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPlgBlt(
        struct XDCOBJ *a1,
        const struct _POINTL *a2,
        struct XDCOBJ *a3,
        LONG a4,
        int a5,
        unsigned int a6,
        int a7,
        HSURF a8,
        int a9,
        int a10,
        unsigned int a11)
{
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rdx
  DC *v22; // r8
  struct MATRIX *inited; // rax
  struct SURFACE *v24; // rax
  struct MATRIX *v25; // rax
  struct MATRIX *v26; // rax
  struct SURFACE *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned int v31; // r15d
  struct SURFACE *v32; // rbx
  __int64 v33; // rax
  struct Gre::Base::SESSION_GLOBALS **v34; // rcx
  struct SURFACE *v35; // rbx
  struct SURFACE *v36; // rbx
  __int64 v37; // rax
  ULONG v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // r8
  _BYTE v42[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v43[32]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v44; // [rsp+98h] [rbp-68h]
  _BYTE v45[112]; // [rsp+A0h] [rbp-60h] BYREF
  struct SURFACE *v46; // [rsp+110h] [rbp+10h]
  _BYTE v47[112]; // [rsp+120h] [rbp+20h] BYREF
  struct SURFACE *v48; // [rsp+190h] [rbp+90h]
  _BYTE v49[112]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct SURFACE *v50; // [rsp+210h] [rbp+110h]
  _BYTE v51[112]; // [rsp+220h] [rbp+120h] BYREF
  int v52; // [rsp+290h] [rbp+190h]
  struct Gre::Base::SESSION_GLOBALS *v53[16]; // [rsp+380h] [rbp+280h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v54[16]; // [rsp+400h] [rbp+300h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v55[16]; // [rsp+480h] [rbp+380h] BYREF
  _BYTE v56[8]; // [rsp+500h] [rbp+400h] BYREF
  __int64 v57; // [rsp+508h] [rbp+408h] BYREF
  __int64 v58; // [rsp+510h] [rbp+410h]
  __int64 v59; // [rsp+518h] [rbp+418h]
  __int64 v60; // [rsp+520h] [rbp+420h]
  __int64 v61; // [rsp+528h] [rbp+428h]
  struct SURFACE *v62; // [rsp+530h] [rbp+430h]
  struct SURFACE *v63; // [rsp+538h] [rbp+438h]
  __int64 v64; // [rsp+540h] [rbp+440h]
  _BYTE v65[8]; // [rsp+548h] [rbp+448h] BYREF
  __int64 v66; // [rsp+550h] [rbp+450h]
  struct _POINTFIX v67; // [rsp+560h] [rbp+460h] BYREF
  int v68; // [rsp+568h] [rbp+468h]
  int v69; // [rsp+56Ch] [rbp+46Ch]
  int v70; // [rsp+570h] [rbp+470h]
  int v71; // [rsp+574h] [rbp+474h]
  FIX v72; // [rsp+580h] [rbp+480h]
  FIX v73; // [rsp+584h] [rbp+484h]
  int v74; // [rsp+588h] [rbp+488h]
  int v75; // [rsp+58Ch] [rbp+48Ch]
  int v76; // [rsp+598h] [rbp+498h]
  int v77; // [rsp+59Ch] [rbp+49Ch]
  int v78; // [rsp+5A0h] [rbp+4A0h]
  int v79; // [rsp+5A4h] [rbp+4A4h]
  int v80; // [rsp+5A8h] [rbp+4A8h]
  int v81; // [rsp+5ACh] [rbp+4ACh]
  int v82; // [rsp+5B0h] [rbp+4B0h]
  int v83; // [rsp+5B4h] [rbp+4B4h]
  int v84; // [rsp+5C0h] [rbp+4C0h]
  int v85; // [rsp+5C4h] [rbp+4C4h]

  v11 = *(_QWORD *)a1;
  v12 = 0;
  v64 = 0LL;
  v85 = 0;
  if ( (*(_DWORD *)(v11 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
LABEL_8:
    BLTRECORD::~BLTRECORD((BLTRECORD *)v56, v16, v17);
    return v12;
  }
  bSpDwmValidateSurface(a3, a4, a5, a6, a7);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v51);
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v51, (struct _ERESOURCE ***)a1, a3) )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen(a1) || (unsigned int)XDCOBJ::bFullScreen(a3) )
      v12 = 1;
    goto LABEL_7;
  }
  v19 = 1;
  if ( !(unsigned int)XDCOBJ::bValidSurf(a1) || !(unsigned int)XDCOBJ::bValidSurf(a3) || (v52 & 0x800000) == 0 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
    if ( (*(_DWORD *)(v20 + 152) & 0x1000) != 0 )
      GreDCSelectBrush(*(_QWORD *)a1, *(_QWORD *)(v20 + 160));
    v21 = *(_QWORD *)(*(_QWORD *)a3 + 976LL);
    if ( (*(_DWORD *)(v21 + 152) & 0x1000) != 0 )
      GreDCSelectBrush(*(_QWORD *)a3, *(_QWORD *)(v21 + 160));
    v22 = *(DC **)a1;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 32LL) == 2 || !(unsigned int)XDCOBJ::bValidSurf(a3))
      && (*((_DWORD *)v22 + 9) & 0xE0) != 0 )
    {
      inited = DC::InitXform(v22, 0x204u);
      EXFORMOBJ::vInit((EXFORMOBJ *)v56, inited, 0);
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v56, a2, &v67, 3uLL) )
      {
LABEL_52:
        v38 = 87;
LABEL_54:
        EngSetLastError(v38);
        goto LABEL_55;
      }
      BLTRECORD::vExtrema((BLTRECORD *)v56);
      BLTRECORD::vBound((BLTRECORD *)v56, (struct ERECTL *)v42);
      XDCOBJ::vAccumulate(a1, (struct ERECTL *)v42);
    }
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) == 0 )
    {
      LOBYTE(v12) = *(_QWORD *)(*(_QWORD *)a1 + 496LL) == 0LL;
LABEL_7:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v51);
      goto LABEL_8;
    }
  }
  if ( (v52 & 0x400000) == 0 || (v24 = XDCOBJ::pSurfaceEff(a1), !(unsigned int)DestSurfaceAccessCheck(v24)) )
  {
    v38 = 5;
    goto LABEL_54;
  }
  v25 = DC::InitXform(*(DC **)a1, 0x204u);
  EXFORMOBJ::vInit((EXFORMOBJ *)v56, v25, 0);
  v62 = XDCOBJ::pSurfaceEff(a1);
  v58 = *((_QWORD *)v62 + 16);
  v59 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  v26 = DC::InitXform(*(DC **)a3, 0x204u);
  EXFORMOBJ::vInit((EXFORMOBJ *)&v57, v26, 0);
  v27 = XDCOBJ::pSurfaceEff(a3);
  v28 = *(_QWORD *)a1;
  v63 = v27;
  v29 = *((_QWORD *)v27 + 16);
  v30 = *(_QWORD *)a3;
  v60 = v29;
  v61 = *(_QWORD *)(v30 + 88);
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)v65,
                       0LL,
                       *(_DWORD *)(v28 + 120),
                       v29,
                       v58,
                       v61,
                       v59,
                       *(_DWORD *)(*(_QWORD *)(v28 + 976) + 184LL),
                       *(_DWORD *)(*(_QWORD *)(v28 + 976) + 176LL),
                       a11,
                       0) )
  {
    v85 |= 2u;
    v66 = 0LL;
    if ( (*(_BYTE *)(v57 + 32) & 1) != 0 && (unsigned int)BLTRECORD::Src((BLTRECORD *)v56, a4, a5, a6, a7) )
    {
      if ( a8 )
      {
        SURFREF::SURFREF((SURFREF *)v43, a8);
        if ( !v44
          || (INC_SHARE_REF_CNT(v44), v31 = 65540, v85 |= 0x30000u, v64 = v44, v84 = 43724, *(_WORD *)(v44 + 100))
          || *(_DWORD *)(v44 + 96) != 1 )
        {
          EngSetLastError(6u);
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v43);
          goto LABEL_7;
        }
        v80 = a9;
        v82 = a9 + v78 - v76;
        v81 = a10;
        v83 = a10 + v79 - v77;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v43);
      }
      else
      {
        v64 = 0LL;
        v31 = 4;
        v84 = 52428;
      }
      if ( EXFORMOBJ::bXform((EXFORMOBJ *)v56, a2, &v67, 3uLL) )
      {
        if ( v69 == v67.y
          && v70 == v67.x
          && (v67.x & 0xF) == 0
          && (v67.y & 0xF) == 0
          && (v68 & 0xF) == 0
          && (v69 & 0xF) == 0
          && (v70 & 0xF) == 0
          && (v71 & 0xF) == 0 )
        {
          v19 = 0;
          v75 = v71 >> 4;
          v72 = v67.x >> 4;
          v73 = v67.y >> 4;
          v74 = v68 >> 4;
        }
        if ( v19 )
        {
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v53, (struct Gre::Base::SESSION_GLOBALS **)a3);
          v32 = XDCOBJ::pSurfaceEff(a3);
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v45, v53);
          v33 = *(_QWORD *)a1;
          v46 = v32;
          v12 = BLTRECORD::bRotate(
                  (BLTRECORD *)v56,
                  (struct Gre::Base::SESSION_GLOBALS **)a1,
                  (struct BLTRECORD::PROXYDCOBJ *)v45,
                  v31,
                  *(_BYTE *)(*(_QWORD *)(v33 + 976) + 215LL));
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v45);
          v34 = v53;
        }
        else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 215LL) == 4
               || !BLTRECORD::bEqualExtents((BLTRECORD *)v56) )
        {
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v55, (struct Gre::Base::SESSION_GLOBALS **)a3);
          v36 = XDCOBJ::pSurfaceEff(a3);
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v49, v55);
          v37 = *(_QWORD *)a1;
          v50 = v36;
          v12 = BLTRECORD::bStretch(
                  (BLTRECORD *)v56,
                  a1,
                  (struct BLTRECORD::PROXYDCOBJ *)v49,
                  v31,
                  *(_BYTE *)(*(_QWORD *)(v37 + 976) + 215LL));
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v49);
          v34 = v55;
        }
        else
        {
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v54, (struct Gre::Base::SESSION_GLOBALS **)a3);
          v35 = XDCOBJ::pSurfaceEff(a3);
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v47, v54);
          v48 = v35;
          v12 = BLTRECORD::bBitBlt((BLTRECORD *)v56, a1, (struct BLTRECORD::PROXYDCOBJ *)v47, v31);
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v47);
          v34 = v54;
        }
        OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v34);
        goto LABEL_7;
      }
    }
    goto LABEL_52;
  }
LABEL_55:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v51);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v56, v39, v40);
  return 0LL;
}
