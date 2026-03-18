/*
 * XREFs of ?ptlXform@EBOX@@QEAA?AU_POINTL@@AEAVEPOINTFL@@@Z @ 0x14011184C
 * Callers:
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x140111548 (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 * Callees:
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

struct _POINTL __fastcall EBOX::ptlXform(__int64 this, struct EPOINTFL *a2, float *a3)
{
  __m128i v4; // xmm1
  int v5; // r8d
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(this + 48));
  *(float *)v4.m128i_i32 = (float)(*(float *)v4.m128i_i32 * *a3) + (float)((float)*(int *)(this + 56) * a3[1]);
  v5 = _mm_cvtsi128_si32(v4);
  v6 = (unsigned __int8)(v5 >> 23);
  if ( v6 <= 0x9E )
  {
    v7 = v5 & 0x7FFFFF | 0x800000LL;
    if ( v6 < 0x76 )
      v8 = v7 >> (118 - (unsigned __int8)v6);
    else
      v8 = v7 << ((unsigned __int8)v6 - 118);
    this = (v8 + 0x80000000LL) >> 32;
    if ( v5 < 0 )
      this = (unsigned int)-(int)this;
    LODWORD(v11) = this;
  }
  bFToL(this, (char *)&v11 + 4, 6LL);
  LODWORD(v11) = *(_DWORD *)(v9 + 40) + v11;
  HIDWORD(v11) += *(_DWORD *)(v9 + 44);
  *(_QWORD *)a2 = v11;
  return (struct _POINTL)a2;
}
