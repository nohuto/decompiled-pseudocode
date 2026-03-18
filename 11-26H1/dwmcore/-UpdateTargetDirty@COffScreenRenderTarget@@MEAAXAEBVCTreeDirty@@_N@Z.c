/*
 * XREFs of ?UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1801234B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180057560 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?IsEmpty@CTreeDirty@@QEBA_NXZ @ 0x180123744 (-IsEmpty@CTreeDirty@@QEBA_NXZ.c)
 */

void __fastcall COffScreenRenderTarget::UpdateTargetDirty(COffScreenRenderTarget *this, const struct CTreeDirty *a2)
{
  __int64 v2; // r8

  if ( *((_DWORD *)this + 44) )
  {
    CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)this + 408, (__int64)a2);
  }
  else if ( !CTreeDirty::IsEmpty(a2) )
  {
    CTargetDirtyBase<8>::SetFullDirty(v2 + 408);
  }
}
