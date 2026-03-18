/*
 * XREFs of ??0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z @ 0x180014244
 * Callers:
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x180013CC0 (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CTransformedGeometryHelper *__fastcall CTransformedGeometryHelper::CTransformedGeometryHelper(
        CTransformedGeometryHelper *this,
        const struct CMILMatrix *a2)
{
  __int64 v2; // rdx
  CTransformedGeometryHelper *v3; // rcx

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(this);
  *((_QWORD *)v3 + 2) = v2;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *(_QWORD *)v3 = &CTransformedGeometryHelper::`vftable';
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  *((_QWORD *)v3 + 7) = 0LL;
  return v3;
}
