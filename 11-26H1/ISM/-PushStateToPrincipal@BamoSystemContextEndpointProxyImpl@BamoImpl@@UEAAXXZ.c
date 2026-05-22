/*
 * XREFs of ?PushStateToPrincipal@BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAXXZ @ 0x180143D20
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ @ 0x18014403C (-UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

void __fastcall BamoImpl::BamoSystemContextEndpointProxyImpl::PushStateToPrincipal(
        BamoImpl::BamoSystemContextEndpointProxyImpl *this)
{
  BamoImpl::BamoSystemContextEndpointProxyImpl::UpdateOcclusionRectsRemoteCache(this);
  BamoImpl::BamoSystemContextEndpointProxyImpl::UpdateTouchpadRectsRemoteCache(this);
}
