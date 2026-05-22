/*
 * XREFs of ?GetManualDragAreaClient@BamoInputSiteElementProxy@@UEAAPEAVBamoManualDragAreaClientProxy@@XZ @ 0x180028560
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180028770 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoManualDragAreaClientProxy *__fastcall BamoInputSiteElementProxy::GetManualDragAreaClient(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoManualDragAreaClientProxy *)*((_QWORD *)this + 31);
}
