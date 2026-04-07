/*
 * XREFs of ?SetParent@CVisual@@UEAAJPEAVCContainerVisual@@@Z @ 0x18001E300
 * Callers:
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCContainerVisual@@@Z @ 0x18007BB50 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCContainerVisual@@@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18001E330 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CVisual::SetParent(CVisual *this, struct CContainerVisual *a2)
{
  *((_QWORD *)this + 3) = a2;
  if ( !a2 )
    *((_BYTE *)this + 36) &= ~4u;
  if ( *((_DWORD *)this + 8) )
    CVisual::PropagateDirtyChildren(this);
  return 0LL;
}
