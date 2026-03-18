/*
 * XREFs of ??0CDropShadowMarshaler@DirectComposition@@QEAA@XZ @ 0x140055C08
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CCompositionShadowMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055C2C (--0CCompositionShadowMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CDropShadowMarshaler::CDropShadowMarshaler(
        DirectComposition::CDropShadowMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CCompositionShadowMarshaler::CCompositionShadowMarshaler(this);
  result = v1;
  *v1 = &DirectComposition::CDropShadowMarshaler::`vftable';
  return result;
}
