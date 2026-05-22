/*
 * XREFs of ?GetInputDelegationInputObject@BamoInputSiteElementProxy@@UEAAPEAVBamoInputDelegationInputObjectProxy@@XZ @ 0x1800286E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180028770 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoInputDelegationInputObjectProxy *__fastcall BamoInputSiteElementProxy::GetInputDelegationInputObject(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoInputDelegationInputObjectProxy *)*((_QWORD *)this + 25);
}
