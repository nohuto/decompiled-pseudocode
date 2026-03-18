/*
 * XREFs of ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x180241188
 * Callers:
 *     ?OnPortConnectionFailed@BaseBamoConnection@Bamo@Microsoft@@MEAAJJIII@Z @ 0x180240550 (-OnPortConnectionFailed@BaseBamoConnection@Bamo@Microsoft@@MEAAJJIII@Z.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x180251E70 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micro.c)
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJI@Z @ 0x180251FA0 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micro.c)
 *     ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x1802520C0 (-RemoteReplace@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micr.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::TrackError(
        Microsoft::Bamo::BaseBamoConnection *this,
        unsigned int a2)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v3; // rax

  v3 = (struct Microsoft::BamoImpl::ConnectionIndirector **)(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v3, a2, 1);
}
