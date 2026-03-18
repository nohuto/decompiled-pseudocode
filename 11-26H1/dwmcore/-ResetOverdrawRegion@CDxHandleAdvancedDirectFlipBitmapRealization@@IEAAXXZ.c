/*
 * XREFs of ?ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x180126B28
 * Callers:
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x180126B00 (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 *     ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802AB6C0 (-AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ResetOverdrawRegion(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  std::_Ref_count_base *v2; // rcx

  *((_QWORD *)this + 52) = 0LL;
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 53);
  *((_QWORD *)this + 53) = 0LL;
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  *((_BYTE *)this + 432) = 0;
}
