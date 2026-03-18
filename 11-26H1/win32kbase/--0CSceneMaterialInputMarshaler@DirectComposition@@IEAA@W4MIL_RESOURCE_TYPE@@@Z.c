/*
 * XREFs of ??0CSceneMaterialInputMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054F68
 * Callers:
 *     ??0CSceneSurfaceMaterialInputMarshaler@DirectComposition@@QEAA@XZ @ 0x140054F44 (--0CSceneSurfaceMaterialInputMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSceneMaterialInputMarshaler::CSceneMaterialInputMarshaler(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, 128LL);
  result = v1;
  *v1 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
  return result;
}
