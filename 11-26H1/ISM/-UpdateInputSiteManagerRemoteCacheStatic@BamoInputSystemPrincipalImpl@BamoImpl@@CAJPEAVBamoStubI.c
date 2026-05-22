/*
 * XREFs of ?UpdateInputSiteManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131CB4
 * Callers:
 *     ?SetInputSiteManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputSiteManagerPrincipal@@@Z @ 0x1800905C8 (-SetInputSiteManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputSiteManagerPrincip.c)
 * Callees:
 *     ?UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180032CB8 (-UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputSiteManagerRemoteCacheStatic(
        Microsoft::BamoImpl::BamoPrincipalImpl **a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*((_DWORD *)a1[4] + 11) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputSiteManagerRemoteCache(this, a1);
  return 0LL;
}
