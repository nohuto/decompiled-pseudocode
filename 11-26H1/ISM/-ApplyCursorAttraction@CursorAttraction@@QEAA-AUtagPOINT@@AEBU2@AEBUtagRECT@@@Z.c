/*
 * XREFs of ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1801A865C
 * Callers:
 *     ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x18017F050 (-OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?ClampCursorAttractionDelta@CursorAttraction@@AEAA?AUXMFLOAT2@DirectX@@AEBUtagPOINT@@@Z @ 0x1801A8838 (-ClampCursorAttractionDelta@CursorAttraction@@AEAA-AUXMFLOAT2@DirectX@@AEBUtagPOINT@@@Z.c)
 *     ?ComputeAverageCursorVelocity@CursorAttraction@@AEAA?AUXMFLOAT2@DirectX@@XZ @ 0x1801A8914 (-ComputeAverageCursorVelocity@CursorAttraction@@AEAA-AUXMFLOAT2@DirectX@@XZ.c)
 *     ?IsCursorAtRest@CursorAttraction@@AEAA_NXZ @ 0x1801A89E8 (-IsCursorAtRest@CursorAttraction@@AEAA_NXZ.c)
 *     ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x1801A8A7C (-UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z.c)
 */

struct tagPOINT __fastcall CursorAttraction::ApplyCursorAttraction(
        __m128i *this,
        struct tagPOINT *a2,
        const struct tagPOINT *a3,
        __m128i *a4)
{
  bool v4; // zf
  struct tagPOINT v6; // rax
  int v9; // ecx
  __m128i v10; // xmm1
  int v11; // r8d
  int v12; // eax
  __int32 v13; // r9d
  int v14; // eax
  __int32 v15; // r10d
  __int32 v16; // edx
  __int32 v17; // r10d
  __int32 v18; // edx
  __int32 v19; // r9d
  __int32 v20; // rcx^4
  unsigned __int64 v21; // xmm1_8
  LONG x; // eax
  LONG y; // ecx
  bool v24; // bp
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  __m128 v28; // xmm2
  float v29; // xmm2_4
  unsigned __int64 v31; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp+18h] BYREF

  v4 = a4->m128i_i32[0] == 0;
  v6 = *a3;
  *a2 = *a3;
  if ( !v4 || a4->m128i_i32[1] || a4->m128i_i32[2] || a4->m128i_i32[3] )
  {
    *(struct tagPOINT *)((char *)&this[3].m128i_i64[this[3].m128i_u32[0]] + 4) = v6;
    v9 = this[2].m128i_i32[3];
    v10 = *this;
    *this = *a4;
    v11 = (a4->m128i_i32[2] - a4->m128i_i32[0]) / 2;
    if ( v9 < v11 )
      v11 = v9;
    v12 = a4->m128i_i32[3] - a4->m128i_i32[1];
    v13 = this->m128i_i32[2];
    v14 = v12 / 2;
    v15 = this->m128i_i32[1];
    v16 = this->m128i_i32[3];
    if ( v9 < v14 )
      v14 = v9;
    this->m128i_i32[0] += v11;
    v17 = v14 + v15;
    v18 = v16 - v14;
    v19 = v13 - v11;
    this->m128i_i32[1] = v17;
    v20 = v10.m128i_i32[1];
    this->m128i_i32[3] = v18;
    this->m128i_i32[2] = v19;
    if ( v10.m128i_i32[0] != this->m128i_i32[0]
      || (v21 = _mm_srli_si128(v10, 8).m128i_u64[0], (_DWORD)v21 != v19)
      || v20 != v17
      || HIDWORD(v21) != v18 )
    {
      this[2].m128i_i8[0] = 0;
    }
    CursorAttraction::UpdateAttractionParameters((CursorAttraction *)this, a3);
    x = a3->x;
    v24 = 0;
    if ( a3->x >= this->m128i_i32[0] && x <= this->m128i_i32[2] )
    {
      y = a3->y;
      if ( y >= this->m128i_i32[1] && y <= this->m128i_i32[3] )
        v24 = 1;
    }
    v25 = *(float *)&this[2].m128i_i32[2] * *(float *)&this[2].m128i_i32[2];
    v26 = (float)(a3->y - this[1].m128i_i32[1]);
    v27 = (float)(v26 * v26) + (float)((float)(x - this[1].m128i_i32[0]) * (float)(x - this[1].m128i_i32[0]));
    if ( v24 || v25 < v27 )
    {
      if ( this[2].m128i_i8[0] )
      {
        if ( v25 < v27 )
          this[2].m128i_i8[0] = 0;
      }
      else if ( CursorAttraction::IsCursorAtRest((CursorAttraction *)this) && v24 )
      {
        this[2].m128i_i8[0] = 1;
      }
    }
    else
    {
      CursorAttraction::ClampCursorAttractionDelta(this, &v31, a3);
      CursorAttraction::ComputeAverageCursorVelocity(this, &v32);
      v28 = _mm_mul_ps((__m128)v32, (__m128)v31);
      v29 = v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
      if ( !this[2].m128i_i8[0] || v29 > 0.0 )
      {
        a2->x += (int)*(float *)&v31;
        a2->y += (int)*((float *)&v31 + 1);
      }
    }
    this[3].m128i_i32[0] = (this[3].m128i_i32[0] + 1) % 0xAu;
  }
  return (struct tagPOINT)a2;
}
