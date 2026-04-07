/*
 * XREFs of ??0CTransform3dGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800CDFFC
 * Callers:
 *     ??$Create@VCTransform3dGroupProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCTransform3dGroupProxy@@@Z @ 0x1800A7758 (--$Create@VCTransform3dGroupProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCTransform3dGroup.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CTransform3dGroupProxy *__fastcall CTransform3dGroupProxy::CTransform3dGroupProxy(
        CTransform3dGroupProxy *this,
        struct IDwmChannel *a2)
{
  CTransform3dGroupProxy *v2; // rcx
  CTransform3dGroupProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v2;
  *(_QWORD *)v2 = &CTransform3dGroupProxy::`vftable';
  return result;
}
