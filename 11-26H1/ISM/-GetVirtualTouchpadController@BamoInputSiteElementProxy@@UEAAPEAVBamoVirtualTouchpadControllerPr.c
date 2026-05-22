/*
 * XREFs of ?GetVirtualTouchpadController@BamoInputSiteElementProxy@@UEAAPEAVBamoVirtualTouchpadControllerProxy@@XZ @ 0x180028470
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180028770 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoVirtualTouchpadControllerProxy *__fastcall BamoInputSiteElementProxy::GetVirtualTouchpadController(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoVirtualTouchpadControllerProxy *)*((_QWORD *)this + 39);
}
