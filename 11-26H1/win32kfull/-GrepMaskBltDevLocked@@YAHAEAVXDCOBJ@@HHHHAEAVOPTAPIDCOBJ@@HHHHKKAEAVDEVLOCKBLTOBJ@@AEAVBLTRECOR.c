/*
 * XREFs of ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x14016BC94
 * Callers:
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140015900 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x14006AB54 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x140077378 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x140077804 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x14007813C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400781D0 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x14007F744 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400A990C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400BB8E8 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x14016C4C0 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1401A84B8 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1401A90FC (-bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z @ 0x1401AB8EC (-vInit@EXFORMOBJ@@QEAAXPEAUMATRIX@@K@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x140244210 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x140320AB8 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepMaskBltDevLocked(
        DC **a1,
        int a2,
        int a3,
        int a4,
        int a5,
        struct OPTAPIDCOBJ *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11,
        unsigned int a12,
        struct DEVLOCKBLTOBJ *a13,
        struct BLTRECORD *a14,
        struct SURFACE *a15)
{
  unsigned int v15; // r14d
  __int64 v18; // rdx
  __int64 v19; // r8
  DC *v20; // rcx
  int v21; // edx
  struct MATRIX *inited; // rax
  int v23; // ecx
  int v24; // ecx
  int v25; // ebx
  int v26; // eax
  char v27; // r9
  unsigned int v28; // eax
  DC **v29; // rcx
  unsigned int v30; // ebx
  ULONG v32; // ecx
  struct SURFACE *v33; // rbx
  DC *v34; // rax
  unsigned int v35; // eax
  ULONG v36; // ecx
  struct SURFACE *v37; // rbx
  DC *v38; // rcx
  struct MATRIX *v39; // rax
  char *v40; // rbx
  struct MATRIX *v41; // rax
  int v42; // edx
  __int64 v43; // rdx
  int v44; // ecx
  struct SURFACE *v45; // rbx
  DC *v46; // rax
  char v47; // [rsp+60h] [rbp-A0h]
  _DWORD v50[4]; // [rsp+70h] [rbp-90h] BYREF
  DC *v51[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v52[40]; // [rsp+C0h] [rbp-40h] BYREF
  struct SURFACE *v53; // [rsp+E8h] [rbp-18h]
  _BYTE v54[104]; // [rsp+F0h] [rbp-10h] BYREF
  struct SURFACE *v55; // [rsp+158h] [rbp+58h]
  _DWORD v56[4]; // [rsp+160h] [rbp+60h] BYREF

  v15 = 1;
  if ( (*((_DWORD *)a13 + 18) & 1) != 0 )
  {
    *((_QWORD *)a14 + 6) = *((_QWORD *)*a1 + 62);
    *(_QWORD *)a14 = DC::InitXform(*a1, 0x204u);
    v47 = 0;
    *((_QWORD *)a14 + 2) = *(_QWORD *)(*((_QWORD *)a14 + 6) + 128LL);
    *((_QWORD *)a14 + 3) = *((_QWORD *)*a1 + 11);
    v50[0] = a12 & 0xD4;
    if ( (a12 & 0xD4) != 0 )
    {
      if ( OPTAPIDCOBJ::bValid(a6, v18, v19) )
      {
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v51, a6);
        v20 = v51[0];
        if ( !v51[0]
          || !*((_QWORD *)v51[0] + 62)
          || DC::bInFullScreen(v51[0])
          || (v21 = *((_DWORD *)a13 + 18), (v21 & 0x800000) == 0) )
        {
          v21 = *((_DWORD *)a13 + 18);
          if ( (v21 & 0x800000) == 0 && *((_DWORD *)*a1 + 8) == 2 && (*((_DWORD *)*a1 + 9) & 0xE0) != 0 )
          {
            DC::QuickInitXform(*a1, v50, 516LL);
            v56[0] = a2;
            v56[3] = a3 + a5;
            v38 = *a1;
            v56[1] = a3;
            v56[2] = a4 + a2;
            if ( DC::bXform(v38, (const struct EXFORMOBJ *)v50, (struct ERECTL *)v56) )
            {
              ERECTL::vOrder((ERECTL *)v56);
              XDCOBJ::vAccumulate((XDCOBJ *)a1, (struct ERECTL *)v56);
              XDCOBJ::vAccumulateTight((XDCOBJ *)a1, (struct ERECTL *)v56);
            }
            goto LABEL_31;
          }
          if ( (*((_DWORD *)v20 + 9) & 1) == 0 )
            goto LABEL_30;
        }
        if ( (v21 & 0x400000) != 0 )
        {
          *((_QWORD *)a14 + 7) = a15;
          *((_QWORD *)a14 + 4) = *((_QWORD *)a15 + 16);
          *((_QWORD *)a14 + 5) = *((_QWORD *)v20 + 11);
          inited = DC::InitXform(v20, 0x204u);
          *((_QWORD *)a14 + 1) = inited;
          if ( (*((_BYTE *)inited + 32) & 1) != 0 && (unsigned int)BLTRECORD::Src(a14, a7, a8, a4, a5) )
          {
            if ( (a12 & 0x10000) != 0 )
            {
              v23 = a9 + *((_DWORD *)a14 + 40) - *((_DWORD *)a14 + 38);
              *((_DWORD *)a14 + 42) = a9;
              *((_DWORD *)a14 + 44) = v23;
              v24 = *((_DWORD *)a14 + 41) - *((_DWORD *)a14 + 39);
              *((_DWORD *)a14 + 43) = a10;
              *((_DWORD *)a14 + 45) = a10 + v24;
            }
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 (struct BLTRECORD *)((char *)a14 + 72),
                                 0LL,
                                 *((_DWORD *)*a1 + 30),
                                 *((_QWORD *)a14 + 4),
                                 *((_QWORD *)a14 + 2),
                                 *((_QWORD *)a14 + 5),
                                 *((Gre::Base **)a14 + 3),
                                 *(_DWORD *)(*((_QWORD *)*a1 + 122) + 184LL),
                                 *(_DWORD *)(*((_QWORD *)*a1 + 122) + 176LL),
                                 a11,
                                 0) )
            {
              *((_DWORD *)a14 + 49) |= 2u;
              APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v51);
LABEL_17:
              v25 = a5;
              goto LABEL_18;
            }
LABEL_30:
            v15 = 0;
LABEL_31:
            APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v51);
            return v15;
          }
          v32 = 87;
        }
        else
        {
          v32 = 5;
        }
        EngSetLastError(v32);
        goto LABEL_30;
      }
    }
    else
    {
      *((_QWORD *)a14 + 7) = 0LL;
      if ( (a12 & 0x10000) == 0 )
        goto LABEL_17;
      if ( *((_QWORD *)a6 + 12) )
      {
        if ( !OPTAPIDCOBJ::bValid(a6, v18, v19) )
        {
          v36 = 6;
          goto LABEL_42;
        }
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v51, a6);
        v41 = DC::InitXform(v51[0], 0x204u);
        v40 = (char *)a14 + 8;
        EXFORMOBJ::vInit((struct BLTRECORD *)((char *)a14 + 8), v41, 0);
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v51);
      }
      else
      {
        v47 = 1;
        v39 = DC::InitXform(*a1, 0x204u);
        v40 = (char *)a14 + 8;
        EXFORMOBJ::vInit((struct BLTRECORD *)((char *)a14 + 8), v39, 0);
      }
      if ( (*(_BYTE *)(*(_QWORD *)v40 + 32LL) & 1) != 0 )
      {
        v25 = a5;
        if ( (unsigned int)BLTRECORD::Msk(a14, a9, a10, a4, a5) )
        {
LABEL_18:
          if ( (a12 & 0xE8) != 0 )
          {
            v42 = *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL);
            *((_QWORD *)a14 + 10) = (char *)*a1 + 1200;
            if ( (v42 & 0x1000) != 0 )
              GreDCSelectBrush(*a1, *(_QWORD *)(*((_QWORD *)*a1 + 122) + 160LL));
            v43 = *((_QWORD *)*a1 + 122);
            v44 = *(_DWORD *)(v43 + 152);
            if ( (v44 & 1) != 0 || (*((_DWORD *)*a1 + 79) & 1) != 0 )
            {
              *(_DWORD *)(v43 + 152) = v44 & 0xFFFFFFFE;
              *((_DWORD *)*a1 + 79) &= ~1u;
              EBRUSHOBJ::vInitBrush(
                *((_QWORD *)a14 + 10),
                *a1,
                *((_QWORD *)*a1 + 17),
                *((_QWORD *)a14 + 3),
                *((_QWORD *)a14 + 2),
                *((_QWORD *)a14 + 6),
                1);
            }
            *((_QWORD *)a14 + 23) = *((_QWORD *)*a1 + 149);
          }
          else
          {
            *((_QWORD *)a14 + 10) = 0LL;
          }
          if ( (unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)*a1 + 62)) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)a14 + 32LL) & 1) != 0 )
            {
              v26 = BLTRECORD::Trg(a14, a2, a3, a4, v25);
              v27 = 0;
              if ( v26 )
              {
                if ( !v50[0] || (unsigned int)BLTRECORD::bEqualExtents(a14) )
                {
                  if ( v47 != v27 )
                  {
                    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v51, (struct XDCOBJ *)a1);
                    v37 = XDCOBJ::pSurfaceEff((XDCOBJ *)a1);
                    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v54, (struct OPTAPIDCOBJ *)v51);
                    v55 = v37;
                    v30 = BLTRECORD::bBitBlt(a14, (struct XDCOBJ *)a1, (struct BLTRECORD::PROXYDCOBJ *)v54, a12);
                    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v54);
                    v51[0] = (DC *)((unsigned __int64)v51[0] & -(__int64)((_BYTE)v53 != 0));
                    PopThreadGuardedObject(v52);
                    DCOBJ::~DCOBJ((DCOBJ *)v51);
                    return v30;
                  }
                  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v54, a6);
                  v55 = a15;
                  v28 = BLTRECORD::bBitBlt(a14, (struct XDCOBJ *)a1, (struct BLTRECORD::PROXYDCOBJ *)v54, a12);
                  v29 = (DC **)v54;
                  goto LABEL_26;
                }
                if ( v47 != v27 )
                {
                  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v54, (struct XDCOBJ *)a1);
                  v33 = XDCOBJ::pSurfaceEff((XDCOBJ *)a1);
                  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v51, (struct OPTAPIDCOBJ *)v54);
                  v34 = *a1;
                  v53 = v33;
                  v35 = BLTRECORD::bStretch(
                          a14,
                          (struct XDCOBJ *)a1,
                          (struct BLTRECORD::PROXYDCOBJ *)v51,
                          a12,
                          *(_BYTE *)(*((_QWORD *)v34 + 122) + 215LL));
LABEL_35:
                  v30 = v35;
                  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v51);
                  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v54);
                  return v30;
                }
                APIDCOBJ::APIDCOBJ((APIDCOBJ *)v51, a6);
                v53 = a15;
                v28 = BLTRECORD::bStretch(
                        a14,
                        (struct XDCOBJ *)a1,
                        (struct BLTRECORD::PROXYDCOBJ *)v51,
                        a12,
                        *(_BYTE *)(*((_QWORD *)*a1 + 122) + 215LL));
LABEL_66:
                v29 = v51;
LABEL_26:
                v30 = v28;
                APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v29);
                return v30;
              }
            }
            else if ( (unsigned int)BLTRECORD::TrgPlg(a14, a2, a3, a4, v25) )
            {
              if ( v47 )
              {
                OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v54, (struct XDCOBJ *)a1);
                v45 = XDCOBJ::pSurfaceEff((XDCOBJ *)a1);
                APIDCOBJ::APIDCOBJ((APIDCOBJ *)v51, (struct OPTAPIDCOBJ *)v54);
                v46 = *a1;
                v53 = v45;
                v35 = BLTRECORD::bRotate(
                        a14,
                        (struct XDCOBJ *)a1,
                        (struct BLTRECORD::PROXYDCOBJ *)v51,
                        a12,
                        *(_BYTE *)(*((_QWORD *)v46 + 122) + 215LL));
                goto LABEL_35;
              }
              APIDCOBJ::APIDCOBJ((APIDCOBJ *)v51, a6);
              v53 = a15;
              v28 = BLTRECORD::bRotate(
                      a14,
                      (struct XDCOBJ *)a1,
                      (struct BLTRECORD::PROXYDCOBJ *)v51,
                      a12,
                      *(_BYTE *)(*((_QWORD *)*a1 + 122) + 215LL));
              goto LABEL_66;
            }
            goto LABEL_43;
          }
          v36 = 5;
LABEL_42:
          EngSetLastError(v36);
          return 0LL;
        }
      }
    }
LABEL_43:
    v36 = 87;
    goto LABEL_42;
  }
  return XDCOBJ::bFullScreen((XDCOBJ *)a1);
}
