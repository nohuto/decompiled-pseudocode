/*
 * XREFs of ??0CVisualBitmapMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B5AC
 * Callers:
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054F20 (--0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CVisualBitmapMarshaler::CVisualBitmapMarshaler(
        DirectComposition::CVisualBitmapMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CSceneObjectMarshaler::CSceneObjectMarshaler((__int64)this, 157LL);
  result = v1;
  *v1 = &DirectComposition::CVisualBitmapMarshaler::`vftable';
  return result;
}
