/*
 * XREFs of ?SetParent@CVisual@@UEAAJPEAVCContainerVisual@@@Z @ 0x180015F90
 * Callers:
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCContainerVisual@@@Z @ 0x18006C950 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCContainerVisual@@@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@IEAAXXZ @ 0x180015FBC (-PropagateDirtyChildren@CVisual@@IEAAXXZ.c)
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
