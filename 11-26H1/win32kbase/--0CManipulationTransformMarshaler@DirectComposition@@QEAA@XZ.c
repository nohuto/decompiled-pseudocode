/*
 * XREFs of ??0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140055E60
 * Callers:
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x140056790 (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CTransformMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055F7C (--0CTransformMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CManipulationTransformMarshaler::CManipulationTransformMarshaler(
        DirectComposition::CManipulationTransformMarshaler *this)
{
  _QWORD *v1; // rcx

  DirectComposition::CTransformMarshaler::CTransformMarshaler(this, 83LL);
  *v1 = &DirectComposition::CManipulationTransformMarshaler::`vftable';
  return v1;
}
