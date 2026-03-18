/*
 * XREFs of ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18013CFC0
 * Callers:
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18013CF10 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     ??2CInteractionTrackerScaleAnimation@@SAPEAX_K@Z @ 0x18013E968 (--2CInteractionTrackerScaleAnimation@@SAPEAX_K@Z.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18020C068 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CInteractionTrackerScaleAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18020C0B4 (--0CInteractionTrackerScaleAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTrackerBase@@@Z @ 0x1802191DC (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTrackerBase@@@Z.c)
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z @ 0x180219680 (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis.c)
 *     ??4?$ComPtr@VCInteractionTrackerScaleAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerScaleAnimation@@@Z @ 0x18021D0EC (--4-$ComPtr@VCInteractionTrackerScaleAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrac.c)
 *     ??2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z @ 0x18021ED44 (--2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CInteractionTracker::EnsureInteractionAnimations(struct CComposition **this)
{
  CInteractionTrackerScaleAnimation **v1; // rbx
  CInteractionTrackerScaleAnimation *v3; // rax
  int v4; // r9d
  unsigned int v5; // ebx
  int v6; // eax
  _QWORD *v7; // rbx
  CInteractionTrackerPositionAnimation *v8; // rax
  _QWORD *v9; // rbx
  CInteractionTrackerPositionAnimation *v10; // rax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v1 = this + 52;
  if ( !this[52] )
  {
    v3 = (CInteractionTrackerScaleAnimation *)CInteractionTrackerScaleAnimation::operator new((unsigned __int64)this);
    if ( v3 )
      v3 = CInteractionTrackerScaleAnimation::CInteractionTrackerScaleAnimation(v3, this[3]);
    Microsoft::WRL::ComPtr<CInteractionTrackerScaleAnimation>::operator=(v1, v3);
    if ( !*v1 )
    {
      v12 = 3110;
LABEL_6:
      v4 = -2147024882;
      v5 = -2147024882;
LABEL_7:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v12, 0LL);
      return v5;
    }
    v6 = CInteractionTrackerScaleAnimation::Initialize(*v1, (struct CInteractionTrackerBase *)this);
    v5 = v6;
    if ( v6 < 0 )
    {
      v12 = 3112;
LABEL_11:
      v4 = v6;
      goto LABEL_7;
    }
  }
  v7 = this + 53;
  if ( !this[53] )
  {
    v8 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new((unsigned __int64)this);
    if ( v8 )
      v8 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v8, this[3]);
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)this + 53, (__int64)v8);
    if ( !*v7 )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xC2Eu, 0LL);
      return v5;
    }
    v6 = CInteractionTrackerPositionAnimation::Initialize(*v7, this, 0LL);
    v5 = v6;
    if ( v6 < 0 )
    {
      v12 = 3120;
      goto LABEL_11;
    }
  }
  v9 = this + 54;
  if ( !this[54] )
  {
    v10 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new((unsigned __int64)this);
    if ( v10 )
      v10 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v10, this[3]);
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)this + 54, (__int64)v10);
    if ( !*v9 )
    {
      v12 = 3126;
      goto LABEL_6;
    }
    v6 = CInteractionTrackerPositionAnimation::Initialize(*v9, this, 1LL);
    v5 = v6;
    if ( v6 < 0 )
    {
      v12 = 3128;
      goto LABEL_11;
    }
  }
  return 0;
}
