/*
 * XREFs of ??0CScrollKeyframeAnimation@@IEAA@PEAVCComposition@@PEAVCInteractionTrackerBase@@@Z @ 0x18028BF74
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x180270780 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSI.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker2@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x180272D50 (-CreateAndStartKeyframeAnimation@CInteractionTracker2@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOS.c)
 *     ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTrackerBase@@@Z @ 0x180289AC4 (--0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTrackerBase@@@Z.c)
 * Callees:
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18019C058 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 */

CScrollKeyframeAnimation *__fastcall CScrollKeyframeAnimation::CScrollKeyframeAnimation(
        CScrollKeyframeAnimation *this,
        struct CComposition *a2,
        struct CInteractionTrackerBase *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  CScrollKeyframeAnimation *result; // rax

  CKeyframeAnimation::CKeyframeAnimation(this, a2);
  *(_QWORD *)(v3 + 472) = v4;
  result = (CScrollKeyframeAnimation *)v3;
  *(_DWORD *)(v3 + 544) = 0;
  *(_DWORD *)(v3 + 616) = 0;
  *(_DWORD *)(v3 + 212) = 68;
  return result;
}
