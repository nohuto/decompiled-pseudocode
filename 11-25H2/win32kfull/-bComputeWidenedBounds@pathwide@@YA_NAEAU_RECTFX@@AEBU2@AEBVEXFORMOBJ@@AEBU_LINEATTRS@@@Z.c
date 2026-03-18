/*
 * XREFs of ?bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A2A74
 * Callers:
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400A2118 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAVEPATHOBJ@@AEBV2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A2A2C (-bComputeWidenedBounds@pathwide@@YA_NAEAVEPATHOBJ@@AEBV2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 *     NtGdiWidenPath @ 0x1400E53B0 (NtGdiWidenPath.c)
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
  bool result; // al
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // r8
  __int64 xLeft; // rdx
  __int64 xRight; // rcx
  __int64 yTop; // r11
  __int64 yBottom; // rbx
  __int64 v27; // rdi
  __int64 v28; // r10
  int v29; // r9d
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // edx
  float v33; // xmm1_4
  __m128i v34; // xmm0
  int v35; // r10d
  unsigned int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __m128i v40; // xmm0
  int v41; // r9d
  unsigned int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // [rsp+20h] [rbp-38h] BYREF
  int v47; // [rsp+24h] [rbp-34h]
  int v48; // [rsp+28h] [rbp-30h]
  int v49; // [rsp+2Ch] [rbp-2Ch]

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
  v46 = v5;
  v47 = v5;
  v48 = v5;
  v49 = -(int)v5;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (const struct _VECTORL *)&v46, (struct _VECTORFX *)&v46, 2uLL) )
    return 0;
  v12 = v46;
  v13 = v46;
  if ( v46 < 0 )
    v13 = -v46;
  v14 = v48;
  v15 = v48;
  if ( v48 < 0 )
    v15 = -v48;
  if ( v13 > v15 )
  {
    if ( v46 < 0 )
      v12 = -v46;
  }
  else
  {
    if ( v48 < 0 )
      v14 = -v48;
    v12 = v14;
  }
  v16 = ((__int64)v12 >> 1) + 16;
  if ( (unsigned __int64)(((__int64)v12 >> 1) + 2147483664LL) > 0xFFFFFFFF )
    return 0;
  v18 = v47;
  v19 = v47;
  if ( v47 < 0 )
    v19 = -v47;
  v20 = v49;
  v21 = v49;
  if ( v49 < 0 )
    v21 = -v49;
  if ( v19 > v21 )
  {
    if ( v47 < 0 )
      v18 = -v47;
  }
  else
  {
    if ( v49 < 0 )
      v20 = -v49;
    v18 = v20;
  }
  v22 = ((__int64)v18 >> 1) + 16;
  if ( (unsigned __int64)(((__int64)v18 >> 1) + 2147483664LL) > 0xFFFFFFFF )
    return 0;
  if ( *((_DWORD *)a4 + 2) == 1 )
  {
    v16 = (int)v16 + ((__int64)(int)v16 >> 1);
    if ( (unsigned __int64)(v16 + 0x80000000LL) > 0xFFFFFFFF )
      return 0;
    v22 = (int)v22 + ((__int64)(int)v22 >> 1);
    if ( (unsigned __int64)(v22 + 0x80000000LL) > 0xFFFFFFFF
      || (unsigned int)(v16 + 0x3FFFFFFF) > 0x7FFFFFFD
      || (unsigned int)(v22 + 0x3FFFFFFF) > 0x7FFFFFFD )
    {
      return 0;
    }
  }
  if ( *((_DWORD *)a4 + 1) == 2 )
  {
    v33 = *((float *)a4 + 4);
    v34 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v16);
    *(float *)v34.m128i_i32 = *(float *)v34.m128i_i32 * v33;
    v35 = _mm_cvtsi128_si32(v34);
    v36 = (unsigned __int8)(v35 >> 23);
    if ( v36 > 0x9E )
      return 0;
    v37 = v35 & 0x7FFFFFLL | 0x800000;
    if ( v36 < 0x76 )
      v38 = v37 >> (118 - (unsigned __int8)v36);
    else
      v38 = v37 << ((unsigned __int8)v36 - 118);
    v39 = (v38 + 0x80000000LL) >> 32;
    if ( v35 < 0 )
      LODWORD(v39) = -(int)v39;
    if ( (int)v39 < (int)v16 )
      return 0;
    v40 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v22);
    *(float *)v40.m128i_i32 = *(float *)v40.m128i_i32 * v33;
    v41 = _mm_cvtsi128_si32(v40);
    v42 = (unsigned __int8)(v41 >> 23);
    if ( v42 > 0x9E )
      return 0;
    v43 = v41 & 0x7FFFFFLL | 0x800000;
    v44 = v42 < 0x76 ? v43 >> (118 - (unsigned __int8)v42) : v43 << ((unsigned __int8)v42 - 118);
    v45 = (v44 + 0x80000000LL) >> 32;
    if ( v41 < 0 )
      LODWORD(v45) = -(int)v45;
    if ( (int)v45 < (int)v22
      || (unsigned int)(v39 + 0x3FFFFFFF) > 0x7FFFFFFD
      || (unsigned int)(v45 + 0x3FFFFFFF) > 0x7FFFFFFD )
    {
      return 0;
    }
    LODWORD(v22) = v45;
    LODWORD(v16) = v39;
  }
  xLeft = a2->xLeft;
  xRight = a2->xRight;
  yTop = a2->yTop;
  yBottom = a2->yBottom;
  if ( (unsigned int)(xLeft + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0;
  if ( (unsigned int)(xRight + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0;
  if ( (unsigned int)(yTop + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0;
  if ( (unsigned int)(yBottom + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0;
  v27 = (int)v16;
  v28 = xLeft - (int)v16;
  if ( (unsigned __int64)(v28 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v29 = v16 + xRight;
  if ( (unsigned __int64)(v27 + xRight + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v30 = (int)v22;
  v31 = yTop - (int)v22;
  if ( (unsigned __int64)(v31 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v32 = v30 + yBottom;
  if ( (unsigned __int64)(v30 + yBottom + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned int)(v28 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v29 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v31 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v32 + 0x3FFFFFFF) > 0x7FFFFFFD )
  {
    return 0;
  }
  *(_DWORD *)this = v28;
  result = 1;
  *((_DWORD *)this + 2) = v29;
  *((_DWORD *)this + 1) = v31;
  *((_DWORD *)this + 3) = v32;
  return result;
}
