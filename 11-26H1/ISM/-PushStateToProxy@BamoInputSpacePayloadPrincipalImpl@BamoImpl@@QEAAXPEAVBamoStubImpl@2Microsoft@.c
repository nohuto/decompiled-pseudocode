/*
 * XREFs of ?PushStateToProxy@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800938E0
 * Callers:
 *     ?SendMaterializeProxy@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18007E360 (-SendMaterializeProxy@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost.c)
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180141390 (-PushStateToProxyOnOutboundMessagesResumed@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAXPEA.c)
 * Callees:
 *     ?UpdateInputSpaceRemoteCache@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180093910 (-UpdateInputSpaceRemoteCache@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 */

void __fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::PushStateToProxy(
        BamoImpl::BamoInputSpacePayloadPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateInputSpaceRemoteCache(this, a2);
  BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateRegionsRemoteCache(this, a2);
}
