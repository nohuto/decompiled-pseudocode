/*
 * XREFs of ??0CSceneMeshRendererComponentMarshaler@DirectComposition@@QEAA@XZ @ 0x140054EB0
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CSceneRendererComponentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054ED4 (--0CSceneRendererComponentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::CSceneMeshRendererComponentMarshaler(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CSceneRendererComponentMarshaler::CSceneRendererComponentMarshaler(this);
  result = v1;
  *v1 = &DirectComposition::CSceneMeshRendererComponentMarshaler::`vftable';
  return result;
}
