/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012EE10
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1800611C4 (-UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

void __fastcall BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateActivatePolicy(this, 0LL, *((unsigned int *)a2 + 8));
  BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateEatPolicy(this, 0LL, *((unsigned int *)a2 + 9));
}
