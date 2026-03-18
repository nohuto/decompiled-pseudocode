/*
 * XREFs of ??0CProjectedShadowCasterMarshaler@DirectComposition@@QEAA@XZ @ 0x140055310
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562C8 (--0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CProjectedShadowCasterMarshaler::CProjectedShadowCasterMarshaler(
        DirectComposition::CProjectedShadowCasterMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CPropertyChangeResourceMarshaler::CPropertyChangeResourceMarshaler(this, 96LL);
  result = v1;
  *v1 = &DirectComposition::CProjectedShadowCasterMarshaler::`vftable';
  return result;
}
