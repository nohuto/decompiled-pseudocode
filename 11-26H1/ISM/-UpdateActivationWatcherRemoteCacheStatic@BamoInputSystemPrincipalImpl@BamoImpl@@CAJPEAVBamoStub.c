/*
 * XREFs of ?UpdateActivationWatcherRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131A40
 * Callers:
 *     ?SetActivationWatcher@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoActivationWatcherPrincipal@@@Z @ 0x18008FAB8 (-SetActivationWatcher@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoActivationWatcherPrinc.c)
 * Callees:
 *     ?UpdateActivationWatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800338C8 (-UpdateActivationWatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateActivationWatcherRemoteCacheStatic(
        Microsoft::BamoImpl::BamoPrincipalImpl **a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*((_DWORD *)a1[4] + 11) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateActivationWatcherRemoteCache(this, a1);
  return 0LL;
}
