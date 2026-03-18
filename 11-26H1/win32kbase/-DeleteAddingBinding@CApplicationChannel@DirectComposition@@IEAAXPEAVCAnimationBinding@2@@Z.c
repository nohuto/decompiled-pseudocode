/*
 * XREFs of ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1401C4660
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400AC320 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@@Z @ 0x1401A3234 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITIO.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14022AECC (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@UDCOMPOSI.c)
 * Callees:
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400B5300 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV32@@Z @ 0x140196C60 (-RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV.c)
 */

void __fastcall DirectComposition::CApplicationChannel::DeleteAddingBinding(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationBinding **Buffer)
{
  struct DirectComposition::CAnimationBinding ***v2; // r8
  struct _LIST_ENTRY *v3; // r9

  v2 = (struct DirectComposition::CAnimationBinding ***)((char *)this + 496);
  v3 = (struct _LIST_ENTRY *)Buffer;
  if ( *((_QWORD *)this + 62) )
    DirectComposition::CApplicationChannel::RemoveFromBatchList(this, Buffer, v2);
  DirectComposition::CAnimationBinding::DetachAndDelete(v3, (struct _RTL_GENERIC_TABLE *)this, (__int64)v2, (__int64)v3);
}
