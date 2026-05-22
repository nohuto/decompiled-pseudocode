/*
 * XREFs of ?GetInputForwardTargetInputObject@BamoInputSiteElementProxy@@UEAAPEAVBamoInputForwardTargetInputObjectProxy@@XZ @ 0x1800283E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180028770 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoInputForwardTargetInputObjectProxy *__fastcall BamoInputSiteElementProxy::GetInputForwardTargetInputObject(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoInputForwardTargetInputObjectProxy *)*((_QWORD *)this + 27);
}
