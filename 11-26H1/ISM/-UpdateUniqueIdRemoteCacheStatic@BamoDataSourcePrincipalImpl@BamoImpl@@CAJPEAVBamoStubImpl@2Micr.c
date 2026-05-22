/*
 * XREFs of ?UpdateUniqueIdRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180107B24
 * Callers:
 *     ?SetUniqueId@BamoDataSourcePrincipal@@UEAAXAEBU_LUID@@@Z @ 0x180106F00 (-SetUniqueId@BamoDataSourcePrincipal@@UEAAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ?UpdateUniqueIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180107A1C (-UpdateUniqueIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsof.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::UpdateUniqueIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDataSourcePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoDataSourcePrincipalImpl::UpdateUniqueIdRemoteCache(this, a1);
  return 0LL;
}
