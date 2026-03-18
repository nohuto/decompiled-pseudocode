/*
 * XREFs of ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400A7B74
 * Callers:
 *     NtGdiAngleArc @ 0x1400A7A90 (NtGdiAngleArc.c)
 * Callees:
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140079098 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x140079C98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400A2118 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400A6340 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1400A81C8 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?lGetQuadrant@@YAJAEAVEPOINTFL@@@Z @ 0x1400A83A0 (-lGetQuadrant@@YAJAEAVEPOINTFL@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVEXFORMOBJR@@AEAU_RECTL@@@Z @ 0x1400A8400 (--0EBOX@@QEAA@AEAVEXFORMOBJR@@AEAU_RECTL@@@Z.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1400A8500 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1400A8AE8 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x140310318 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepAngleArc(struct XDCOBJ *a1, LONG a2, LONG a3, int a4, unsigned int a5, unsigned int a6)
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
  __m128 v19; // xmm7
  __m128i v20; // xmm6
  __m128i v21; // xmm1
  int v22; // r8d
  unsigned int v23; // edx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __m128i v26; // xmm1
  int v27; // r13d
  __m128i v28; // xmm9
  float v29; // xmm1_4
  __m128i top; // xmm2
  int v31; // ebx
  __m128i left; // xmm1
  unsigned int v33; // r12d
  LONG Quadrant; // eax
  char v35; // r14
  int v36; // r14d
  int v37; // ebx
  int v38; // edi
  int i; // r15d
  int v40; // eax
  struct _POINTL **v41; // r10
  _QWORD *v42; // rdx
  LONG v44; // eax
  ULONG v45; // ecx
  float v46; // [rsp+58h] [rbp-B0h] BYREF
  LONG v47; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v48; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+68h] [rbp-A0h] BYREF
  struct _RECTL v50; // [rsp+70h] [rbp-98h] BYREF
  struct XDCOBJ *v51; // [rsp+80h] [rbp-88h]
  struct _RECTFX v52; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v53[80]; // [rsp+98h] [rbp-70h] BYREF
  int *v54; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-18h]
  _BYTE v56[64]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v57[560]; // [rsp+178h] [rbp+70h] BYREF

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
LABEL_64:
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
    goto LABEL_64;
  }
  v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v51 + 976LL) + 208LL);
  DC::QuickInitXform(*(_QWORD *)v51, &v49, 516LL);
  *(_QWORD *)&v52.xLeft = v49;
  LOBYTE(v52.xRight) = v18 != 2;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v54, (DC **)v51, 1);
  if ( !v55 )
  {
LABEL_44:
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&v54);
    return 0LL;
  }
  if ( v15 > v16 )
  {
    v50.left = v16;
    v50.right = v15;
  }
  if ( v14 > v17 )
  {
    v44 = v14;
    v50.top = v17;
    v14 = v17;
    v50.bottom = v44;
    v17 = v44;
  }
  v19 = (__m128)a6;
  v20 = (__m128i)a5;
  LODWORD(v48) = a5;
  if ( *(float *)&a6 < 0.0 )
  {
    v19 = _mm_xor_ps((__m128)a6, (__m128)_xmm);
    v20 = (__m128i)_mm_xor_ps((__m128)a5, (__m128)_xmm);
    LODWORD(v48) = v20.m128i_i32[0];
    v50.top = v17;
    v50.bottom = v14;
  }
  EBOX::EBOX((EBOX *)v53, (struct EXFORMOBJR *)&v52, &v50);
  v21 = (__m128i)v19;
  *(float *)v21.m128i_i32 = v19.m128_f32[0] * FP_1DIV90;
  v22 = _mm_cvtsi128_si32(v21);
  v23 = (unsigned __int8)(v22 >> 23);
  if ( v23 <= 0x9E )
  {
    v24 = v22 & 0x7FFFFF | 0x800000LL;
    v25 = v23 < 0x76 ? v24 >> (118 - (unsigned __int8)v23) : v24 << ((unsigned __int8)v23 - 118);
    v11 = v25 >> 32;
    if ( v22 < 0 )
      LODWORD(v11) = -(int)v11;
  }
  v26 = v20;
  *(float *)v26.m128i_i32 = *(float *)v20.m128i_i32 + v19.m128_f32[0];
  v27 = (int)v11 >> 2;
  if ( (int)v11 >> 2 > 8 )
    v27 = 8;
  v28 = v26;
  v29 = *(float *)v26.m128i_i32 - *(float *)v20.m128i_i32;
  v46 = *(float *)v28.m128i_i32;
  if ( (float)(v29 - FP_3_0) >= 0.0 || v29 == 0.0 )
  {
    vCosSin((unsigned int)_mm_cvtsi128_si32(v20), &v50, &v50.top);
    vCosSin((unsigned int)_mm_cvtsi128_si32(v28), &v49, (char *)&v49 + 4);
  }
  else
  {
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v20), &v50, &v50.top);
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v28), &v49, (char *)&v49 + 4);
  }
  top = (__m128i)(unsigned int)v50.top;
  v31 = 0;
  left = (__m128i)(unsigned int)v50.left;
  if ( *(float *)&v50.top < 0.0 )
  {
    v33 = 2;
    LOBYTE(v31) = *(float *)&v50.left >= 0.0;
    v31 += 2;
  }
  else if ( *(float *)&v50.left > 0.0 )
  {
    v33 = 2;
  }
  else
  {
    v31 = 1;
    v33 = 2;
    if ( EFLOAT::bIsZero((EFLOAT *)&v50.top) )
      v31 = 2;
  }
  v47 = v31;
  if ( *(float *)v20.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v20.m128i_i32 )
  {
    vArctan((unsigned int)_mm_cvtsi128_si32(left), (unsigned int)_mm_cvtsi128_si32(top), &v48, &v47);
    v31 = v47;
    v20.m128i_i32[0] = v48;
  }
  Quadrant = lGetQuadrant((struct EPOINTFL *)&v49);
  v35 = Quadrant;
  v47 = Quadrant;
  if ( *(float *)v28.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v28.m128i_i32 )
  {
    vArctan((unsigned int)v49, HIDWORD(v49), &v46, &v47);
    v35 = v47;
    LOBYTE(v11) = (v47 - v31) & 3;
    if ( ((v47 - v31) & 3) == 0 && *(float *)v20.m128i_i32 > v46 )
      LOBYTE(v11) = 3;
  }
  v36 = v35 & 3;
  v37 = v31 & 3;
  v38 = v11 & 3;
  for ( i = 0; ; ++i )
  {
    v40 = bPartialArc(v33, &v54, v53, &v50, v37, &v48, &v49, v36, &v46, v38);
    if ( i >= v27 )
      break;
    if ( !v40 || !(unsigned int)bPartialArc(0LL, &v54, v53, &v49, v36, &v46, &v50, v37, &v48, 3 - v38) )
    {
      EPATHOBJ::vUnlock((EPATHOBJ *)&v54);
      PATH_CORE::~PATH_CORE((PATH_CORE *)v57);
      CAutoTGO::vUnguard((CAutoTGO *)v56);
      return 0LL;
    }
    v33 = 0;
  }
  if ( !v40 )
    goto LABEL_44;
  v41 = (struct _POINTL **)v51;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v51 + 976LL) + 152LL) |= 0x100u;
  *(_DWORD *)(*(_QWORD *)&(*v41)[122] + 152LL) &= ~0x200u;
  if ( (*(_DWORD *)(v55 + 72) & 1) != 0 )
    v42 = (_QWORD *)(v55 + 64);
  else
    v42 = (_QWORD *)(*(_QWORD *)(v55 + 40) + 8 * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v55 + 40) + 20LL) - 1) + 3LL));
  *(_QWORD *)(*(_QWORD *)&(*v41)[122] + 8LL) = *v42;
  if ( ((*v41)[31].x & 1) != 0
    || (unsigned int)EPATHOBJ_bStrokeAndOrFill(&v54, v41, (LINEATTRS *)&(*v41)[26], (XFORMOBJ *)&v52, 1u) )
  {
    v6 = 1;
  }
  EPATHOBJ::vUnlock((EPATHOBJ *)&v54);
  PATH_CORE::~PATH_CORE((PATH_CORE *)v57);
  CAutoTGO::vUnguard((CAutoTGO *)v56);
  return v6;
}
