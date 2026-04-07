/*
 * XREFs of ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x1800504DC
 * Callers:
 *     ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x180050420 (-GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAni.c)
 *     ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180050CAC (-StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAnimationResource@@IEAA@XZ @ 0x1800505A8 (--0CAnimationResource@@IEAA@XZ.c)
 *     ?GetTrustLevel@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEBA?AW4TrustLevel@Foundation@Windows@3@XZ @ 0x1800505F0 (-GetTrustLevel@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x180077970 (-Release@CAnimationResource@@UEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CAnimationResource::Create(struct CAnimationResource **a1)
{
  CAnimationResource *v2; // rax
  CAnimationResource *v3; // rax
  struct CAnimationResource *v4; // rbx
  int TrustLevel; // edi

  if ( !a1 )
  {
    TrustLevel = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x12u, 0LL);
    return (unsigned int)TrustLevel;
  }
  v2 = (CAnimationResource *)DefaultHeap::AllocClear(0x60uLL);
  if ( !v2 )
  {
    v4 = 0LL;
    goto LABEL_7;
  }
  v3 = CAnimationResource::CAnimationResource(v2);
  v4 = v3;
  if ( !v3 )
  {
LABEL_7:
    TrustLevel = -2147024882;
    goto LABEL_8;
  }
  TrustLevel = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::GetTrustLevel(v3);
  if ( TrustLevel >= 0 )
  {
    *a1 = v4;
    return 0;
  }
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, TrustLevel, 0x12u, 0LL);
  *a1 = 0LL;
  if ( v4 )
    CAnimationResource::Release(v4);
  return (unsigned int)TrustLevel;
}
