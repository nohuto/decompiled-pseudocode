/*
 * XREFs of ?ptfxFraction@pathwide@@YA?AU_POINTFIX@@U2@PEAVLINEDATA@1@AEAVEFLOAT@@2@Z @ 0x140108814
 * Callers:
 *     ?vNextStyleEvent@STYLER@pathwide@@QEAAXXZ @ 0x1401090F4 (-vNextStyleEvent@STYLER@pathwide@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct _POINTFIX __fastcall pathwide::ptfxFraction(
        pathwide *this,
        struct _POINTFIX a2,
        struct pathwide::LINEDATA *a3,
        struct EFLOAT *a4)
{
  struct _POINTFIX result; // rax
  int v6; // r8d
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  __m128i v10; // xmm0
  int v11; // r8d
  __int64 v12; // r9
  __m128i v13; // xmm1
  int v14; // ebx
  unsigned int v15; // r11d
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // ebx
  unsigned int v19; // r11d
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp+20h]

  result = (struct _POINTFIX)this;
  if ( *(float *)a4 != 0.0 )
  {
    v6 = *(_DWORD *)a2.x;
    if ( (*(_DWORD *)a2.x & 0x10) == 0 )
    {
      v7 = (float)*(int *)(*(_QWORD *)&a2 + 40LL);
      v8 = (float)*(int *)(*(_QWORD *)&a2 + 44LL);
      *(float *)(*(_QWORD *)&a2 + 80LL) = v7;
      *(float *)(*(_QWORD *)&a2 + 84LL) = v8;
      v9 = FP_1_0 / *(float *)a4;
      *(_DWORD *)a2.x = v6 | 0x10;
      *(float *)(*(_QWORD *)&a2 + 84LL) = v9 * v8;
      *(float *)(*(_QWORD *)&a2 + 80LL) = v9 * v7;
    }
    v10 = (__m128i)*(unsigned int *)a3;
    v11 = 0;
    v13 = v10;
    LODWORD(v12) = 0;
    *(float *)v10.m128i_i32 = *(float *)v10.m128i_i32 * *(float *)(*(_QWORD *)&a2 + 80LL);
    *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 * *(float *)(*(_QWORD *)&a2 + 84LL);
    v14 = _mm_cvtsi128_si32(v10);
    v15 = (unsigned __int8)(v14 >> 23);
    if ( v15 <= 0x9E )
    {
      v16 = v14 & 0x7FFFFF | 0x800000LL;
      v17 = v15 < 0x76 ? v16 >> (118 - (unsigned __int8)v15) : v16 << ((unsigned __int8)v15 - 118);
      v12 = (v17 + 0x80000000LL) >> 32;
      if ( v14 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    v18 = _mm_cvtsi128_si32(v13);
    v19 = (unsigned __int8)(v18 >> 23);
    if ( v19 <= 0x9E )
    {
      v20 = v18 & 0x7FFFFF | 0x800000LL;
      if ( v19 < 0x76 )
        v21 = v20 >> (118 - (unsigned __int8)v19);
      else
        v21 = v20 << ((unsigned __int8)v19 - 118);
      v11 = (unsigned __int64)(v21 + 0x80000000LL) >> 32;
      if ( v18 < 0 )
        v11 = -v11;
    }
    HIDWORD(v22) = v11 + HIDWORD(this);
    LODWORD(v22) = (_DWORD)this + v12;
    return (struct _POINTFIX)v22;
  }
  return result;
}
