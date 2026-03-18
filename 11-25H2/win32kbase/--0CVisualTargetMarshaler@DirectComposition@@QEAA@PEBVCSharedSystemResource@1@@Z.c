/*
 * XREFs of ??0CVisualTargetMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x1400541A4
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CVisualTargetMarshaler *__fastcall DirectComposition::CVisualTargetMarshaler::CVisualTargetMarshaler(
        DirectComposition::CVisualTargetMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)this, 134);
  *((_QWORD *)this + 7) = a2;
  *(_QWORD *)this = &DirectComposition::CVisualTargetMarshaler::`vftable';
  return this;
}
