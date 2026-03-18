/*
 * XREFs of ??0CCaptureRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x140055BE0
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CCaptureRenderTargetMarshaler::CCaptureRenderTargetMarshaler(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 18LL);
  result = v1;
  *v1 = &DirectComposition::CCaptureRenderTargetMarshaler::`vftable';
  return result;
}
