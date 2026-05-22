/*
 * XREFs of ?UpdateRegionsRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180143740
 * Callers:
 *     ?SetRegions@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAJPEBUINPUT_SPACE_REGION@@I@Z @ 0x18014355C (-SetRegions@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAJPEBUINPUT_SPACE_REGION@@I@Z.c)
 * Callees:
 *     ?UpdateRegionsRemoteCache@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800939E0 (-UpdateRegionsRemoteCache@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mi.c)
 */

__int64 __fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateRegionsRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSpacePayloadPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateRegionsRemoteCache(this, a1);
  return 0LL;
}
