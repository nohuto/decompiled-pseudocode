/*
 * XREFs of ??0CRectangleClipMarshaler@DirectComposition@@QEAA@XZ @ 0x140056174
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056268 (--0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CRectangleClipMarshaler::CRectangleClipMarshaler(
        DirectComposition::CRectangleClipMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CGeometryMarshaler::CGeometryMarshaler(this, 103LL);
  result = v1;
  *v1 = &DirectComposition::CRectangleClipMarshaler::`vftable';
  return result;
}
