/*
 * XREFs of ??0CEffectGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x140056044
 * Callers:
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14005621C (--0CEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CEffectGroupMarshaler::CEffectGroupMarshaler(
        DirectComposition::CEffectGroupMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CEffectMarshaler::CEffectMarshaler(this, 48LL);
  result = v1;
  *v1 = &DirectComposition::CEffectGroupMarshaler::`vftable';
  return result;
}
