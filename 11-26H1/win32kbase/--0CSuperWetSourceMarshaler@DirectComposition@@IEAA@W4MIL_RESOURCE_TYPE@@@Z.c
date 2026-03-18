/*
 * XREFs of ??0CSuperWetSourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14023B4E0
 * Callers:
 *     ??0CDelegatedInkCanvasMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B374 (--0CDelegatedInkCanvasMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSynchronousSuperWetInkMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B504 (--0CSynchronousSuperWetInkMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054F20 (--0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSuperWetSourceMarshaler::CSuperWetSourceMarshaler(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CSceneObjectMarshaler::CSceneObjectMarshaler(a1, a2);
  result = v2;
  *v2 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
  return result;
}
