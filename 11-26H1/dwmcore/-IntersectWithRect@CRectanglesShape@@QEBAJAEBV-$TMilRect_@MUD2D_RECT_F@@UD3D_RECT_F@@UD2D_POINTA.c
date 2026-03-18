/*
 * XREFs of ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1801883C0
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800C8C10 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1801888BC (-AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CRectanglesShape::IntersectWithRect(__int64 a1, float *a2, CRectanglesShape **a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v5; // esi
  CRectanglesShape *v8; // rax
  CRectanglesShape *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r12
  struct D2D_RECT_F v12; // xmm0
  float v13; // xmm1_4
  float v14; // xmm1_4
  float top; // xmm4_4
  float v16; // xmm1_4
  float right; // xmm3_4
  float v18; // xmm2_4
  float bottom; // xmm1_4
  struct D2D_RECT_F v21; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0LL;
  v5 = 0;
  *a3 = 0LL;
  v8 = (CRectanglesShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
  v9 = v8;
  if ( v8 )
  {
    *((_QWORD *)v8 + 1) = 0LL;
    *(_QWORD *)v8 = &CRectanglesShape::`vftable';
    *((_QWORD *)v8 + 2) = (char *)v8 + 40;
    *((_QWORD *)v8 + 3) = (char *)v8 + 40;
    *((_QWORD *)v8 + 4) = (char *)v8 + 56;
    *((_QWORD *)v8 + 7) = 0LL;
    v10 = *(_QWORD *)(a1 + 16);
    if ( (*(_QWORD *)(a1 + 24) - v10) >> 4 )
    {
      v11 = 0LL;
      do
      {
        v12 = (struct D2D_RECT_F)_mm_loadu_si128((const __m128i *)(v11 + v10));
        v13 = *a2;
        v21 = v12;
        if ( v13 > v12.left )
        {
          v21.left = v13;
          v12.left = v13;
        }
        v14 = a2[1];
        top = v21.top;
        if ( v14 > v21.top )
        {
          v21.top = a2[1];
          top = v14;
        }
        v16 = a2[2];
        right = v21.right;
        if ( v21.right > v16 )
        {
          v21.right = a2[2];
          right = v16;
        }
        v18 = a2[3];
        bottom = v21.bottom;
        if ( v21.bottom > v18 )
        {
          v21.bottom = a2[3];
          bottom = v18;
        }
        if ( right > v12.left && bottom > top )
          CRectanglesShape::AddRect(v9, &v21);
        v10 = *(_QWORD *)(a1 + 16);
        ++v3;
        v11 += 16LL;
      }
      while ( v3 < (*(_QWORD *)(a1 + 24) - v10) >> 4 );
    }
    *a3 = v9;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xE9u, 0LL);
  }
  return v5;
}
