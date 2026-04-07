/*
 * XREFs of ??0CTranslateTransformProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800D0788
 * Callers:
 *     ??$Create@VCTranslateTransformProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCTranslateTransformProxy@@@Z @ 0x1800A7968 (--$Create@VCTranslateTransformProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCTranslateTrans.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CTranslateTransformProxy *__fastcall CTranslateTransformProxy::CTranslateTransformProxy(
        CTranslateTransformProxy *this,
        struct IDwmChannel *a2)
{
  CTranslateTransformProxy *v2; // rcx
  CTranslateTransformProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v2;
  *(_QWORD *)v2 = &CTransform3dGroupProxy::`vftable';
  return result;
}
