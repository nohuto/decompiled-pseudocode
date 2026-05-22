/*
 * XREFs of ?PushStateToProxy@BamoInputSystemInternalPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801321E0
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180132210 (-PushStateToProxyOnOutboundMessagesResumed@BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAAXP.c)
 *     ?SendMaterializeProxy@BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180132460 (-SendMaterializeProxy@BamoInputSystemInternalPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHo.c)
 * Callees:
 *     ?UpdateInputProcessManagerRemoteCache@BamoInputSystemInternalPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801325F4 (-UpdateInputProcessManagerRemoteCache@BamoInputSystemInternalPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 */

void __fastcall BamoImpl::BamoInputSystemInternalPrincipalImpl::PushStateToProxy(
        BamoImpl::BamoInputSystemInternalPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateInputProcessManagerRemoteCache(this, a2);
  BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateSystemContextManagerRemoteCache(this, a2);
}
