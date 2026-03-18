/*
 * XREFs of ??0CTransformMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055F7C
 * Callers:
 *     ??0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140055C7C (--0CMatrixTransformMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x140055E60 (--0CManipulationTransformMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CTransform3DMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400561C4 (--0CTransform3DMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CTransformMarshaler::CTransformMarshaler(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CTransform3DMarshaler::CTransform3DMarshaler(a1, a2);
  result = v2;
  *v2 = &DirectComposition::CCompositionShadowMarshaler::`vftable';
  return result;
}
