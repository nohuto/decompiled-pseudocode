/*
 * XREFs of ??0CSceneRendererComponentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054ED4
 * Callers:
 *     ??0CSceneMeshRendererComponentMarshaler@DirectComposition@@QEAA@XZ @ 0x140054EB0 (--0CSceneMeshRendererComponentMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CSceneComponentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054EF8 (--0CSceneComponentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *DirectComposition::CSceneRendererComponentMarshaler::CSceneRendererComponentMarshaler()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  DirectComposition::CSceneComponentMarshaler::CSceneComponentMarshaler();
  result = v0;
  *v0 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
  return result;
}
