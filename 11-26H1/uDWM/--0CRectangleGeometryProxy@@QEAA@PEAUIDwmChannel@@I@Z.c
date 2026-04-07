/*
 * XREFs of ??0CRectangleGeometryProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BF28C
 * Callers:
 *     ??$Create@VCRectangleGeometryProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x180082CC0 (--$Create@VCRectangleGeometryProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCRectangleGeomet.c)
 * Callees:
 *     ??0CBaseGeometryProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x18009A370 (--0CBaseGeometryProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CRectangleGeometryProxy *__fastcall CRectangleGeometryProxy::CRectangleGeometryProxy(
        CRectangleGeometryProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CRectangleGeometryProxy *v3; // rcx
  CRectangleGeometryProxy *result; // rax

  CBaseGeometryProxy::CBaseGeometryProxy((__int64)this, (__int64)a2, a3, 13LL);
  result = v3;
  *(_QWORD *)v3 = &CTransform3dGroupProxy::`vftable';
  return result;
}
