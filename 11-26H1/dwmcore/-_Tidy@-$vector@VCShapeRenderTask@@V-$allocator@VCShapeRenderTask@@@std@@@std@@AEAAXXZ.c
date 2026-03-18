/*
 * XREFs of ?_Tidy@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXXZ @ 0x18003FBF8
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180040050 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??1CShapeDrawingContext@@QEAA@XZ @ 0x18019CC78 (--1CShapeDrawingContext@@QEAA@XZ.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CShapeRenderTask>::_Tidy(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 16) - (_QWORD)v2;
    v6 = v2;
    v4 = 8 * (v3 >> 3);
    v5 = v4;
    if ( v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v4 = v5;
      v2 = v6;
    }
    operator delete(v2, v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
