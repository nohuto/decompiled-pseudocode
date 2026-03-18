/*
 * XREFs of ??0CEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14005621C
 * Callers:
 *     ??0CEffectGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x140056044 (--0CEffectGroupMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CTransform3DMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400561C4 (--0CTransform3DMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1401BDF34 (--0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562C8 (--0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CEffectMarshaler::CEffectMarshaler(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CPropertyChangeResourceMarshaler::CPropertyChangeResourceMarshaler(a1, a2);
  result = v2;
  *v2 = &DirectComposition::CCompositionShadowMarshaler::`vftable';
  return result;
}
