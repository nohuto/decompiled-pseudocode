/*
 * XREFs of ??0CVisualGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800DE490
 * Callers:
 *     ??$Create@VCVisualGroupProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCVisualGroupProxy@@@Z @ 0x1800A7A70 (--$Create@VCVisualGroupProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCVisualGroupProxy@@@Z.c)
 *     ??$CreateFromSharedHandle@VCVisualGroupProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVCVisualGroupProxy@@@Z @ 0x1800A7C88 (--$CreateFromSharedHandle@VCVisualGroupProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVCV.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CVisualGroupProxy *__fastcall CVisualGroupProxy::CVisualGroupProxy(CVisualGroupProxy *this, struct IDwmChannel *a2)
{
  CVisualGroupProxy *v2; // rcx
  CVisualGroupProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v2;
  *(_QWORD *)v2 = &CTransform3dGroupProxy::`vftable';
  return result;
}
