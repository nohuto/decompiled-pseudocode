/*
 * XREFs of ?GetWindowsMessageDelivery@BamoInputSiteElementProxy@@UEAAPEAVBamoWindowsMessageDeliveryProxy@@XZ @ 0x180028620
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180028770 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoWindowsMessageDeliveryProxy *__fastcall BamoInputSiteElementProxy::GetWindowsMessageDelivery(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoWindowsMessageDeliveryProxy *)*((_QWORD *)this + 40);
}
