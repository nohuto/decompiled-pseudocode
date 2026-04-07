/*
 * XREFs of ??0CMatrixTransform3dProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BB9D4
 * Callers:
 *     ??$Create@VCMatrixTransform3dProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCMatrixTransform3dProxy@@@Z @ 0x1800A7458 (--$Create@VCMatrixTransform3dProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCMatrixTransform.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CMatrixTransform3dProxy *__fastcall CMatrixTransform3dProxy::CMatrixTransform3dProxy(
        CMatrixTransform3dProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CMatrixTransform3dProxy *v3; // rcx
  CMatrixTransform3dProxy *result; // rax

  CResourceProxy::CResourceProxy(this, a2, a3, 11LL);
  result = v3;
  *(_QWORD *)v3 = &CTransform3dGroupProxy::`vftable';
  return result;
}
