/*
 * XREFs of ?PushStateToProxy@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018FF48
 * Callers:
 *     ?PushStateToProxyOnOutboundMessagesResumed@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018FF90 (-PushStateToProxyOnOutboundMessagesResumed@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAXP.c)
 *     ?SendMaterializeProxy@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180191460 (-SendMaterializeProxy@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHo.c)
 * Callees:
 *     ?UpdatePenDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180191D9C (-UpdatePenDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImp.c)
 *     ?UpdateTouchpadDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180191EAC (-UpdateTouchpadDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoSt.c)
 */

void __fastcall BamoImpl::BamoHapticDeviceManagerPrincipalImpl::PushStateToProxy(
        BamoImpl::BamoHapticDeviceManagerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdatePenDevicesRemoteCache(this, a2);
  BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdateTouchpadDevicesRemoteCache(this, a2);
  BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdateMouseDevicesRemoteCache(this, a2);
}
