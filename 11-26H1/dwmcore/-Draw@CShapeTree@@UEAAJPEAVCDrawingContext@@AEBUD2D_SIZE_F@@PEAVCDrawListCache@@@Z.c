/*
 * XREFs of ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180013130
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180013208 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180040050 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CShapeTree::Draw(
        CShapeTree *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v4; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax

  v4 = *((_DWORD *)a2 + 78);
  if ( v4 && *(_BYTE *)((unsigned int)(v4 - 1) + *((_QWORD *)a2 + 38))
    || !*((_DWORD *)a2 + 161) && *((_DWORD *)a2 + 112)
    || CDrawingContext::IsHDRTarget(a2) )
  {
    v11 = CContent::Draw(this, a2, a3, a4);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x16u, 0LL);
  }
  else
  {
    v9 = CShapeTree::DrawShapes(this, a2, a3);
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1Au, 0LL);
  }
  return v10;
}
