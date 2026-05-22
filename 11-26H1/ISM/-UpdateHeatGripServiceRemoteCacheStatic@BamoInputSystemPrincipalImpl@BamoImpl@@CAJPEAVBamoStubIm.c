/*
 * XREFs of ?UpdateHeatGripServiceRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131C30
 * Callers:
 *     ?SetHeatGripService@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHeatGripServicePrincipal@@@Z @ 0x180090908 (-SetHeatGripService@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHeatGripServicePrincipal.c)
 * Callees:
 *     ?UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800341C4 (-UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateHeatGripServiceRemoteCacheStatic(
        Microsoft::BamoImpl::BamoPrincipalImpl **a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*((_DWORD *)a1[4] + 11) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateHeatGripServiceRemoteCache(this, a1);
  return 0LL;
}
