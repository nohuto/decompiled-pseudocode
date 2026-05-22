/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoResizeControllerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012F550
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateType@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x1801305FC (-UpdateType@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoResizeControllerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoResizeControllerClientProxyImpl *this,
        const struct _GUID *a2)
{
  BamoImpl::BamoResizeControllerClientProxyImpl::UpdateType(this, 0, a2 + 2);
  BamoImpl::BamoResizeControllerClientProxyImpl::UpdateHitTestConfiguration((__int64)this, 0LL, a2[3].Data1);
}
