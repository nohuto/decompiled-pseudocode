/*
 * XREFs of ?GetRestrictToProcessIds@BamoDataSourceProxy@@UEAAPEAVBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x1801D1250
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1801D127C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *__fastcall BamoDataSourceProxy::GetRestrictToProcessIds(
        BamoDataSourceProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *)*((_QWORD *)this + 6);
}
