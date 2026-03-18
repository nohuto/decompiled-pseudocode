/*
 * XREFs of ??0CEllipseGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x140055D40
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056268 (--0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CEllipseGeometryMarshaler::CEllipseGeometryMarshaler(
        DirectComposition::CEllipseGeometryMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CGeometryMarshaler::CGeometryMarshaler(this, 49LL);
  result = v1;
  *v1 = &DirectComposition::CEllipseGeometryMarshaler::`vftable';
  return result;
}
