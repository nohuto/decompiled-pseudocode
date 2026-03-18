/*
 * XREFs of ?Push@CBaseClipStack@@IEAAJAEBUD2D_RECT_F@@@Z @ 0x1800DEAF0
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180089340 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z @ 0x1800DED38 (-Push@COccluderClipStack@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CBaseClipStack::Push(const void **this, const struct D2D_RECT_F *a2)
{
  __int64 v2; // r8
  __m128 si128; // xmm6
  float v5; // xmm3_4
  float top; // xmm1_4
  float v7; // xmm0_4
  __m128 v8; // xmm6
  float right; // xmm2_4
  float v10; // xmm1_4
  __m128 v11; // xmm6
  float bottom; // xmm4_4
  float v13; // xmm2_4
  __m128 v14; // xmm6
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v19; // rdx
  unsigned int v20; // ebx
  unsigned int v21; // edi
  unsigned int v22; // esi
  void *v23; // rax
  const void *v24; // rbp
  __m128 v25; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((unsigned int *)this + 2);
  if ( (_DWORD)v2 )
    si128 = *((__m128 *)*this + (unsigned int)(v2 - 1));
  else
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  v5 = si128.m128_f32[0];
  v25 = si128;
  if ( a2->left > si128.m128_f32[0] )
  {
    si128.m128_f32[0] = a2->left;
    v5 = si128.m128_f32[0];
    v25 = si128;
  }
  top = a2->top;
  v7 = _mm_shuffle_ps(si128, si128, 85).m128_f32[0];
  if ( top > v7 )
  {
    v7 = a2->top;
    v8 = _mm_shuffle_ps(v25, v25, 225);
    v8.m128_f32[0] = top;
    si128 = _mm_shuffle_ps(v8, v8, 225);
    v25 = si128;
  }
  right = a2->right;
  v10 = _mm_shuffle_ps(si128, si128, 170).m128_f32[0];
  if ( v10 > right )
  {
    v10 = a2->right;
    v11 = _mm_shuffle_ps(v25, v25, 210);
    v11.m128_f32[0] = right;
    si128 = _mm_shuffle_ps(v11, v11, 201);
    v25 = si128;
  }
  bottom = a2->bottom;
  v13 = _mm_shuffle_ps(si128, si128, 255).m128_f32[0];
  if ( v13 > bottom )
  {
    v13 = a2->bottom;
    v14 = _mm_shuffle_ps(v25, v25, 147);
    v14.m128_f32[0] = bottom;
    si128 = _mm_shuffle_ps(v14, v14, 57);
  }
  if ( v10 <= v5 || v13 <= v7 )
    si128 = 0uLL;
  v15 = *((unsigned int *)this + 3);
  if ( (_DWORD)v2 != (_DWORD)v15 )
    goto LABEL_14;
  if ( (unsigned __int64)(2 * v15) > 0xFFFFFFFF )
  {
    v19 = 98LL;
LABEL_20:
    v20 = -2147024362;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v20);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v20);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x31u, 0LL);
    return v20;
  }
  v21 = 8;
  if ( (unsigned int)(2 * v15) > 8 )
    v21 = 2 * v15;
  v22 = 16 * v2;
  if ( (unsigned __int64)(16 * v2) > 0xFFFFFFFF )
  {
    v19 = 101LL;
    goto LABEL_20;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v21 <= 0x10 )
  {
    v20 = -2147024809;
    goto LABEL_29;
  }
  v23 = MIDL_user_allocate(16LL * v21);
  v24 = v23;
  if ( !v23 )
  {
    v20 = -2147024882;
LABEL_29:
    v19 = 104LL;
    goto LABEL_21;
  }
  memcpy_0(v23, *this, v22);
  operator delete((void *)*this);
  *this = v24;
  *((_DWORD *)this + 3) = v21;
LABEL_14:
  *((__m128 *)*this + *((unsigned int *)this + 2)) = si128;
  v16 = *((_DWORD *)this + 5);
  v17 = *((_DWORD *)this + 2) + 1;
  *((_DWORD *)this + 2) = v17;
  if ( v16 <= v17 )
    v16 = v17;
  *((_DWORD *)this + 5) = v16;
  return 0LL;
}
