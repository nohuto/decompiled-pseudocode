/*
 * XREFs of _ControllerProcessor::SetVirtualKeyState_::_1_::dtor$7 @ 0x1801D6F80
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

void __fastcall ControllerProcessor::SetVirtualKeyState_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    *(BamoImpl::BamoMPCConstantManagerClientProxyImpl **)(a2 + 72),
    *(struct Microsoft::BamoImpl::BamoProxyImpl **)(a2 + 64));
}
