/*
 * XREFs of ??0CRgnGeometryProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BF35C
 * Callers:
 *     ??$Create@VCRgnGeometryProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x1800820A4 (--$Create@VCRgnGeometryProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 * Callees:
 *     ??0CBaseGeometryProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x18009A370 (--0CBaseGeometryProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CRgnGeometryProxy *__fastcall CRgnGeometryProxy::CRgnGeometryProxy(
        CRgnGeometryProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CRgnGeometryProxy *v3; // rcx
  CRgnGeometryProxy *result; // rax

  CBaseGeometryProxy::CBaseGeometryProxy((__int64)this, (__int64)a2, a3, 16LL);
  result = v3;
  *(_QWORD *)v3 = &CTransform3dGroupProxy::`vftable';
  return result;
}
