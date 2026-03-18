/*
 * XREFs of ??0CCompositionShadowMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055C2C
 * Callers:
 *     ??0CDropShadowMarshaler@DirectComposition@@QEAA@XZ @ 0x140055C08 (--0CDropShadowMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562C8 (--0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CCompositionShadowMarshaler::CCompositionShadowMarshaler(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CPropertyChangeResourceMarshaler::CPropertyChangeResourceMarshaler(a1, 45LL);
  result = v1;
  *v1 = &DirectComposition::CCompositionShadowMarshaler::`vftable';
  return result;
}
