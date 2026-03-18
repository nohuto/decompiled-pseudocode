/*
 * XREFs of ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x180045390
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CKeyframeAnimation::UpdateTime(CKeyframeAnimation *this, int a2, double a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r9
  __m128i v9; // xmm0
  int v10; // eax
  int v11; // ecx
  float v12; // xmm1_4
  bool v13; // al
  int v14; // edx
  int v15; // r10d
  float v16; // xmm1_4
  int v17; // r8d
  __m128 v18; // rt1
  float v19; // [rsp+8h] [rbp+8h]

  if ( *((char *)this + 464) < 0 )
  {
    if ( *((_DWORD *)this + 114) == 4 )
    {
      v8 = *((_QWORD *)this + 38);
      v9 = 0LL;
      v10 = *(_DWORD *)(v8 + 104);
      if ( v10 > 0 )
      {
        v9 = 0LL;
        *(float *)v9.m128i_i32 = (float)*(int *)(*(_QWORD *)(v8 + 96) + 24LL * (unsigned int)(v10 - 1)) / 1000.0;
      }
      *(float *)v9.m128i_i32 = (float)(*(float *)v9.m128i_i32 * *((float *)this + 110)) * 1000.0;
      if ( (_mm_cvtsi128_si32(v9) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)*(float *)v9.m128i_i32 - *(float *)v9.m128i_i32;
        v18.m128_f32[0] = FLOAT_N0_5;
        v11 = (int)*(float *)v9.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, v18));
      }
      else
      {
        v19 = *(float *)v9.m128i_i32 + 6291456.25;
        v11 = (int)(LODWORD(v19) << 10) >> 11;
      }
      v12 = *(float *)(v8 + 128);
      v13 = (*(_BYTE *)(v8 + 132) & 0x10) != 0;
      if ( v12 == 1.0 )
      {
        v14 = *(_DWORD *)(v8 + 112);
        v15 = v14;
      }
      else
      {
        v15 = *(_DWORD *)(v8 + 112);
        v14 = (int)(float)((float)v15 * v12);
      }
      v16 = *(float *)(v8 + 124);
      if ( v16 == 0.0 )
        v17 = 0;
      else
        v17 = (int)(float)((float)v15 * v16);
      *(_DWORD *)(v8 + 72) = v17;
      *(_DWORD *)(v8 + 76) = v14;
      *(_DWORD *)(v8 + 80) = v15;
      *(_BYTE *)(v8 + 88) = v13;
      *(_BYTE *)(v8 + 132) |= 0x20u;
      *(_DWORD *)(v8 + 84) = v11;
    }
    else
    {
      v4 = *((_DWORD *)this + 92);
      v5 = *((_DWORD *)this + 93);
      if ( v5 < v4 )
      {
        v6 = v4 - v5;
        if ( a2 < v6 )
          v6 = a2;
        *((_DWORD *)this + 93) = v6 + v5;
        a2 -= v6;
      }
      v7 = *((_QWORD *)this + 38);
      if ( (*(_BYTE *)(v7 + 132) & 2) != 0 )
        *(_DWORD *)(v7 + 84) += a2;
    }
  }
}
