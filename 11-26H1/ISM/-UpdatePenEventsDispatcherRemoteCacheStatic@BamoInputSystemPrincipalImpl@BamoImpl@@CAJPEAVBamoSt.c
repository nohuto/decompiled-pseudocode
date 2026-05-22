/*
 * XREFs of ?UpdatePenEventsDispatcherRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131CE0
 * Callers:
 *     ?SetPenEventsDispatcher@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoPenEventsDispatcherPrincipal@@@Z @ 0x180090C48 (-SetPenEventsDispatcher@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoPenEventsDispatcherP.c)
 * Callees:
 *     ?UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180033640 (-UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenEventsDispatcherRemoteCacheStatic(
        Microsoft::BamoImpl::BamoPrincipalImpl **a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*((_DWORD *)a1[4] + 11) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenEventsDispatcherRemoteCache(this, a1);
  return 0LL;
}
