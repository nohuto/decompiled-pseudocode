/*
 * XREFs of _ShellGesturesProcessor::OnHitTest_::_1_::dtor$7 @ 0x1801DBC10
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

void __fastcall ShellGesturesProcessor::OnHitTest_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    *(BamoImpl::BamoMPCConstantManagerClientProxyImpl **)(a2 + 80),
    *(struct Microsoft::BamoImpl::BamoProxyImpl **)(a2 + 104));
}
