/*
 * XREFs of ?UpdateControllerNavigationManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131A6C
 * Callers:
 *     ?SetControllerNavigationManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoControllerNavigationManagerPrincipal@@@Z @ 0x180076430 (-SetControllerNavigationManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoControllerNa.c)
 * Callees:
 *     ?UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180033B60 (-UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateControllerNavigationManagerRemoteCacheStatic(
        Microsoft::BamoImpl::BamoPrincipalImpl **a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*((_DWORD *)a1[4] + 11) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateControllerNavigationManagerRemoteCache(this, a1);
  return 0LL;
}
