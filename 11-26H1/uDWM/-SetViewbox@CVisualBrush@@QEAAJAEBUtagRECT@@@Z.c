/*
 * XREFs of ?SetViewbox@CVisualBrush@@QEAAJAEBUtagRECT@@@Z @ 0x18009BB20
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z @ 0x18009B794 (-Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B65A0 (-UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x1800CA57C (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidRealizationSize@@YA_NAEBUD2D_SIZE_F@@@Z @ 0x18009B658 (-IsValidRealizationSize@@YA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x18009B9F0 (-SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualBrush::SetViewbox(CVisualBrush *this, const struct tagRECT *a2)
{
  __int64 v2; // r8
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int v8; // eax
  int v9; // ecx
  LONG bottom; // edx
  __m128i v11; // xmm0
  int v12; // edx
  __m128i v13; // xmm1
  __m128 v14; // xmm0
  __m128i v15; // xmm6
  int v16; // eax
  __m128 v17; // xmm7
  __int64 (__fastcall *v18)(__int64, unsigned __int64); // rax
  __m128 v19; // xmm6
  int v20; // edi
  __int64 v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct D2D_SIZE_F v23; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
  {
    v5 = -2147020579;
    v6 = 224LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = 0;
  v9 = a2->right - a2->left;
  bottom = a2->bottom;
  v11 = _mm_cvtsi32_si128(a2->left);
  if ( v9 >= 0 )
    v8 = v9;
  v12 = bottom - a2->top;
  v13 = _mm_cvtsi32_si128(a2->top);
  v14 = _mm_cvtepi32_ps(v11);
  v15 = _mm_cvtsi32_si128(v8);
  v16 = 0;
  if ( v12 >= 0 )
    v16 = v12;
  v17 = (__m128)COERCE_UNSIGNED_INT((float)v16);
  v18 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 72LL);
  v19 = _mm_cvtepi32_ps(v15);
  LODWORD(v23.height) = v17.m128_i32[0];
  LODWORD(v23.width) = v19.m128_i32[0];
  v20 = v18(v2, _mm_unpacklo_ps(v14, _mm_cvtepi32_ps(v13)).m128_u64[0]);
  if ( v20 < 0 )
  {
    v21 = 232LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
      (const char *)(unsigned int)v20);
    return (unsigned int)v20;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 1) + 88LL))(
          *((_QWORD *)this + 1),
          _mm_unpacklo_ps(v19, v17).m128_u64[0]);
  if ( v20 < 0 )
  {
    v21 = 236LL;
    goto LABEL_10;
  }
  if ( !*(_QWORD *)this && IsValidRealizationSize(&v23) )
  {
    v5 = CVisualBrush::SetRealizationSize(this, &v23);
    if ( v5 < 0 )
    {
      v6 = 241LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
