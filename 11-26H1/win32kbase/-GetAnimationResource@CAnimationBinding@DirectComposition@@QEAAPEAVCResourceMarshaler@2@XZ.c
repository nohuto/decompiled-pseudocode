/*
 * XREFs of ?GetAnimationResource@CAnimationBinding@DirectComposition@@QEAAPEAVCResourceMarshaler@2@XZ @ 0x140167EEC
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400AC320 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

struct DirectComposition::CResourceMarshaler *__fastcall DirectComposition::CAnimationBinding::GetAnimationResource(
        DirectComposition::CAnimationBinding *this)
{
  return (struct DirectComposition::CResourceMarshaler *)(***((__int64 (__fastcall ****)(_QWORD))this + 3))(*((_QWORD *)this + 3));
}
