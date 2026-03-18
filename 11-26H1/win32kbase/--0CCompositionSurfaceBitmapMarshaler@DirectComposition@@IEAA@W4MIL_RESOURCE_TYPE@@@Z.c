/*
 * XREFs of ??0CCompositionSurfaceBitmapMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14005601C
 * Callers:
 *     ??0CCompositionSurfaceBitmapMarshaler@DirectComposition@@QEAA@XZ @ 0x140055FF8 (--0CCompositionSurfaceBitmapMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054F20 (--0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::CCompositionSurfaceBitmapMarshaler(
        __int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CSceneObjectMarshaler::CSceneObjectMarshaler(a1, 31LL);
  result = v1;
  *v1 = &DirectComposition::CCompositionSurfaceBitmapMarshaler::`vftable';
  return result;
}
