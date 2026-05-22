/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDelegatedInkCanvasInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012EF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BamoImpl::BamoDelegatedInkCanvasInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDelegatedInkCanvasInputObjectProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2,
        __int64 a3)
{
  LOBYTE(a3) = *((_BYTE *)a2 + 32);
  BamoImpl::BamoDelegatedInkCanvasInputObjectProxyImpl::UpdateEnabled(this, 0LL, a3);
}
