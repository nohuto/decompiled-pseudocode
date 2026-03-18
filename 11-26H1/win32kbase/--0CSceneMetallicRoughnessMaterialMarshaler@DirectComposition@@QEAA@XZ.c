/*
 * XREFs of ??0CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B474
 * Callers:
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CScenePbrMaterialMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14023B4BC (--0CScenePbrMaterialMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::CSceneMetallicRoughnessMaterialMarshaler(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CScenePbrMaterialMarshaler::CScenePbrMaterialMarshaler(this);
  result = v1;
  *v1 = &DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::`vftable';
  return result;
}
