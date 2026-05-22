/*
 * XREFs of ?GetInputForwardAreaInputObject@BamoInputSiteElementProxy@@UEAAPEAVBamoInputForwardAreaInputObjectProxy@@XZ @ 0x180028350
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180028770 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoInputForwardAreaInputObjectProxy *__fastcall BamoInputSiteElementProxy::GetInputForwardAreaInputObject(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoInputForwardAreaInputObjectProxy *)*((_QWORD *)this + 26);
}
