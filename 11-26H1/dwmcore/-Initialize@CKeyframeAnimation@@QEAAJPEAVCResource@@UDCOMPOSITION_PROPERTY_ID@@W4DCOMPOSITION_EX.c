/*
 * XREFs of ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW45KeyframeAnimationDelayBehavior@@MW45KeyframeAnimationDirection@@MW45KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1D08
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180260650 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x180270780 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSI.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker2@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x180272D50 (-CreateAndStartKeyframeAnimation@CInteractionTracker2@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOS.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18010DE34 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITIO.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18010E25C (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x18010EDF4 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?reset@?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEAVKeyframeSequence@@@Z @ 0x18010F01C (-reset@-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEA.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z @ 0x18010F11C (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18019275C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::Initialize(
        unsigned __int64 a1,
        volatile signed __int64 *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        float a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  int updated; // edi
  __int64 FrameTargetTime; // rax
  unsigned int v18; // eax

  updated = CBaseExpression::SetTarget(a1, 0, a2, a3, a4, 0, 0, 0LL);
  if ( updated < 0 )
  {
    v18 = 76;
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 420) = 2;
  updated = CKeyframeAnimation::SetIterationInfo(a1, a10, 0, COERCE_DOUBLE((unsigned __int64)a12), 0);
  if ( updated < 0 )
  {
    v18 = 84;
    goto LABEL_11;
  }
  updated = CKeyframeAnimation::SetKeyFrameData(a1, 0, 0, a15);
  if ( updated < 0 )
  {
    v18 = 89;
    goto LABEL_11;
  }
  updated = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
  if ( updated < 0 )
  {
    v18 = 91;
    goto LABEL_11;
  }
  FrameTargetTime = CComposition::GetFrameTargetTime(*(CComposition **)(a1 + 24));
  updated = CKeyframeAnimation::UpdatePlaybackState(a1, 1u, 1, FrameTargetTime);
  if ( updated < 0 )
  {
    v18 = 96;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v18, 0LL);
    std::unique_ptr<KeyframeSequence>::reset((KeyframeSequence **)(a1 + 304), 0LL);
  }
  return (unsigned int)updated;
}
