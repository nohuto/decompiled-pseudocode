/*
 * XREFs of ??0CProxyGeometryClipMarshaler@DirectComposition@@QEAA@XZ @ 0x140055FA0
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056268 (--0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CProxyGeometryClipMarshaler::CProxyGeometryClipMarshaler(
        DirectComposition::CProxyGeometryClipMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CGeometryMarshaler::CGeometryMarshaler(this, 101LL);
  result = v1;
  *v1 = &DirectComposition::CProxyGeometryClipMarshaler::`vftable';
  return result;
}
