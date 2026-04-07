/*
 * XREFs of ??0CAnimationTriggerProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x18009A348
 * Callers:
 *     ??$CreateFromSharedHandle@VCAnimationTriggerProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x180082AE4 (--$CreateFromSharedHandle@VCAnimationTriggerProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAP.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CAnimationTriggerProxy *__fastcall CAnimationTriggerProxy::CAnimationTriggerProxy(
        CAnimationTriggerProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CAnimationTriggerProxy *v3; // rcx
  CAnimationTriggerProxy *result; // rax

  CResourceProxy::CResourceProxy(this, a2, a3, 1LL);
  result = v3;
  *(_QWORD *)v3 = &CTransform3dGroupProxy::`vftable';
  return result;
}
