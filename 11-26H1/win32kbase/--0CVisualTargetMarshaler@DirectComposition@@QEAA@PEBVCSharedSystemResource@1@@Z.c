/*
 * XREFs of ??0CVisualTargetMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x140056DA0
 * Callers:
 *     ?OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x140056510 (-OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@.c)
 * Callees:
 *     ??0?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055FC8 (--0-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@QEAA.c)
 */

_QWORD *__fastcall DirectComposition::CVisualTargetMarshaler::CVisualTargetMarshaler(
        DirectComposition::CVisualTargetMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>((__int64)this);
  result = v2;
  *v2 = &DirectComposition::CVisualTargetMarshaler::`vftable';
  return result;
}
