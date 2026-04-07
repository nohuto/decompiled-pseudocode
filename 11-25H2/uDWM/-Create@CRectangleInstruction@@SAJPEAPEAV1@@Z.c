/*
 * XREFs of ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x18004D118
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x18004BA84 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180053B00 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18006A510 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetTrustLevel@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEBA?AW4TrustLevel@Foundation@Windows@3@XZ @ 0x1800040A0 (-GetTrustLevel@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectangleInstruction@@AEAA@XZ @ 0x18004D1E8 (--0CRectangleInstruction@@AEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CRectangleInstruction::Create(struct CRectangleInstruction **a1)
{
  CRectangleInstruction *v2; // rax
  struct CRectangleInstruction *v3; // rdi
  int TrustLevel; // eax
  unsigned int v5; // ebx
  int v7; // r9d

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x11u, 0LL);
    return v5;
  }
  v2 = (CRectangleInstruction *)DefaultHeap::AllocClear(0x30uLL);
  if ( !v2 )
  {
    v3 = 0LL;
    goto LABEL_7;
  }
  v3 = CRectangleInstruction::CRectangleInstruction(v2);
  if ( !v3 )
  {
LABEL_7:
    v5 = -2147024882;
    v7 = -2147024882;
    goto LABEL_8;
  }
  TrustLevel = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::GetTrustLevel();
  v5 = TrustLevel;
  if ( TrustLevel >= 0 )
  {
    *a1 = v3;
    return 0;
  }
  v7 = TrustLevel;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x11u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return v5;
}
