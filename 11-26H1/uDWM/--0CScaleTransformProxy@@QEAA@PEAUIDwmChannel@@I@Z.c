/*
 * XREFs of ??0CScaleTransformProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BF3E0
 * Callers:
 *     ??$Create@VCScaleTransformProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCScaleTransformProxy@@@Z @ 0x1800829D0 (--$Create@VCScaleTransformProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCScaleTransformProx.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CScaleTransformProxy *__fastcall CScaleTransformProxy::CScaleTransformProxy(
        CScaleTransformProxy *this,
        struct IDwmChannel *a2)
{
  CScaleTransformProxy *v2; // rcx
  CScaleTransformProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v2;
  *(_QWORD *)v2 = &CTransform3dGroupProxy::`vftable';
  return result;
}
