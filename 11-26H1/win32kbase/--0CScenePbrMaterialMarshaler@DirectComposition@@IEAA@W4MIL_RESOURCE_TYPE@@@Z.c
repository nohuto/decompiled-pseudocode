/*
 * XREFs of ??0CScenePbrMaterialMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14023B4BC
 * Callers:
 *     ??0CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B474 (--0CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CSceneMaterialMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14023B424 (--0CSceneMaterialMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CScenePbrMaterialMarshaler::CScenePbrMaterialMarshaler(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CSceneMaterialMarshaler::CSceneMaterialMarshaler(a1);
  result = v1;
  *v1 = &DirectComposition::CScenePbrMaterialMarshaler::`vftable';
  return result;
}
