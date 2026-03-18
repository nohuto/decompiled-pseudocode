/*
 * XREFs of ??0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056268
 * Callers:
 *     ??0CLineGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x140055208 (--0CLineGeometryMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CEllipseGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x140055D40 (--0CEllipseGeometryMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CProxyGeometryClipMarshaler@DirectComposition@@QEAA@XZ @ 0x140055FA0 (--0CProxyGeometryClipMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CPathGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x14005606C (--0CPathGeometryMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRectangleClipMarshaler@DirectComposition@@QEAA@XZ @ 0x140056174 (--0CRectangleClipMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x1400561E8 (--0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562C8 (--0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CGeometryMarshaler::CGeometryMarshaler(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CPropertyChangeResourceMarshaler::CPropertyChangeResourceMarshaler(a1, a2);
  result = v2;
  *v2 = &DirectComposition::CGeometryMarshaler::`vftable';
  return result;
}
