/*
 * XREFs of ?vMakeIso@DC@@QEAAXXZ @ 0x1400388B4
 * Callers:
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x140039A40 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14003B980 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 * Callees:
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall DC::vMakeIso(DC *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rdi
  INT v4; // r8d
  _DWORD *v5; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v7; // ecx
  int v8; // eax
  float v9; // xmm6_4
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  __m128i v13; // xmm0
  float v14; // xmm6_4
  int *v15; // rdx
  float v16; // xmm2_4
  __m128i v17; // xmm0
  float v18; // xmm1_4
  int v19; // r10d
  unsigned int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r9d
  __int64 v24; // rcx
  __m128i v25; // xmm0
  int v26; // r10d
  unsigned int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  INT v31; // edx
  unsigned int v32; // ebx

  v2 = (_DWORD *)*((_QWORD *)this + 122);
  LODWORD(v3) = 0;
  v4 = v2[102];
  if ( v4 )
  {
    v31 = v2[106];
    if ( !v31 || (v32 = v2[107]) == 0 )
    {
      v14 = (float)((float)(v2[103] * v2[104]) / (float)v4) / (float)(int)v2[105];
      goto LABEL_10;
    }
    v13 = _mm_cvtsi32_si128(v32);
    v9 = (float)EngMulDiv(v2[103], v31, v4);
  }
  else
  {
    v5 = (_DWORD *)*((_QWORD *)this + 6);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (v5[10] & 1) == 0 || (v7 = CurrentThreadDpiAwarenessContext & 0xF, v7 == 1) || v7 == 2 )
      v8 = v5[541];
    else
      v8 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v9 = (float)v8;
    v10 = W32GetCurrentThreadDpiAwarenessContext();
    if ( (v5[10] & 1) == 0 || (v11 = v10 & 0xF, v11 == 1) || v11 == 2 )
      v12 = v5[540];
    else
      v12 = (v10 >> 8) & 0x1FF;
    v13 = _mm_cvtsi32_si128(v12);
  }
  v14 = v9 / _mm_cvtepi32_ps(v13).m128_f32[0];
LABEL_10:
  v15 = (int *)*((_QWORD *)this + 122);
  v16 = (float)v15[80];
  v17 = (__m128i)COERCE_UNSIGNED_INT((float)v15[83]);
  v18 = (float)v15[79];
  *(float *)v17.m128i_i32 = (float)((float)(*(float *)v17.m128i_i32 * v16) / v18) * v14;
  v19 = _mm_cvtsi128_si32(v17);
  v20 = (unsigned __int8)(v19 >> 23);
  if ( v20 <= 0x9E )
  {
    v21 = v19 & 0x7FFFFFLL | 0x800000;
    v22 = v20 < 0x76 ? v21 >> (118 - (unsigned __int8)v20) : v21 << ((unsigned __int8)v20 - 118);
    v3 = (v22 + 0x80000000LL) >> 32;
    if ( v19 < 0 )
      LODWORD(v3) = -(int)v3;
  }
  v23 = v15[84];
  LODWORD(v24) = -(int)v3;
  if ( (int)v3 > 0 )
    LODWORD(v24) = v3;
  if ( v23 <= 0 )
  {
    if ( -v23 >= (int)v24 )
    {
      LODWORD(v24) = -(int)v24;
      goto LABEL_19;
    }
  }
  else if ( v23 >= (int)v24 )
  {
LABEL_19:
    v15[84] = v24;
    return;
  }
  v25 = (__m128i)COERCE_UNSIGNED_INT((float)v23);
  *(float *)v25.m128i_i32 = (float)((float)(*(float *)v25.m128i_i32 * v18) / v16) / v14;
  v26 = _mm_cvtsi128_si32(v25);
  v27 = (unsigned __int8)(v26 >> 23);
  if ( v27 <= 0x9E )
  {
    v28 = v26 & 0x7FFFFFLL | 0x800000;
    v29 = v27 < 0x76 ? v28 >> (118 - (unsigned __int8)v27) : v28 << ((unsigned __int8)v27 - 118);
    v24 = (v29 + 0x80000000LL) >> 32;
    if ( v26 < 0 )
      LODWORD(v24) = -(int)v24;
  }
  v30 = -(int)v24;
  if ( (int)v24 > 0 )
    v30 = v24;
  if ( v15[83] <= 0 )
    v30 = -v30;
  v15[83] = v30;
}
