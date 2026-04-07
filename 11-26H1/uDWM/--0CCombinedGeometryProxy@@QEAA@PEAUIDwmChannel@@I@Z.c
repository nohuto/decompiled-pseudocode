/*
 * XREFs of ??0CCombinedGeometryProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800A6F34
 * Callers:
 *     ??$Create@VCCombinedGeometryProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800833D0 (--$Create@VCCombinedGeometryProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCCombinedGeometry.c)
 * Callees:
 *     ??0CBaseGeometryProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x18009A370 (--0CBaseGeometryProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CCombinedGeometryProxy *__fastcall CCombinedGeometryProxy::CCombinedGeometryProxy(
        CCombinedGeometryProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CCombinedGeometryProxy *v3; // rcx
  CCombinedGeometryProxy *result; // rax

  CBaseGeometryProxy::CBaseGeometryProxy((__int64)this, (__int64)a2, a3, 3LL);
  result = v3;
  *(_QWORD *)v3 = &CTransform3dGroupProxy::`vftable';
  return result;
}
