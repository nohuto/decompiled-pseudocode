/*
 * XREFs of ??0CVisualTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800DE5A4
 * Callers:
 *     ??$CreateFromSharedHandle@VCVisualTargetProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18008426C (--$CreateFromSharedHandle@VCVisualTargetProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVC.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CVisualTargetProxy *__fastcall CVisualTargetProxy::CVisualTargetProxy(CVisualTargetProxy *this, struct IDwmChannel *a2)
{
  CVisualTargetProxy *v2; // rcx
  CVisualTargetProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v2;
  *(_QWORD *)v2 = &CTransform3dGroupProxy::`vftable';
  return result;
}
