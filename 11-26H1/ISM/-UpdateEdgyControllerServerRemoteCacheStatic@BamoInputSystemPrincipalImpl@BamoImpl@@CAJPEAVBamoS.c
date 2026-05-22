/*
 * XREFs of ?UpdateEdgyControllerServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131AC4
 * Callers:
 *     ?SetEdgyControllerServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoEdgyControllerServerPrincipal@@@Z @ 0x180090AA8 (-SetEdgyControllerServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoEdgyControllerServe.c)
 * Callees:
 *     ?UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180033784 (-UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateEdgyControllerServerRemoteCacheStatic(
        Microsoft::BamoImpl::BamoPrincipalImpl **a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*((_DWORD *)a1[4] + 11) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateEdgyControllerServerRemoteCache(this, a1);
  return 0LL;
}
