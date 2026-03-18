/*
 * XREFs of ??0CSceneMaterialMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14023B424
 * Callers:
 *     ??0CScenePbrMaterialMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14023B4BC (--0CScenePbrMaterialMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSceneMaterialMarshaler::CSceneMaterialMarshaler(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, 122);
  result = v1;
  *v1 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
  return result;
}
