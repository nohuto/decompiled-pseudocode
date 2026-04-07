/*
 * XREFs of ??0CRotateTransformProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BF384
 * Callers:
 *     ??$Create@VCRotateTransformProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCRotateTransformProxy@@@Z @ 0x1800A7650 (--$Create@VCRotateTransformProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCRotateTransformPr.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CRotateTransformProxy *__fastcall CRotateTransformProxy::CRotateTransformProxy(
        CRotateTransformProxy *this,
        struct IDwmChannel *a2)
{
  CRotateTransformProxy *v2; // rcx
  CRotateTransformProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v2;
  *(_QWORD *)v2 = &CTransform3dGroupProxy::`vftable';
  return result;
}
