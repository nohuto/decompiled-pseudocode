/*
 * XREFs of ??0CSceneSurfaceMaterialInputMarshaler@DirectComposition@@QEAA@XZ @ 0x140054F44
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CSceneMaterialInputMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054F68 (--0CSceneMaterialInputMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::CSceneSurfaceMaterialInputMarshaler(
        DirectComposition::CSceneSurfaceMaterialInputMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CSceneMaterialInputMarshaler::CSceneMaterialInputMarshaler(this);
  result = v1;
  *v1 = &DirectComposition::CSceneSurfaceMaterialInputMarshaler::`vftable';
  return result;
}
