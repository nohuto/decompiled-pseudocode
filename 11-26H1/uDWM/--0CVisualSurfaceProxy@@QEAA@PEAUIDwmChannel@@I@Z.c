/*
 * XREFs of ??0CVisualSurfaceProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800DE57C
 * Callers:
 *     ??$CreateFromSharedHandle@VCVisualSurfaceProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x1800A7D98 (--$CreateFromSharedHandle@VCVisualSurfaceProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAV.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CVisualSurfaceProxy *__fastcall CVisualSurfaceProxy::CVisualSurfaceProxy(
        CVisualSurfaceProxy *this,
        struct IDwmChannel *a2)
{
  CVisualSurfaceProxy *v2; // rcx
  CVisualSurfaceProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v2;
  *(_QWORD *)v2 = &CTransform3dGroupProxy::`vftable';
  return result;
}
