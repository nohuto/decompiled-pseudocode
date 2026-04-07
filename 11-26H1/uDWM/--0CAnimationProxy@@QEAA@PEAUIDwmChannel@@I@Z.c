/*
 * XREFs of ??0CAnimationProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x180099CCC
 * Callers:
 *     ??$Create@VCAnimationProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCAnimationProxy@@@Z @ 0x180084114 (--$Create@VCAnimationProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCAnimationProxy@@@Z.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CAnimationProxy *__fastcall CAnimationProxy::CAnimationProxy(CAnimationProxy *this, struct IDwmChannel *a2, __int64 a3)
{
  CAnimationProxy *v3; // rcx
  CAnimationProxy *result; // rax

  CResourceProxy::CResourceProxy(this, a2, a3, 0LL);
  result = v3;
  *(_QWORD *)v3 = &CTransform3dGroupProxy::`vftable';
  return result;
}
