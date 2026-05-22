/*
 * XREFs of ?GetMagnifierController@BamoInputSiteElementProxy@@UEAAPEAVBamoMagnifierControllerProxy@@XZ @ 0x1800284D0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180028770 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoMagnifierControllerProxy *__fastcall BamoInputSiteElementProxy::GetMagnifierController(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoMagnifierControllerProxy *)*((_QWORD *)this + 30);
}
