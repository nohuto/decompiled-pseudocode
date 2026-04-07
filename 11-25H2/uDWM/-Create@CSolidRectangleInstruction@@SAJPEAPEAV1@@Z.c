/*
 * XREFs of ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180040ADC
 * Callers:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800407B4 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINT.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18006CE4C (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180082148 (-AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B735C (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800B9014 (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800C5600 (-_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?_UpdateInstructions@CSolidRectangleVisual@@IEAAJXZ @ 0x1800C5F24 (-_UpdateInstructions@CSolidRectangleVisual@@IEAAJXZ.c)
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D5A44 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E03BC (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?GetTrustLevel@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEBA?AW4TrustLevel@Foundation@Windows@3@XZ @ 0x1800040A0 (-GetTrustLevel@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSolidRectangleInstruction@@AEAA@XZ @ 0x180040BA4 (--0CSolidRectangleInstruction@@AEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CSolidRectangleInstruction::Create(struct CSolidRectangleInstruction **a1)
{
  CSolidRectangleInstruction *v2; // rax
  struct CSolidRectangleInstruction *v3; // rdi
  int TrustLevel; // eax
  unsigned int v5; // ebx
  int v7; // r9d

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x11u, 0LL);
    return v5;
  }
  v2 = (CSolidRectangleInstruction *)DefaultHeap::AllocClear(0x30uLL);
  if ( !v2 )
  {
    v3 = 0LL;
    goto LABEL_9;
  }
  v3 = CSolidRectangleInstruction::CSolidRectangleInstruction(v2);
  if ( !v3 )
  {
LABEL_9:
    v5 = -2147024882;
    v7 = -2147024882;
    goto LABEL_10;
  }
  TrustLevel = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::GetTrustLevel();
  v5 = TrustLevel;
  if ( TrustLevel >= 0 )
  {
    *a1 = v3;
    return 0;
  }
  v7 = TrustLevel;
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x11u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return v5;
}
