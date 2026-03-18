/*
 * XREFs of ?bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1401183C8
 * Callers:
 *     GreFrameRgn @ 0x140080F30 (GreFrameRgn.c)
 *     EngStrokeAndFillPath @ 0x140084A20 (EngStrokeAndFillPath.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAVEPATHOBJ@@AEBV2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140117090 (-bComputeWidenedBounds@pathwide@@YA_NAEAVEPATHOBJ@@AEBV2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiWidenPath @ 0x14011ADC0 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

bool __fastcall pathwide::bComputeWidenedBounds(
        pathwide *this,
        struct _RECTFX *a2,
        struct _RECTFX *a3,
        const struct EXFORMOBJ *a4)
{
  int v4; // ebx
  __int64 v5; // r10
  unsigned int v7; // r11d
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // r9
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rdx
  __int64 xLeft; // rcx
  __int64 xRight; // r10
  __int64 yTop; // r11
  __int64 yBottom; // rbx
  bool result; // al
  float v27; // xmm1_4
  int v28; // r10d
  __m128i v29; // xmm0
  int v30; // r9d
  unsigned int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // r8d
  __m128i v36; // xmm0
  int v37; // edx
  unsigned int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r10
  __int64 v44; // rcx
  __int64 v45; // rdx
  int v46; // r9d
  int v47; // [rsp+30h] [rbp-38h] BYREF
  int v48; // [rsp+34h] [rbp-34h]
  int v49; // [rsp+38h] [rbp-30h]
  int v50; // [rsp+3Ch] [rbp-2Ch]

  v4 = *((_DWORD *)a4 + 3);
  LODWORD(v5) = 0;
  v7 = (unsigned __int8)(v4 >> 23);
  if ( v7 <= 0x9E )
  {
    v10 = v4 & 0x7FFFFF | 0x800000LL;
    v11 = v7 < 0x76 ? v10 >> (118 - (unsigned __int8)v7) : v10 << ((unsigned __int8)v7 - 118);
    v5 = (v11 + 0x80000000LL) >> 32;
    if ( v4 < 0 )
      LODWORD(v5) = -(int)v5;
  }
  v47 = v5;
  v48 = v5;
  v49 = v5;
  v50 = -(int)v5;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (const struct _VECTORL *)&v47, (struct _VECTORFX *)&v47, 2uLL, 0) )
    return 0;
  v12 = v47;
  v13 = v47;
  if ( v47 < 0 )
    v13 = -v47;
  v14 = v49;
  v15 = v49;
  if ( v49 < 0 )
    v15 = -v49;
  if ( v13 > v15 )
  {
    if ( v47 < 0 )
      v12 = -v47;
  }
  else
  {
    if ( v49 < 0 )
      v14 = -v49;
    v12 = v14;
  }
  v16 = ((__int64)v12 >> 1) + 16;
  if ( (unsigned __int64)(((__int64)v12 >> 1) + 2147483664LL) > 0xFFFFFFFF )
    return 0;
  v17 = v48;
  v18 = v48;
  if ( v48 < 0 )
    v18 = -v48;
  v19 = v50;
  v20 = v50;
  if ( v50 < 0 )
    v20 = -v50;
  if ( v18 > v20 )
  {
    if ( v48 < 0 )
      v17 = -v48;
  }
  else
  {
    if ( v50 < 0 )
      v19 = -v50;
    v17 = v19;
  }
  v21 = ((__int64)v17 >> 1) + 16;
  if ( (unsigned __int64)(((__int64)v17 >> 1) + 2147483664LL) > 0xFFFFFFFF )
    return 0;
  if ( *((_DWORD *)a4 + 2) == 1 )
  {
    v16 = (int)v16 + ((__int64)(int)v16 >> 1);
    if ( (unsigned __int64)(v16 + 0x80000000LL) > 0xFFFFFFFF )
      return 0;
    v21 = (int)v21 + ((__int64)(int)v21 >> 1);
    if ( (unsigned __int64)(v21 + 0x80000000LL) > 0xFFFFFFFF
      || (unsigned int)(v16 + 0x3FFFFFFF) > 0x7FFFFFFD
      || (unsigned int)(v21 + 0x3FFFFFFF) > 0x7FFFFFFD )
    {
      return 0;
    }
  }
  if ( *((_DWORD *)a4 + 1) == 2 )
  {
    v27 = *((float *)a4 + 4);
    v28 = v16;
    v29 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v16);
    *(float *)v29.m128i_i32 = *(float *)v29.m128i_i32 * v27;
    v30 = _mm_cvtsi128_si32(v29);
    v31 = (unsigned __int8)(v30 >> 23);
    if ( v31 > 0x9E )
      return 0;
    v32 = v30 & 0x7FFFFFLL | 0x800000;
    if ( v31 < 0x76 )
      v33 = v32 >> (118 - (unsigned __int8)v31);
    else
      v33 = v32 << ((unsigned __int8)v31 - 118);
    v34 = (v33 + 0x80000000LL) >> 32;
    if ( v30 < 0 )
      LODWORD(v34) = -(int)v34;
    LODWORD(v16) = v34;
    if ( (int)v34 < v28 )
      return 0;
    v35 = v21;
    v36 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v21);
    *(float *)v36.m128i_i32 = *(float *)v36.m128i_i32 * v27;
    v37 = _mm_cvtsi128_si32(v36);
    v38 = (unsigned __int8)(v37 >> 23);
    if ( v38 > 0x9E )
      return 0;
    v39 = v37 & 0x7FFFFFLL | 0x800000;
    v40 = v38 < 0x76 ? v39 >> (118 - (unsigned __int8)v38) : v39 << ((unsigned __int8)v38 - 118);
    v41 = (v40 + 0x80000000LL) >> 32;
    if ( v37 < 0 )
      LODWORD(v41) = -(int)v41;
    LODWORD(v21) = v41;
    if ( (int)v41 < v35
      || (unsigned int)(v16 + 0x3FFFFFFF) > 0x7FFFFFFD
      || (unsigned int)(v41 + 0x3FFFFFFF) > 0x7FFFFFFD )
    {
      return 0;
    }
  }
  xLeft = a2->xLeft;
  xRight = a2->xRight;
  yTop = a2->yTop;
  yBottom = a2->yBottom;
  if ( (int)xLeft >= 0x3FFFFFFF )
    return 0;
  if ( (int)xLeft <= -1073741824 )
    return 0;
  if ( (unsigned int)(xRight + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0;
  if ( (unsigned int)(yTop + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0;
  if ( (unsigned int)(yBottom + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0;
  v42 = xLeft - (int)v16;
  if ( (unsigned __int64)(v42 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v43 = (int)v16 + xRight;
  if ( (unsigned __int64)(v43 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v44 = (int)v21;
  v45 = yTop - (int)v21;
  if ( (unsigned __int64)(v45 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v46 = v44 + yBottom;
  if ( (unsigned __int64)(v44 + yBottom + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned int)(v42 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v43 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v45 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v46 + 0x3FFFFFFF) > 0x7FFFFFFD )
  {
    return 0;
  }
  *(_DWORD *)this = v42;
  result = 1;
  *((_DWORD *)this + 2) = v43;
  *((_DWORD *)this + 1) = v45;
  *((_DWORD *)this + 3) = v46;
  return result;
}
