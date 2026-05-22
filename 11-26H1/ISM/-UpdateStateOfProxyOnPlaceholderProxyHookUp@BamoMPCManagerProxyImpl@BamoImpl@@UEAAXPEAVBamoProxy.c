/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCManagerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18016B010
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateMPCConstantManagerClient@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18016AE74 (-UpdateMPCConstantManagerClient@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

void __fastcall BamoImpl::BamoMPCManagerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoMPCManagerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)a2 + 4);
  if ( v2 )
    BamoImpl::BamoMPCManagerProxyImpl::UpdateMPCConstantManagerClient(this, 0LL, *(unsigned int *)(v2 + 40));
}
