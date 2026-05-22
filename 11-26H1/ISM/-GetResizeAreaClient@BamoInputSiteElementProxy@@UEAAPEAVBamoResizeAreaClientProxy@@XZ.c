/*
 * XREFs of ?GetResizeAreaClient@BamoInputSiteElementProxy@@UEAAPEAVBamoResizeAreaClientProxy@@XZ @ 0x180028170
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180028770 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoResizeAreaClientProxy *__fastcall BamoInputSiteElementProxy::GetResizeAreaClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoResizeAreaClientProxy *)*((_QWORD *)this + 34);
}
