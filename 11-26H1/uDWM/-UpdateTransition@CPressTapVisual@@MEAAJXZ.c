/*
 * XREFs of ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800BC720
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013488 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800135C4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180078960 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800BC640 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPressTapVisual::UpdateTransition(CPressTapVisual *this, __int64 a2, __int64 a3, __int64 a4)
{
  float v4; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm7_4
  float v8; // xmm7_4
  float v9; // xmm2_4
  int v10; // esi
  LONG v11; // edi
  int v12; // ebp
  CVisual *v13; // rcx
  LONG v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  CVisual *v18; // rcx
  float v19; // xmm8_4
  float v20; // xmm1_4
  float v21; // xmm7_4
  float v22; // xmm2_4
  float v23; // xmm6_4
  __m128i v24; // xmm0
  CVisual *v25; // rcx
  LONG v26; // edi
  LONG v27; // ebx
  __int64 v28; // r8
  __int64 v29; // r8
  struct tagSIZE v31; // [rsp+70h] [rbp+8h] BYREF

  v4 = *((float *)this + 73);
  v6 = *((_QWORD *)this + 41);
  v31 = 0LL;
  v7 = *(double *)(v6 + 48);
  if ( v4 < v7 )
  {
    v20 = (float)*((int *)this + 65);
    v21 = (float)(v7 - v4) / *((float *)this + 74);
    v22 = (float)((float)(*((float *)this + 76) - *((float *)this + 75)) * v21) + *((float *)this + 75);
    v23 = (float)(1.0 - *((float *)this + 80)) * v21;
    v24 = _mm_cvtsi32_si128(*((_DWORD *)this + 64));
    v25 = (CVisual *)*((_QWORD *)this + 34);
    v26 = (int)(float)(v20 * v22);
    v27 = (int)(float)(_mm_cvtepi32_ps(v24).m128_f32[0] * v22);
    if ( v27 < 1 )
      v27 = 1;
    v31.cx = v27;
    if ( v26 < 1 )
      v26 = 1;
    v31.cy = v26;
    CVisual::SetSize(v25, &v31, a3, a4);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 34), (unsigned int)(*((_DWORD *)this + 58) - v27 / 2), v28);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 34), (unsigned int)(*((_DWORD *)this + 59) - v26 / 2), v29);
    CVisual::Hide(*((CVisual **)this + 35));
    v18 = (CVisual *)*((_QWORD *)this + 34);
    v19 = 1.0 - v23;
  }
  else
  {
    v8 = v7 / v4;
    v9 = (float)((float)(*((float *)this + 78) - *((float *)this + 77)) * v8) + *((float *)this + 77);
    v10 = *((_DWORD *)this + 60) + (int)(float)((float)(*((_DWORD *)this + 62) - *((_DWORD *)this + 60)) * v8);
    v11 = (int)(float)((float)*((int *)this + 67) * v9);
    v12 = *((_DWORD *)this + 61) + (int)(float)((float)(*((_DWORD *)this + 63) - *((_DWORD *)this + 61)) * v8);
    v13 = (CVisual *)*((_QWORD *)this + 35);
    v14 = (int)(float)((float)*((int *)this + 66) * v9);
    if ( v14 < 1 )
      v14 = 1;
    v31.cx = v14;
    if ( v11 < 1 )
      v11 = 1;
    v31.cy = v11;
    CVisual::SetSize(v13, &v31, a3, a4);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 35), (unsigned int)(v10 - v14 / 2), v15);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 35), (unsigned int)(v12 - v11 / 2), v16);
    v18 = (CVisual *)*((_QWORD *)this + 35);
    v19 = 1.0 - (float)((float)(1.0 - *((float *)this + 79)) * v8);
  }
  CVisual::SetOpacity(v18, v19, v17);
  if ( *(_BYTE *)(*((_QWORD *)this + 41) + 72LL) )
    CPressTapVisual::Stop(this);
  return 0LL;
}
