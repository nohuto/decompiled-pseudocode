/*
 * XREFs of ?UpdateActivatableEntityListRemoteCacheStatic@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800AFCBC
 * Callers:
 *     ?SetActivatableEntityList@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1800AF9F8 (-SetActivatableEntityList@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_Activat.c)
 * Callees:
 *     ?UpdateActivatableEntityListRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180033DF0 (-UpdateActivatableEntityListRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 */

__int64 __fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateActivatableEntityListRemoteCacheStatic(
        Microsoft::BamoImpl::BamoPrincipalImpl **a1,
        struct BamoImpl::BamoActivationWatcherPrincipalImpl *this)
{
  if ( !*((_DWORD *)a1[4] + 11) )
    BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateActivatableEntityListRemoteCache(this, a1);
  return 0LL;
}
