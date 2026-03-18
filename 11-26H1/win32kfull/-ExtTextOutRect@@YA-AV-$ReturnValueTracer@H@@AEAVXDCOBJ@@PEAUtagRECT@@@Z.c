/*
 * XREFs of ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x14007B620
 * Callers:
 *     ?GrepBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x14007B438 (-GrepBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?GreExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@@Z @ 0x140205B04 (-GreExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x140015840 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x14007813C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1400AED70 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExtTextOutRect(__int64 a1, XDCOBJ *a2, __int32 *a3)
{
  __int64 v4; // r15
  __int64 v5; // rcx
  unsigned int v8; // ebx
  __int32 v9; // edx
  __int32 v10; // r9d
  __int32 v11; // r8d
  __int32 v12; // r10d
  __int64 v13; // rsi
  int v14; // eax
  __int32 v15; // eax
  __int32 v16; // eax
  __int64 v17; // r13
  DC *v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rdx
  BOOL v22; // r14d
  __int32 v23; // edx
  __int32 v24; // r8d
  __int32 v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // r11
  __m128i v28; // xmm1
  __int64 v29; // r8
  __int64 v30; // rsi
  struct ECLIPOBJ *v31; // rdx
  int (*v32)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  struct REGION *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rsi
  __m128i *v37; // r15
  __m128i v38; // [rsp+60h] [rbp-19h] BYREF
  __int64 v39; // [rsp+70h] [rbp-9h] BYREF
  __m128i v40; // [rsp+80h] [rbp+7h] BYREF

  v4 = 0LL;
  v5 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 || (*(_DWORD *)(v5 + 36) & 0x10000) != 0 )
    goto LABEL_33;
  DC::QuickInitXform(v5, &v39, 2147484164LL);
  v8 = 1;
  if ( (*(_BYTE *)(v39 + 32) & 1) == 0 )
  {
    v8 = *(_DWORD *)GrepExtTextOutWLocked(
                      &v38,
                      a2,
                      0LL,
                      0LL,
                      2,
                      a3,
                      0LL,
                      0,
                      0LL,
                      *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 213LL),
                      0LL,
                      0);
    goto LABEL_31;
  }
  v9 = *a3;
  v10 = a3[1];
  v11 = a3[2];
  v12 = a3[3];
  v13 = *(_QWORD *)a2;
  v40.m128i_i64[0] = __PAIR64__(v10, v9);
  v40.m128i_i64[1] = __PAIR64__(v12, v11);
  if ( (*(_BYTE *)(v39 + 32) & 0x43) == 0x43
    || (v14 = bCvtPts1(v39, (__int64)&v40, 2LL),
        v12 = v40.m128i_i32[3],
        v11 = v40.m128i_i32[2],
        v10 = v40.m128i_i32[1],
        v9 = v40.m128i_i32[0],
        v14) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v13 + 976) + 108LL) & 1) != 0 )
    {
      ++v9;
      ++v11;
      v40.m128i_i32[0] = v9;
      v40.m128i_i32[2] = v11;
    }
  }
  if ( v9 > v11 )
  {
    v15 = v9;
    v9 = v11;
    v40.m128i_i32[0] = v11;
    v11 = v15;
    v40.m128i_i32[2] = v15;
  }
  if ( v10 > v12 )
  {
    v16 = v10;
    v40.m128i_i32[1] = v12;
    v10 = v12;
    v40.m128i_i32[3] = v16;
    v12 = v16;
  }
  if ( v10 == v12 || v9 == v11 )
    goto LABEL_31;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a2, (struct ERECTL *)&v40);
  v17 = *(_QWORD *)(*(_QWORD *)a2 + 496LL);
  if ( !v17 )
    goto LABEL_31;
  if ( !(unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)(*(_QWORD *)a2 + 496LL)) )
  {
    EngSetLastError(5u);
LABEL_33:
    v8 = 0;
    goto LABEL_31;
  }
  v18 = *(DC **)a2;
  v19 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1LL;
  v20 = *(int *)(*(_QWORD *)a2 + 8 * v19 + 1016);
  if ( (unsigned __int64)(v20 + v40.m128i_i32[0] + 0x80000000LL) <= 0xFFFFFFFF
    && (unsigned __int64)(v20 + v40.m128i_i32[2] + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v35 = *((int *)v18 + 2 * v19 + 255);
    if ( (unsigned __int64)(v35 + v40.m128i_i32[1] + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v35 + v40.m128i_i32[3] + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v38.m128i_i64[0] = 0LL;
      v40.m128i_i32[0] += v20;
      v22 = 0;
      v23 = v40.m128i_i32[2] + *((_DWORD *)v18 + 2 * v19 + 254);
      v24 = v40.m128i_i32[1] + *((_DWORD *)v18 + 2 * v19 + 255);
      *(__int64 *)((char *)v40.m128i_i64 + 4) = __PAIR64__(v23, v24);
      v25 = v40.m128i_i32[3] + *((_DWORD *)v18 + 2 * v19 + 255);
      v40.m128i_i32[3] = v25;
      if ( v40.m128i_i32[0] >= *((_DWORD *)v18 + 250) && v23 <= *((_DWORD *)v18 + 252) && v24 >= *((_DWORD *)v18 + 251) )
        v22 = v25 <= *((_DWORD *)v18 + 253);
      if ( (unsigned int)DC::bDpiScaleTransform(v18) )
      {
        v36 = 0LL;
        v37 = &v40;
        do
        {
          if ( !(unsigned int)bFToL(v26, (char *)&v40 + 4 * v36, 6LL) )
            break;
          v36 = (unsigned int)(v36 + 1);
          v37 = (__m128i *)((char *)v37 + 4);
        }
        while ( (unsigned int)v36 < 4 );
        v4 = v38.m128i_i64[0];
      }
      if ( v22 )
      {
        v28 = v40;
LABEL_27:
        v29 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
        v30 = *(_QWORD *)a2 + 1608LL;
        v31 = (struct ECLIPOBJ *)*(unsigned int *)(v29 + 152);
        if ( ((*(_BYTE *)(*(_QWORD *)a2 + 316LL) | *(_BYTE *)(v29 + 152)) & 8) != 0 )
        {
          *(_DWORD *)(v29 + 152) = (unsigned int)v31 & 0xFFFFFFF7;
          *(_DWORD *)(*(_QWORD *)a2 + 316LL) &= ~8u;
          EBRUSHOBJ::vInitBrush(
            v30,
            *(_QWORD *)a2,
            *(_QWORD *)(*((_QWORD *)a2 + 2) + 168LL),
            *(_QWORD *)(*(_QWORD *)a2 + 88LL),
            *(_QWORD *)(v17 + 128),
            v17,
            (*(_DWORD *)(*(_QWORD *)a2 + 72LL) >> 15) & 1);
          v28 = v40;
        }
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 && (*(_DWORD *)(v30 + 120) & 0x100) == 0 )
        {
          v38 = v28;
          XDCOBJ::vAccumulateTight(a2, v31, &v38);
        }
        ++*(_DWORD *)(v17 + 92);
        v32 = SURFACE::pfnBitBlt((SURFACE *)v17);
        v8 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, __m128i *, _QWORD, _QWORD, __int64, __int64, int))v32)(
               v17 + 24,
               0LL,
               0LL,
               v4,
               0LL,
               &v40,
               0LL,
               0LL,
               v30,
               *(_QWORD *)a2 + 1192LL,
               61680);
        goto LABEL_31;
      }
      v4 = v27 + 1768;
      v34 = XDCOBJ::prgnEffRao((DC **)a2);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v4, v34, (const struct ERECTL *)&v40, 2);
      v40 = *(__m128i *)(v4 + 4);
      v28 = v40;
      if ( _mm_cvtsi128_si32(v28) != _mm_cvtsi128_si32(_mm_srli_si128(v28, 8))
        && v40.m128i_i32[1] != _mm_srli_si128(v40, 8).m128i_i32[1] )
      {
        goto LABEL_27;
      }
LABEL_31:
      v21 = v8;
      goto LABEL_32;
    }
  }
  v21 = 0LL;
LABEL_32:
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v21);
  return a1;
}
