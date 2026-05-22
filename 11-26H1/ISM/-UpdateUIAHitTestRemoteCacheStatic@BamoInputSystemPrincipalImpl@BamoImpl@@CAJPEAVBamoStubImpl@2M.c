/*
 * XREFs of ?UpdateUIAHitTestRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131DBC
 * Callers:
 *     ?SetUIAHitTest@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoUIAHitTestPrincipal@@@Z @ 0x180131978 (-SetUIAHitTest@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoUIAHitTestPrincipal@@@Z.c)
 * Callees:
 *     ?UpdateUIAHitTestRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180033CA8 (-UpdateUIAHitTestRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Micro.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateUIAHitTestRemoteCacheStatic(
        Microsoft::BamoImpl::BamoPrincipalImpl **a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*((_DWORD *)a1[4] + 11) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateUIAHitTestRemoteCache(this, a1);
  return 0LL;
}
