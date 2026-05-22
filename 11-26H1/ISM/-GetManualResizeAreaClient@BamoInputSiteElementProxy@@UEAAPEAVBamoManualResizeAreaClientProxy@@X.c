/*
 * XREFs of ?GetManualResizeAreaClient@BamoInputSiteElementProxy@@UEAAPEAVBamoManualResizeAreaClientProxy@@XZ @ 0x180028230
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180028770 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoManualResizeAreaClientProxy *__fastcall BamoInputSiteElementProxy::GetManualResizeAreaClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoManualResizeAreaClientProxy *)*((_QWORD *)this + 32);
}
