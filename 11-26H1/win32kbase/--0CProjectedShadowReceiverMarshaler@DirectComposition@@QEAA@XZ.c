/*
 * XREFs of ??0CProjectedShadowReceiverMarshaler@DirectComposition@@QEAA@XZ @ 0x140055230
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562C8 (--0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CProjectedShadowReceiverMarshaler::CProjectedShadowReceiverMarshaler(
        DirectComposition::CProjectedShadowReceiverMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CPropertyChangeResourceMarshaler::CPropertyChangeResourceMarshaler(this, 97LL);
  result = v1;
  *v1 = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
  return result;
}
