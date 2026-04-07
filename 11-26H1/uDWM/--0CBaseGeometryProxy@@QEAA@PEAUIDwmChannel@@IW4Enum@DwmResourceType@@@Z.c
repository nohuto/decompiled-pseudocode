/*
 * XREFs of ??0CBaseGeometryProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x18009A370
 * Callers:
 *     ??$CreateFromSharedHandle@VCBaseGeometryProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x1800844A0 (--$CreateFromSharedHandle@VCBaseGeometryProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVC.c)
 *     ??0CCombinedGeometryProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800A6F34 (--0CCombinedGeometryProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CRectangleGeometryProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BF28C (--0CRectangleGeometryProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CRgnGeometryProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BF35C (--0CRgnGeometryProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

_QWORD *__fastcall CBaseGeometryProxy::CBaseGeometryProxy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rcx
  _QWORD *result; // rax

  CResourceProxy::CResourceProxy(a1, a2, a3, a4);
  result = v4;
  *v4 = &CTransform3dGroupProxy::`vftable';
  return result;
}
