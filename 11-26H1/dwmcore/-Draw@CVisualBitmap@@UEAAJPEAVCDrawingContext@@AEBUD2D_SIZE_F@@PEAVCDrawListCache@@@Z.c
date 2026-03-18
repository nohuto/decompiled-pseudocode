/*
 * XREFs of ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800AC0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CanUseCVI@CVisualBitmap@@AEAA_NPEAVCDrawingContext@@@Z @ 0x1800AC224 (-CanUseCVI@CVisualBitmap@@AEAA_NPEAVCDrawingContext@@@Z.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AD448 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180218218 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualBitmap::Draw(
        CVisual **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v4; // edi
  CVisual *v9; // rcx
  int VisualTree; // eax
  struct CVisualTree *v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  struct CVisualTree *v14; // rcx
  int v16; // eax
  struct CVisualTree *v17; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  if ( this[9] )
  {
    if ( CVisualBitmap::CanUseCVI((CVisualBitmap *)this, a2) )
    {
      v16 = CContent::Draw((CContent *)this, a2, a3, a4);
      v4 = v16;
      if ( v16 >= 0 )
        return v4;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x7Cu, 0LL);
    }
    v9 = this[9];
    v17 = 0LL;
    VisualTree = CVisual::GetVisualTree(v9, &v17, 0);
    v4 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, VisualTree, 0x84u, 0LL);
      v14 = v17;
      if ( !v17 )
        return v4;
      v13 = *(_QWORD *)v17;
      goto LABEL_7;
    }
    v11 = v17;
    v12 = CDrawingContext::DrawSubVisualTree(a2, v17, (char *)v17 + 80, 0LL);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x88u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
      return v4;
    }
    if ( v11 )
    {
      v13 = *(_QWORD *)v11;
      v14 = v11;
LABEL_7:
      (*(void (__fastcall **)(struct CVisualTree *))(v13 + 16))(v14);
    }
  }
  return v4;
}
