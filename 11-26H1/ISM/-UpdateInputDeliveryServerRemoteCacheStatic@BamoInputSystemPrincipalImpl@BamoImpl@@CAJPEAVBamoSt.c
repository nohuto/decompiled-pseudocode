/*
 * XREFs of ?UpdateInputDeliveryServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131C5C
 * Callers:
 *     ?SetInputDeliveryServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z @ 0x180091810 (-SetInputDeliveryServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputDeliveryServerP.c)
 * Callees:
 *     ?UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180034594 (-UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputDeliveryServerRemoteCacheStatic(
        Microsoft::BamoImpl::BamoPrincipalImpl **a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*((_DWORD *)a1[4] + 11) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputDeliveryServerRemoteCache(this, a1);
  return 0LL;
}
