/*
 * XREFs of ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908
 * Callers:
 *     NtGdiPlgBlt @ 0x14031E570 (NtGdiPlgBlt.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140015900 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x14006AB54 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x140077804 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x14007813C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x14007F744 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1400AB9A0 (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400ABEE8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400BB8E8 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x14016BC60 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x14016C4C0 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1401A90FC (-bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1401AACE4 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1401AAD6C (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z @ 0x1401AB8EC (-vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1401F66A8 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPlgBlt(
        struct XDCOBJ *a1,
        const struct _POINTL *a2,
        struct XDCOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        HSURF a8,
        int a9,
        int a10,
        unsigned int a11)
{
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  DC *v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  struct MATRIX *inited; // rax
  struct SURFACE *v24; // rax
  struct MATRIX *v25; // rax
  struct MATRIX *v26; // rax
  struct SURFACE *v27; // rax
  __int64 v28; // r10
  __int64 v29; // r11
  __int64 v30; // rax
  unsigned int v31; // r14d
  __int64 v32; // rax
  struct SURFACE *v33; // rbx
  OPTAPIDCOBJ *v34; // rcx
  struct SURFACE *v35; // rbx
  __int64 v36; // rax
  struct SURFACE *v37; // rbx
  __int64 v38; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  _BYTE v45[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h]
  _BYTE v47[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v48[72]; // [rsp+A0h] [rbp-60h] BYREF
  int v49; // [rsp+E8h] [rbp-18h]
  _BYTE v50[104]; // [rsp+200h] [rbp+100h] BYREF
  struct SURFACE *v51; // [rsp+268h] [rbp+168h]
  _BYTE v52[104]; // [rsp+270h] [rbp+170h] BYREF
  struct SURFACE *v53; // [rsp+2D8h] [rbp+1D8h]
  _BYTE v54[104]; // [rsp+2E0h] [rbp+1E0h] BYREF
  struct SURFACE *v55; // [rsp+348h] [rbp+248h]
  _BYTE v56[112]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v57[112]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _BYTE v58[112]; // [rsp+430h] [rbp+330h] BYREF
  _BYTE v59[8]; // [rsp+4A0h] [rbp+3A0h] BYREF
  __int64 v60; // [rsp+4A8h] [rbp+3A8h] BYREF
  __int64 v61; // [rsp+4B0h] [rbp+3B0h]
  Gre::Base *v62; // [rsp+4B8h] [rbp+3B8h]
  __int64 v63; // [rsp+4C0h] [rbp+3C0h]
  __int64 v64; // [rsp+4C8h] [rbp+3C8h]
  struct SURFACE *v65; // [rsp+4D0h] [rbp+3D0h]
  struct SURFACE *v66; // [rsp+4D8h] [rbp+3D8h]
  __int64 v67; // [rsp+4E0h] [rbp+3E0h]
  _BYTE v68[8]; // [rsp+4E8h] [rbp+3E8h] BYREF
  __int64 v69; // [rsp+4F0h] [rbp+3F0h]
  struct _POINTFIX v70; // [rsp+500h] [rbp+400h] BYREF
  int v71; // [rsp+508h] [rbp+408h]
  int v72; // [rsp+50Ch] [rbp+40Ch]
  int v73; // [rsp+510h] [rbp+410h]
  int v74; // [rsp+514h] [rbp+414h]
  FIX v75; // [rsp+520h] [rbp+420h]
  FIX v76; // [rsp+524h] [rbp+424h]
  int v77; // [rsp+528h] [rbp+428h]
  int v78; // [rsp+52Ch] [rbp+42Ch]
  int v79; // [rsp+538h] [rbp+438h]
  int v80; // [rsp+53Ch] [rbp+43Ch]
  int v81; // [rsp+540h] [rbp+440h]
  int v82; // [rsp+544h] [rbp+444h]
  int v83; // [rsp+548h] [rbp+448h]
  int v84; // [rsp+54Ch] [rbp+44Ch]
  int v85; // [rsp+550h] [rbp+450h]
  int v86; // [rsp+554h] [rbp+454h]
  int v87; // [rsp+560h] [rbp+460h]
  int v88; // [rsp+564h] [rbp+464h]

  v11 = *(_QWORD *)a1;
  v12 = 0;
  v67 = 0LL;
  v88 = 0;
  if ( (*(_DWORD *)(v11 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
LABEL_50:
    BLTRECORD::~BLTRECORD((BLTRECORD *)v59, v17, v18);
    return v12;
  }
  bSpDwmValidateSurface(a3, a4, a5, a6, a7);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v48);
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v48, (struct _ERESOURCE ***)a1, a3) )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen(a1) || (unsigned int)XDCOBJ::bFullScreen(a3) )
      v12 = 1;
    goto LABEL_49;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf(a1) || !(unsigned int)XDCOBJ::bValidSurf(a3) || (v49 & 0x800000) == 0 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
    if ( (*(_DWORD *)(v22 + 152) & 0x1000) != 0 )
      GreDCSelectBrush(*(_QWORD *)a1, *(_QWORD *)(v22 + 160));
    v19 = *(_QWORD *)(*(_QWORD *)a3 + 976LL);
    if ( (*(_DWORD *)(v19 + 152) & 0x1000) != 0 )
      GreDCSelectBrush(*(_QWORD *)a3, *(_QWORD *)(v19 + 160));
    v20 = *(DC **)a1;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 32LL) == 2 || !(unsigned int)XDCOBJ::bValidSurf(a3))
      && (*((_DWORD *)v20 + 9) & 0xE0) != 0 )
    {
      inited = DC::InitXform(v20, 0x204u);
      EXFORMOBJ::vInit((EXFORMOBJ *)v59, inited, 0);
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v59, a2, &v70, 3uLL) )
        goto LABEL_48;
      BLTRECORD::vExtrema((BLTRECORD *)v59);
      BLTRECORD::vBound((BLTRECORD *)v59, (struct ERECTL *)v47);
      XDCOBJ::vAccumulate(a1, (struct ERECTL *)v47);
    }
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) == 0 )
    {
      LOBYTE(v12) = *(_QWORD *)(*(_QWORD *)a1 + 496LL) == 0LL;
LABEL_49:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v48, v19, (__int64)v20, v21);
      goto LABEL_50;
    }
  }
  if ( (v49 & 0x400000) != 0 )
  {
    v24 = XDCOBJ::pSurfaceEff(a1);
    if ( (unsigned int)DestSurfaceAccessCheck(v24) )
    {
      v25 = DC::InitXform(*(DC **)a1, 0x204u);
      EXFORMOBJ::vInit((EXFORMOBJ *)v59, v25, 0);
      v65 = XDCOBJ::pSurfaceEff(a1);
      v61 = *((_QWORD *)v65 + 16);
      v62 = *(Gre::Base **)(*(_QWORD *)a1 + 88LL);
      v26 = DC::InitXform(*(DC **)a3, 0x204u);
      EXFORMOBJ::vInit((EXFORMOBJ *)&v60, v26, 0);
      v27 = XDCOBJ::pSurfaceEff(a3);
      v28 = *(_QWORD *)a1;
      v66 = v27;
      v29 = *((_QWORD *)v27 + 16);
      v30 = *(_QWORD *)a3;
      v63 = v29;
      v64 = *(_QWORD *)(v30 + 88);
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (Gre::Base *)v68,
                            0LL,
                            *(_DWORD *)(v28 + 120),
                            v29,
                            v61,
                            v64,
                            v62,
                            *(_DWORD *)(*(_QWORD *)(v28 + 976) + 184LL),
                            *(_DWORD *)(*(_QWORD *)(v28 + 976) + 176LL),
                            a11,
                            0) )
        goto LABEL_49;
      v88 |= 2u;
      v69 = 0LL;
      if ( (*(_BYTE *)(v60 + 32) & 1) != 0 && (unsigned int)BLTRECORD::Src((BLTRECORD *)v59, a4, a5, a6, a7) )
      {
        if ( a8 )
        {
          SURFREF::SURFREF((SURFREF *)v45, a8);
          if ( !v46
            || (SURFREF::vKeepIt((SURFREF *)v45),
                v31 = 65540,
                v88 |= 0x30000u,
                v67 = v46,
                v87 = 43724,
                *(_WORD *)(v46 + 100))
            || *(_DWORD *)(v46 + 96) != 1 )
          {
            EngSetLastError(6u);
            SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v45);
            goto LABEL_49;
          }
          v83 = a9;
          v85 = a9 + v81 - v79;
          v84 = a10;
          v86 = a10 + v82 - v80;
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v45);
        }
        else
        {
          v67 = 0LL;
          v31 = 4;
          v87 = 52428;
        }
        if ( EXFORMOBJ::bXform((EXFORMOBJ *)v59, a2, &v70, 3uLL) )
        {
          if ( v72 != v70.y
            || v73 != v70.x
            || (v70.x & 0xF) != 0
            || (v70.y & 0xF) != 0
            || (v71 & 0xF) != 0
            || (v72 & 0xF) != 0
            || (v73 & 0xF) != 0
            || (v74 & 0xF) != 0 )
          {
            OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v58, a3);
            v37 = XDCOBJ::pSurfaceEff(a3);
            APIDCOBJ::APIDCOBJ((APIDCOBJ *)v54, (struct OPTAPIDCOBJ *)v58);
            v38 = *(_QWORD *)a1;
            v55 = v37;
            v12 = BLTRECORD::bRotate(
                    (BLTRECORD *)v59,
                    (struct Gre::Base::SESSION_GLOBALS **)a1,
                    (struct BLTRECORD::PROXYDCOBJ *)v54,
                    v31,
                    *(_BYTE *)(*(_QWORD *)(v38 + 976) + 215LL));
            APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v54);
            v34 = (OPTAPIDCOBJ *)v58;
          }
          else
          {
            v78 = v74 >> 4;
            v32 = *(_QWORD *)a1;
            v75 = v70.x >> 4;
            v76 = v70.y >> 4;
            v77 = v71 >> 4;
            if ( *(_BYTE *)(*(_QWORD *)(v32 + 976) + 215LL) == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v59) )
            {
              OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v57, a3);
              v35 = XDCOBJ::pSurfaceEff(a3);
              APIDCOBJ::APIDCOBJ((APIDCOBJ *)v52, (struct OPTAPIDCOBJ *)v57);
              v36 = *(_QWORD *)a1;
              v53 = v35;
              v12 = BLTRECORD::bStretch(
                      (BLTRECORD *)v59,
                      a1,
                      (struct BLTRECORD::PROXYDCOBJ *)v52,
                      v31,
                      *(_BYTE *)(*(_QWORD *)(v36 + 976) + 215LL));
              APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v52);
              v34 = (OPTAPIDCOBJ *)v57;
            }
            else
            {
              OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v56, a3);
              v33 = XDCOBJ::pSurfaceEff(a3);
              APIDCOBJ::APIDCOBJ((APIDCOBJ *)v50, (struct OPTAPIDCOBJ *)v56);
              v51 = v33;
              v12 = BLTRECORD::bBitBlt((BLTRECORD *)v59, a1, (struct BLTRECORD::PROXYDCOBJ *)v50, v31);
              APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v50);
              v34 = (OPTAPIDCOBJ *)v56;
            }
          }
          OPTAPIDCOBJ::~OPTAPIDCOBJ(v34);
          goto LABEL_49;
        }
      }
LABEL_48:
      EngSetLastError(0x57u);
      goto LABEL_49;
    }
  }
  EngSetLastError(5u);
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v48, v40, v41, v42);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v59, v43, v44);
  return 0LL;
}
