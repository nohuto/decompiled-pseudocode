/*
 * XREFs of ??0CEffectGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800B4C58
 * Callers:
 *     ??$Create@VCEffectGroupProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCEffectGroupProxy@@@Z @ 0x180081F90 (--$Create@VCEffectGroupProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCEffectGroupProxy@@@Z.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CEffectGroupProxy *__fastcall CEffectGroupProxy::CEffectGroupProxy(
        CEffectGroupProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CEffectGroupProxy *v3; // rcx
  CEffectGroupProxy *result; // rax

  CResourceProxy::CResourceProxy(this, a2, a3, 5LL);
  result = v3;
  *(_QWORD *)v3 = &CTransform3dGroupProxy::`vftable';
  return result;
}
