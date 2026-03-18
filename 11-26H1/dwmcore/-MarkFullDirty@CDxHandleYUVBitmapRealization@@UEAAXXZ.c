/*
 * XREFs of ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1801C7FA0
 * Callers:
 *     ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1801C7F90 (-AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@WBAA@EAAXXZ @ 0x1802AF4A0 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@WBAA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDxHandleYUVBitmapRealization::MarkFullDirty(__int64 this)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *(_QWORD *)(this + 208);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 144);
    *(_BYTE *)(v1 + 136) = 0;
    if ( v2 )
      *(_BYTE *)(v2 + 32) = 0;
  }
  IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::MarkFullDirty(this);
}
