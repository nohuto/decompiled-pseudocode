/*
 * XREFs of ?PushStateToProxy@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180034B60
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoActivatableEntityPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B07E0 (-PushStateToProxyOnOutboundMessagesResumed@BamoActivatableEntityPrincipalImpl@BamoImpl@@UEAAXPEA.c)
 * Callees:
 *     ?UpdateLuidRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800356B8 (-UpdateLuidRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Micro.c)
 *     ?UpdateProcessIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800357E8 (-UpdateProcessIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 *     ?UpdateWindowIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180035AF8 (-UpdateWindowIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2M.c)
 *     ?UpdateParentIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180035C80 (-UpdateParentIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2M.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::PushStateToProxy(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateWindowIdRemoteCache(this, a2);
  BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateParentIdRemoteCache(this, a2);
  BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateLuidRemoteCache(this, a2);
  BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateProcessIdRemoteCache(this, a2);
  BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateThreadIdRemoteCache(this, a2);
}
