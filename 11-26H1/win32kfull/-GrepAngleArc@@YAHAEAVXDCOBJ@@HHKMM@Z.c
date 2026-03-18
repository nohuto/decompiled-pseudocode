/*
 * XREFs of ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x140111F1C
 * Callers:
 *     NtGdiAngleArc @ 0x1401106B0 (NtGdiAngleArc.c)
 * Callees:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x140108968 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1401104E0 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1401111E4 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x140112528 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ??0EBOX@@QEAA@AEAVEXFORMOBJR@@AEAU_RECTL@@@Z @ 0x140112740 (--0EBOX@@QEAA@AEAVEXFORMOBJR@@AEAU_RECTL@@@Z.c)
 *     ?lGetQuadrant@@YAJAEAVEPOINTFL@@@Z @ 0x140112840 (-lGetQuadrant@@YAJAEAVEPOINTFL@@@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140114F08 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x14032BF90 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepAngleArc(struct XDCOBJ *a1, int a2, LONG a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // esi
  struct XDCOBJ *v8; // r8
  __int64 v9; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // r14d
  LONG v14; // r14d
  LONG v15; // r12d
  LONG v16; // r13d
  LONG v17; // r15d
  int v18; // ebx
  LONG v19; // eax
  __m128 v20; // xmm7
  __m128i v21; // xmm6
  __m128i v22; // xmm1
  int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __m128i v27; // xmm1
  int v28; // r13d
  __m128i v29; // xmm9
  float v30; // xmm1_4
  __m128i top; // xmm2
  int v32; // ebx
  __m128i left; // xmm1
  unsigned int v34; // r12d
  int Quadrant; // eax
  char v36; // r14
  int v37; // r14d
  int v38; // ebx
  int v39; // edi
  int i; // r15d
  int v41; // eax
  struct XDCOBJ *v42; // r10
  _QWORD *v43; // rdx
  ULONG v45; // ecx
  float v46; // [rsp+58h] [rbp-B0h] BYREF
  LONG v47; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v48; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+68h] [rbp-A0h] BYREF
  struct _RECTL v50; // [rsp+70h] [rbp-98h] BYREF
  struct XDCOBJ *v51; // [rsp+80h] [rbp-88h]
  struct _RECTFX v52; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v53[80]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v54[8]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-18h]

  v6 = 0;
  v51 = a1;
  v46 = *(float *)&a4;
  v8 = a1;
  v47 = a2;
  v9 = *(_QWORD *)a1;
  LODWORD(v11) = 0;
  if ( (*(_DWORD *)(v9 + 36) & 0x10000) != 0 )
  {
    v45 = 6;
LABEL_63:
    EngSetLastError(v45);
    return 0LL;
  }
  v12 = *(_QWORD *)(v9 + 976);
  v13 = *(_DWORD *)(v12 + 152);
  if ( (v13 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v9, *(_QWORD *)(v12 + 160));
    v8 = v51;
  }
  if ( (v13 & 0x2000) != 0 )
    GreDCSelectPen(*(_QWORD *)v8, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 976LL) + 168LL));
  v14 = a3 - a4;
  v15 = v47 - a4;
  v50.top = a3 - a4;
  v50.left = v47 - a4;
  v16 = a4 + v47;
  v17 = a3 + a4;
  v50.right = v16;
  v50.bottom = v17;
  if ( v46 < 0.0 || v15 > v47 || v16 < v47 || v14 > a3 || v17 < a3 )
  {
    v45 = 87;
    goto LABEL_63;
  }
  v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v51 + 976LL) + 208LL);
  DC::QuickInitXform(*(_QWORD *)v51, &v49, 516LL);
  *(_QWORD *)&v52.xLeft = v49;
  LOBYTE(v52.xRight) = v18 != 2;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v54, (DC **)v51, 1);
  if ( !v55 )
    goto LABEL_44;
  if ( v15 > v16 )
  {
    v50.left = v16;
    v50.right = v15;
  }
  if ( v14 > v17 )
  {
    v19 = v14;
    v50.top = v17;
    v14 = v17;
    v50.bottom = v19;
    v17 = v19;
  }
  v20 = (__m128)a6;
  v21 = (__m128i)a5;
  LODWORD(v48) = a5;
  if ( *(float *)&a6 < 0.0 )
  {
    v20 = _mm_xor_ps((__m128)a6, (__m128)_xmm);
    v21 = (__m128i)_mm_xor_ps((__m128)a5, (__m128)_xmm);
    LODWORD(v48) = v21.m128i_i32[0];
    v50.top = v17;
    v50.bottom = v14;
  }
  EBOX::EBOX((EBOX *)v53, (struct EXFORMOBJR *)&v52, &v50);
  v22 = (__m128i)v20;
  *(float *)v22.m128i_i32 = v20.m128_f32[0] * FP_1DIV90;
  v23 = _mm_cvtsi128_si32(v22);
  v24 = (unsigned __int8)(v23 >> 23);
  if ( v24 <= 0x9E )
  {
    v25 = v23 & 0x7FFFFF | 0x800000LL;
    v26 = v24 < 0x76 ? v25 >> (118 - (unsigned __int8)v24) : v25 << ((unsigned __int8)v24 - 118);
    v11 = v26 >> 32;
    if ( v23 < 0 )
      LODWORD(v11) = -(int)v11;
  }
  v27 = v21;
  *(float *)v27.m128i_i32 = *(float *)v21.m128i_i32 + v20.m128_f32[0];
  v28 = (int)v11 >> 2;
  if ( (int)v11 >> 2 > 8 )
    v28 = 8;
  v29 = v27;
  v30 = *(float *)v27.m128i_i32 - *(float *)v21.m128i_i32;
  v46 = *(float *)v29.m128i_i32;
  if ( (float)(v30 - FP_3_0) >= 0.0 || v30 == 0.0 )
  {
    vCosSin((unsigned int)_mm_cvtsi128_si32(v21), &v50, &v50.top);
    vCosSin((unsigned int)_mm_cvtsi128_si32(v29), &v49, (char *)&v49 + 4);
  }
  else
  {
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v21), &v50, &v50.top);
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v29), &v49, (char *)&v49 + 4);
  }
  top = (__m128i)(unsigned int)v50.top;
  v32 = 0;
  left = (__m128i)(unsigned int)v50.left;
  if ( *(float *)&v50.top < 0.0 )
  {
    v34 = 2;
    LOBYTE(v32) = *(float *)&v50.left >= 0.0;
    v32 += 2;
  }
  else if ( *(float *)&v50.left > 0.0 )
  {
    v34 = 2;
  }
  else
  {
    v32 = 1;
    v34 = 2;
    if ( EFLOAT::bIsZero((EFLOAT *)&v50.top) )
      v32 = 2;
  }
  v47 = v32;
  if ( *(float *)v21.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v21.m128i_i32 )
  {
    vArctan(_mm_cvtsi128_si32(left), _mm_cvtsi128_si32(top), &v48, &v47);
    v32 = v47;
    v21.m128i_i32[0] = v48;
  }
  Quadrant = lGetQuadrant((struct EPOINTFL *)&v49);
  v36 = Quadrant;
  v47 = Quadrant;
  if ( *(float *)v29.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v29.m128i_i32 )
  {
    vArctan(v49, HIDWORD(v49), &v46, &v47);
    v36 = v47;
    LOBYTE(v11) = (v47 - v32) & 3;
    if ( ((v47 - v32) & 3) == 0 && *(float *)v21.m128i_i32 > v46 )
      LOBYTE(v11) = 3;
  }
  v37 = v36 & 3;
  v38 = v32 & 3;
  v39 = v11 & 3;
  for ( i = 0; ; ++i )
  {
    v41 = bPartialArc(
            v34,
            (__int64)v54,
            (__int64)v53,
            (__int64)&v50,
            v38,
            (__int64)&v48,
            (__int64)&v49,
            v37,
            (__int64)&v46,
            v39);
    if ( i >= v28 )
      break;
    if ( !v41
      || !(unsigned int)bPartialArc(
                          0,
                          (__int64)v54,
                          (__int64)v53,
                          (__int64)&v49,
                          v37,
                          (__int64)&v46,
                          (__int64)&v50,
                          v38,
                          (__int64)&v48,
                          3 - v39) )
    {
      goto LABEL_44;
    }
    v34 = 0;
  }
  if ( !v41 )
  {
LABEL_44:
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v54);
    return 0LL;
  }
  v42 = v51;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v51 + 976LL) + 152LL) |= 0x100u;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 976LL) + 152LL) &= ~0x200u;
  if ( (*(_DWORD *)(v55 + 72) & 1) != 0 )
    v43 = (_QWORD *)(v55 + 64);
  else
    v43 = (_QWORD *)(*(_QWORD *)(v55 + 40) + 8 * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v55 + 40) + 20LL) - 1) + 3LL));
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 976LL) + 8LL) = *v43;
  if ( (*(_DWORD *)(*(_QWORD *)v42 + 248LL) & 1) != 0
    || (unsigned int)EPATHOBJ_bStrokeAndOrFill(
                       (struct EPATHOBJ *)v54,
                       v42,
                       (LINEATTRS *)(*(_QWORD *)v42 + 208LL),
                       &v52,
                       1u) )
  {
    v6 = 1;
  }
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v54);
  return v6;
}
