/*
 * XREFs of ?GetCursorSuppressionPolicyObject@BamoInputSiteElementProxy@@UEAAPEAVBamoCursorSuppressionPolicyObjectProxy@@XZ @ 0x1800285F0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180028770 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoCursorSuppressionPolicyObjectProxy *__fastcall BamoInputSiteElementProxy::GetCursorSuppressionPolicyObject(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoCursorSuppressionPolicyObjectProxy *)*((_QWORD *)this + 17);
}
