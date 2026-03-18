/*
 * XREFs of ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868
 * Callers:
 *     NtGdiPatBlt @ 0x1400ACCD0 (NtGdiPatBlt.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400AE1E8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400BB534 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     NtGdiMaskBlt @ 0x14016B360 (NtGdiMaskBlt.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400781D0 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400AB4C4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1400AB9A0 (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400ABEE8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x14016BC60 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x14016BC94 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepMaskBlt(
        DC **a1,
        int a2,
        int a3,
        int a4,
        int a5,
        struct OPTAPIDCOBJ *a6,
        int a7,
        int a8,
        HBITMAP a9,
        int a10,
        int a11,
        unsigned int a12,
        unsigned int a13)
{
  unsigned int v13; // ebx
  __int64 v17; // rdx
  HSURF v18; // r8
  __int64 v19; // r9
  Gre::Base *v20; // rcx
  struct Gre::Base::SESSION_GLOBALS *v21; // rax
  unsigned int v22; // edi
  _BYTE *v23; // rdx
  Gre::Base *v24; // rcx
  struct Gre::Base::SESSION_GLOBALS *v25; // rax
  struct SURFACE *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  DC *v35; // rcx
  int v37; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v38[32]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-50h]
  _QWORD v40[3]; // [rsp+C0h] [rbp-40h] BYREF
  struct SURFACE *v41; // [rsp+D8h] [rbp-28h]
  _BYTE v42[352]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v43[352]; // [rsp+290h] [rbp+190h] BYREF
  _DWORD v44[4]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v45[64]; // [rsp+400h] [rbp+300h] BYREF
  __int64 v46; // [rsp+440h] [rbp+340h]
  unsigned int v47; // [rsp+4C0h] [rbp+3C0h]
  int v48; // [rsp+4C4h] [rbp+3C4h]

  v13 = 0;
  v37 = a3;
  v46 = 0LL;
  v48 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)a1) )
  {
    v34 = *(_DWORD *)(v19 + 36);
    if ( (v34 & 0x10000) == 0 )
    {
      if ( (v34 & 0xE0) != 0 )
      {
        DC::QuickInitXform(v19, &v37, 516LL);
        v35 = *a1;
        v44[0] = a2;
        v44[2] = a2 + a4;
        v44[1] = a3;
        v44[3] = a3 + a5;
        if ( !DC::bXform(v35, (const struct EXFORMOBJ *)&v37, (struct ERECTL *)v44) )
          goto LABEL_14;
        ERECTL::vOrder((ERECTL *)v44);
        XDCOBJ::vAccumulate((XDCOBJ *)a1, (struct ERECTL *)v44);
      }
      v13 = 1;
      goto LABEL_14;
    }
    goto LABEL_21;
  }
  if ( (*(_DWORD *)(v19 + 36) & 0x10000) != 0 )
  {
LABEL_21:
    EngSetLastError(0x57u);
    goto LABEL_14;
  }
  if ( !v18 || BYTE2(a12) == HIBYTE(a12) )
  {
    v23 = gajRop3;
    v22 = (unsigned __int8)gajRop3[BYTE2(a12)];
    v47 = BYTE2(a12) | (BYTE2(a12) << 8);
  }
  else
  {
    SURFREF::SURFREF((SURFREF *)v38, v18);
    if ( !v39 || (v46 = v39, *(_WORD *)(v39 + 100)) || *(_DWORD *)(v39 + 96) != 1 )
    {
      EngSetLastError(6u);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v38);
      goto LABEL_14;
    }
    v21 = Gre::Base::Globals(v20);
    INC_SHARE_REF_CNT(v21, v39);
    v48 |= 0x30000u;
    v47 = HIWORD(a12);
    v22 = (unsigned __int8)gajRop3[BYTE2(a12)] | (unsigned __int8)gajRop3[(unsigned __int64)HIWORD(a12) >> 8] | 0x10000;
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v38);
  }
  if ( (v22 & 0xD4) != 0 && OPTAPIDCOBJ::bValid(a6, (__int64)v23, (__int64)v18) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v40, a6);
    bSpDwmValidateSurface((struct XDCOBJ *)v40, a7, a8, a4, a5);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v42);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v42, (struct _ERESOURCE ***)a1, (struct XDCOBJ *)v40);
    v25 = Gre::Base::Globals(v24);
    v26 = *(struct SURFACE **)(v40[0] + 496LL);
    if ( v26 )
    {
      if ( v41 )
        v26 = v41;
    }
    else
    {
      v26 = (struct SURFACE *)*((_QWORD *)v25 + 547);
    }
    v13 = GrepMaskBltDevLocked(
            (struct XDCOBJ *)a1,
            a2,
            v37,
            a4,
            a5,
            a6,
            a7,
            a8,
            a10,
            a11,
            a13,
            v22,
            (struct DEVLOCKBLTOBJ *)v42,
            (struct BLTRECORD *)v45,
            v26);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v42, v27, v28, v29);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v40);
  }
  else
  {
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v43);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v43, (struct _ERESOURCE ***)a1);
    v13 = GrepMaskBltDevLocked(
            (struct XDCOBJ *)a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a10,
            a11,
            a13,
            v22,
            (struct DEVLOCKBLTOBJ *)v43,
            (struct BLTRECORD *)v45,
            0LL);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v43, v31, v32, v33);
  }
LABEL_14:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v45, v17, (__int64)v18);
  return v13;
}
