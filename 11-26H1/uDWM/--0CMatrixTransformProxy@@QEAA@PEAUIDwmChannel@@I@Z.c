/*
 * XREFs of ??0CMatrixTransformProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BBA20
 * Callers:
 *     ??$Create@VCMatrixTransformProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCMatrixTransformProxy@@@Z @ 0x18008438C (--$Create@VCMatrixTransformProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCMatrixTransformPr.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CMatrixTransformProxy *__fastcall CMatrixTransformProxy::CMatrixTransformProxy(
        CMatrixTransformProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CMatrixTransformProxy *v3; // rcx
  CMatrixTransformProxy *result; // rax

  CResourceProxy::CResourceProxy(this, a2, a3, 10LL);
  result = v3;
  *(_QWORD *)v3 = &CTransform3dGroupProxy::`vftable';
  return result;
}
