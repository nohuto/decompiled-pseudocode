/*
 * XREFs of ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x18021CF30
 * Callers:
 *     ?Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005A2A4 (-Add@CTreeDirty@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x18008D260 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F5F0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ?Initialize@CTreeDirty@@QEAAX_N@Z @ 0x1801673C0 (-Initialize@CTreeDirty@@QEAAX_N@Z.c)
 */

void __fastcall CTreeDirty::SetFullDirty(CTreeDirty *this)
{
  char v2; // di
  __int64 v3; // rbx

  if ( !*((_BYTE *)this + 2324) )
  {
    v2 = *((_BYTE *)this + 2325);
    v3 = *((_QWORD *)this + 1);
    CTreeDirty::Initialize(this, 1);
    *((_BYTE *)this + 2325) = v2;
    *((_QWORD *)this + 1) = v3;
  }
}
