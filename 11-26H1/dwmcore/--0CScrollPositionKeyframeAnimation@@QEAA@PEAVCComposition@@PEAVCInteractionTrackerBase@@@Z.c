/*
 * XREFs of ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTrackerBase@@@Z @ 0x180289AC4
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x180270780 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSI.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker2@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x180272D50 (-CreateAndStartKeyframeAnimation@CInteractionTracker2@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOS.c)
 * Callees:
 *     ??0CScrollKeyframeAnimation@@IEAA@PEAVCComposition@@PEAVCInteractionTrackerBase@@@Z @ 0x18028BF74 (--0CScrollKeyframeAnimation@@IEAA@PEAVCComposition@@PEAVCInteractionTrackerBase@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CScrollPositionKeyframeAnimation *__fastcall CScrollPositionKeyframeAnimation::CScrollPositionKeyframeAnimation(
        CScrollPositionKeyframeAnimation *this,
        struct CComposition *a2,
        struct CInteractionTrackerBase *a3)
{
  float v5; // xmm0_4
  CScrollPositionKeyframeAnimation *result; // rax

  CScrollKeyframeAnimation::CScrollKeyframeAnimation(this, a2, a3);
  *(_QWORD *)this = &CScrollPositionKeyframeAnimation::`vftable';
  *((float *)this + 158) = (*(float (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)a3 + 560LL))(
                             a3,
                             0LL);
  v5 = (*(float (__fastcall **)(struct CInteractionTrackerBase *, __int64))(*(_QWORD *)a3 + 560LL))(a3, 1LL);
  result = this;
  *((float *)this + 159) = v5;
  *((_DWORD *)this + 160) = 0;
  return result;
}
