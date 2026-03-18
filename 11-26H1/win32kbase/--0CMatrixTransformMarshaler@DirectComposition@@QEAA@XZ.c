/*
 * XREFs of ??0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140055C7C
 * Callers:
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x140056790 (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CTransformMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055F7C (--0CTransformMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CMatrixTransformMarshaler::CMatrixTransformMarshaler(
        DirectComposition::CMatrixTransformMarshaler *this)
{
  _QWORD *v1; // rcx

  DirectComposition::CTransformMarshaler::CTransformMarshaler(this, 85LL);
  *v1 = &DirectComposition::CMatrixTransformMarshaler::`vftable';
  return v1;
}
