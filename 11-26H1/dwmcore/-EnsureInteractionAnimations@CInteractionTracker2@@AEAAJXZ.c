/*
 * XREFs of ?EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ @ 0x18013E7AC
 * Callers:
 *     ?TransitionToInContact@CInteractionTracker2@@AEAAXXZ @ 0x180277604 (-TransitionToInContact@CInteractionTracker2@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
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

__int64 __fastcall CInteractionTracker2::EnsureInteractionAnimations(struct CComposition **this)
{
  CInteractionTrackerScaleAnimation **v1; // rbx
  _QWORD *v3; // rbx
  _QWORD *v4; // rbx
  unsigned int v5; // ebx
  CInteractionTrackerScaleAnimation *v6; // rax
  int v7; // eax
  CInteractionTrackerPositionAnimation *v8; // rax
  int v9; // r9d
  CInteractionTrackerPositionAnimation *v11; // rax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v1 = this + 81;
  if ( !this[81] )
  {
    v6 = (CInteractionTrackerScaleAnimation *)CInteractionTrackerScaleAnimation::operator new((unsigned __int64)this);
    if ( v6 )
      v6 = CInteractionTrackerScaleAnimation::CInteractionTrackerScaleAnimation(v6, this[3]);
    Microsoft::WRL::ComPtr<CInteractionTrackerScaleAnimation>::operator=(v1, v6);
    if ( !*v1 )
    {
      v12 = 3037;
      goto LABEL_22;
    }
    v7 = CInteractionTrackerScaleAnimation::Initialize(*v1, (struct CInteractionTrackerBase *)this);
    v5 = v7;
    if ( v7 < 0 )
    {
      v12 = 3039;
LABEL_15:
      v9 = v7;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v12, 0LL);
      return v5;
    }
  }
  v3 = this + 82;
  if ( !this[82] )
  {
    v8 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new((unsigned __int64)this);
    if ( v8 )
      v8 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v8, this[3]);
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)this + 82, (__int64)v8);
    if ( !*v3 )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xBE5u, 0LL);
      return v5;
    }
    v7 = CInteractionTrackerPositionAnimation::Initialize(*v3, this, 0LL);
    v5 = v7;
    if ( v7 < 0 )
    {
      v12 = 3047;
      goto LABEL_15;
    }
  }
  v4 = this + 83;
  if ( !this[83] )
  {
    v11 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new((unsigned __int64)this);
    if ( v11 )
      v11 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v11, this[3]);
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)this + 83, (__int64)v11);
    if ( *v4 )
    {
      v7 = CInteractionTrackerPositionAnimation::Initialize(*v4, this, 1LL);
      v5 = v7;
      if ( v7 < 0 )
      {
        v12 = 3055;
        goto LABEL_15;
      }
      return 0;
    }
    v12 = 3053;
LABEL_22:
    v9 = -2147024882;
    v5 = -2147024882;
    goto LABEL_16;
  }
  return 0;
}
