/*
 * XREFs of ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x14009CDEC
 * Callers:
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400E7180 (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x140077B78 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x140077F90 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400782E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14007EEC4 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x14007EF08 (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140087A98 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DEF38 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14016CCE0 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepRectBlt(struct XDCOBJ *a1, struct ERECTL *a2)
{
  __int64 v2; // r8
  __int64 v5; // rsi
  char v6; // r15
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  __int128 v14; // xmm0
  struct SURFACE *v15; // rbx
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  DC *v20[16]; // [rsp+48h] [rbp-C0h] BYREF
  struct SURFACE *v21[16]; // [rsp+C8h] [rbp-40h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v22[16]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v23[352]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v24[16]; // [rsp+328h] [rbp+220h] BYREF
  __int64 v25; // [rsp+338h] [rbp+230h]
  __int64 v26; // [rsp+340h] [rbp+238h]
  __int64 v27; // [rsp+358h] [rbp+250h]
  __int64 v28; // [rsp+368h] [rbp+260h]
  __int64 v29; // [rsp+378h] [rbp+270h]
  __int128 v30; // [rsp+3A8h] [rbp+2A0h]
  __int64 v31; // [rsp+3E0h] [rbp+2D8h]
  int v32; // [rsp+3E8h] [rbp+2E0h]
  int v33; // [rsp+3ECh] [rbp+2E4h]

  v2 = *(_QWORD *)a1;
  v28 = 0LL;
  v33 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 976) + 212LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v23);
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v23, a1);
  if ( (unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    v16 = 1;
    goto LABEL_16;
  }
  if ( !v7 )
    goto LABEL_19;
  v8 = *(_QWORD *)a1;
  v27 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
  v25 = *(_QWORD *)(v27 + 128);
  v26 = *(_QWORD *)(v8 + 88);
  if ( (v6 & 0xE8) == 0 )
  {
    v29 = 0LL;
    goto LABEL_12;
  }
  v29 = v8 + 1200;
  v9 = *(_QWORD *)(v8 + 976);
  if ( (*(_DWORD *)(v9 + 152) & 0x1000) != 0 )
    GreDCSelectBrush(v8, *(_QWORD *)(v9 + 160));
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v11 = *(_DWORD *)(v10 + 152);
  if ( (v11 & 1) != 0 || (*(_DWORD *)(*(_QWORD *)a1 + 316LL) & 1) != 0 )
  {
    *(_DWORD *)(v10 + 152) = v11 & 0xFFFFFFFE;
    *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= ~1u;
    EBRUSHOBJ::vInitBrush(v29, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 136LL), v26, v25, v27, 1);
  }
  if ( (*(_DWORD *)(v29 + 120) & 0x100) != 0 )
  {
LABEL_19:
    v16 = 0;
    goto LABEL_16;
  }
  v8 = *(_QWORD *)a1;
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 1192LL);
  if ( (*(_DWORD *)(v29 + 120) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v8 + 976) + 213LL) == 1 )
  {
    v12 = 43520;
    goto LABEL_13;
  }
LABEL_12:
  v12 = (_DWORD)v5 << 8;
LABEL_13:
  v13 = v12 | v5;
  if ( (*(_DWORD *)(v8 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulateTight(a1, a2);
  v14 = *(_OWORD *)a2;
  v32 = v13;
  v30 = v14;
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v22, a1);
  v15 = XDCOBJ::pSurfaceEff(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v21, v22);
  v21[14] = v15;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, (struct Gre::Base::SESSION_GLOBALS **)a1);
  v20[14] = 0LL;
  v16 = BLTRECORD::bBitBlt((BLTRECORD *)v24, v20, v21, v6);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v22);
LABEL_16:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v23);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v24, v17, v18);
  return v16;
}
