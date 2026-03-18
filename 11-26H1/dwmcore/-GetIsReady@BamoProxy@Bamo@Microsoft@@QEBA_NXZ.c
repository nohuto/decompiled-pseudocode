/*
 * XREFs of ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x180251A18
 * Callers:
 *     ?RemoteClear@?$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I@Bamo@Microsoft@@MEAAJXZ @ 0x180251DF0 (-RemoteClear@-$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x180251E70 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micro.c)
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJI@Z @ 0x180251FA0 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micro.c)
 *     ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x1802520C0 (-RemoteReplace@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micr.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall Microsoft::Bamo::BamoProxy::GetIsReady(Microsoft::Bamo::BamoProxy *this)
{
  return *(_BYTE *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 56LL))(this) + 28);
}
