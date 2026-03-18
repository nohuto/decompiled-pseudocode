/*
 * XREFs of ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400A15A8
 * Callers:
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400807B8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1400835D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GrePatBlt @ 0x14009F4D0 (GrePatBlt.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x14009F970 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     NtGdiMaskBlt @ 0x140189500 (NtGdiMaskBlt.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x140077B78 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x140077F90 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400782E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14007EEC4 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140087A98 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14008A2D8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400A02D8 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1400A1DA4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E810C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x140188250 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepMaskBlt(
        DC **a1,
        int a2,
        int a3,
        int a4,
        int a5,
        struct Gre::Base::SESSION_GLOBALS **a6,
        LONG a7,
        int a8,
        HBITMAP a9,
        int a10,
        int a11,
        unsigned int a12,
        unsigned int a13)
{
  unsigned int v13; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  HSURF v20; // r9
  char v21; // r10
  __int64 v22; // r11
  unsigned int v23; // esi
  struct SURFACE *v24; // rax
  DC *v26; // rcx
  __int64 v27; // r9
  int v28; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v29[32]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-50h]
  _BYTE v31[112]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v32[352]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v33[352]; // [rsp+290h] [rbp+190h] BYREF
  _DWORD v34[4]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v35[64]; // [rsp+400h] [rbp+300h] BYREF
  __int64 v36; // [rsp+440h] [rbp+340h]
  unsigned int v37; // [rsp+4C0h] [rbp+3C0h]
  int v38; // [rsp+4C4h] [rbp+3C4h]

  v13 = 0;
  v36 = 0LL;
  v38 = 0;
  v28 = a4;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)a1) )
  {
    if ( !(_DWORD)v19 )
    {
      if ( (v21 & 0xE0) != 0 )
      {
        DC::QuickInitXform(v22, &v28, 516LL);
        v26 = *a1;
        v34[2] = a2 + a4;
        v34[0] = a2;
        v34[3] = a3 + a5;
        v34[1] = a3;
        if ( !DC::bXform(v26, (const struct EXFORMOBJ *)&v28, (struct ERECTL *)v34, v27) )
          goto LABEL_12;
        ERECTL::vOrder((ERECTL *)v34);
        XDCOBJ::vAccumulate((XDCOBJ *)a1, (struct ERECTL *)v34);
      }
      v13 = 1;
      goto LABEL_12;
    }
    goto LABEL_15;
  }
  if ( (_DWORD)v19 )
  {
LABEL_15:
    EngSetLastError(0x57u);
    goto LABEL_12;
  }
  if ( !v20 || BYTE2(a12) == HIBYTE(a12) )
  {
    v23 = gajRop3[BYTE2(a12)];
    v37 = BYTE2(a12) | (BYTE2(a12) << 8);
  }
  else
  {
    SURFREF::SURFREF((SURFREF *)v29, v20);
    if ( !v30 || (v36 = v30, *(_WORD *)(v30 + 100)) || *(_DWORD *)(v30 + 96) != 1 )
    {
      EngSetLastError(6u);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v29);
      goto LABEL_12;
    }
    INC_SHARE_REF_CNT(v30);
    v38 |= 0x30000u;
    v37 = HIWORD(a12);
    v23 = gajRop3[BYTE2(a12)] | gajRop3[(unsigned __int64)HIWORD(a12) >> 8] | 0x10000;
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v29);
  }
  if ( (v23 & 0xD4) != 0 && OPTAPIDCOBJ::bValid((HDC *)a6) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v31, a6);
    bSpDwmValidateSurface((struct XDCOBJ *)v31, a7, a8, v28, a5);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v32);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v32, (struct _ERESOURCE ***)a1, (struct XDCOBJ *)v31);
    v24 = XDCOBJ::pSurfaceEff((XDCOBJ *)v31);
    v13 = GrepMaskBltDevLocked(
            (struct XDCOBJ *)a1,
            a2,
            a3,
            v28,
            a5,
            (struct OPTAPIDCOBJ *)a6,
            a7,
            a8,
            a10,
            a11,
            a13,
            v23,
            (struct DEVLOCKBLTOBJ *)v32,
            (struct BLTRECORD *)v35,
            v24);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v32);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v31);
  }
  else
  {
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v33);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v33, (struct XDCOBJ *)a1);
    v13 = GrepMaskBltDevLocked(
            (struct XDCOBJ *)a1,
            a2,
            a3,
            v28,
            a5,
            (struct OPTAPIDCOBJ *)a6,
            a7,
            a8,
            a10,
            a11,
            a13,
            v23,
            (struct DEVLOCKBLTOBJ *)v33,
            (struct BLTRECORD *)v35,
            0LL);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v33);
  }
LABEL_12:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v35, v18, v19);
  return v13;
}
