/*
 * XREFs of ?MarkAllBackdropVisualImagesDirty@CVisual@@QEBAXPEBVCVisualTree@@@Z @ 0x1800D499C
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180058488 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18002B2C0 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

void __fastcall CVisual::MarkAllBackdropVisualImagesDirty(CVisual *this, const struct CVisualTree *a2)
{
  struct CTreeData *TreeData; // rax
  CCachedVisualImage **v3; // rbx
  CCachedVisualImage **v4; // rdi

  TreeData = CVisual::FindTreeData(this, a2);
  if ( TreeData )
  {
    v3 = (CCachedVisualImage **)*((_QWORD *)TreeData + 18);
    v4 = (CCachedVisualImage **)*((_QWORD *)TreeData + 19);
    while ( v3 != v4 )
      CCachedVisualImage::MarkAllTargetsDirty(*v3++);
  }
}
