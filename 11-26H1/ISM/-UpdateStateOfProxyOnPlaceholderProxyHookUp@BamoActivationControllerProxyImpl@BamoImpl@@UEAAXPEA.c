/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1800B0530
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180074FA4 (-UpdateId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     ?UpdateLuid@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x180075C50 (-UpdateLuid@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z.c)
 */

void __fastcall BamoImpl::BamoActivationControllerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoActivationControllerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoActivationControllerProxyImpl::UpdateId(this, 0LL, *((_QWORD *)a2 + 5));
  BamoImpl::BamoActivationControllerProxyImpl::UpdateLuid(this, 0LL, (const struct _LUID *)a2 + 6);
  BamoImpl::BamoActivationControllerProxyImpl::UpdateAutoForwardId(this, 0LL, *((_QWORD *)a2 + 7));
}
