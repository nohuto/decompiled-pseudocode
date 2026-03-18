/*
 * XREFs of ??0CLegacyStereoRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x14005580C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CLegacyRenderTargetMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055830 (--0CLegacyRenderTargetMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CLegacyStereoRenderTargetMarshaler::CLegacyStereoRenderTargetMarshaler(
        DirectComposition::CLegacyStereoRenderTargetMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CLegacyRenderTargetMarshaler::CLegacyRenderTargetMarshaler(this);
  result = v1;
  *v1 = &DirectComposition::CLegacyStereoRenderTargetMarshaler::`vftable';
  return result;
}
