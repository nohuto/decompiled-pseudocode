/*
 * XREFs of ??0CVisualReferenceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055CC8
 * Callers:
 *     ??0CVisualReferenceControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x140055CA4 (--0CVisualReferenceControllerMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CVisualReferenceMarshaler::CVisualReferenceMarshaler(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, 161LL);
  result = v1;
  *v1 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
  return result;
}
