/*
 * XREFs of ??0CTransformGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800CE084
 * Callers:
 *     ??$Create@VCTransformGroupProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCTransformGroupProxy@@@Z @ 0x1800A7860 (--$Create@VCTransformGroupProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCTransformGroupProx.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CTransformGroupProxy *__fastcall CTransformGroupProxy::CTransformGroupProxy(
        CTransformGroupProxy *this,
        struct IDwmChannel *a2)
{
  CTransformGroupProxy *v2; // rcx
  CTransformGroupProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v2;
  *(_QWORD *)v2 = &CTransform3dGroupProxy::`vftable';
  return result;
}
