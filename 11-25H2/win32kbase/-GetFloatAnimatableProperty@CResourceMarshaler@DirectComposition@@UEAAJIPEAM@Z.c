/*
 * XREFs of ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140230340
 * Callers:
 *     ?GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1401A25C0 (-GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CVisualMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1402303A0 (-GetFloatAnimatableProperty@CVisualMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CHueRotationEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1402312C0 (-GetFloatAnimatableProperty@CHueRotationEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1402318D0 (-GetFloatAnimatableProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140231C20 (-GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140232A20 (-GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140233130 (-GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140234100 (-GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1402344A0 (-GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1402345F0 (-GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140234FE0 (-GetFloatAnimatableProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140235490 (-GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140235FF0 (-GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140236980 (-GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1402384A0 (-GetFloatAnimatableProperty@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z @ 0x140105360 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CResourceMarshaler *this,
        int a2,
        float *a3)
{
  const struct DirectComposition::ResPropInfo *TargetProperty; // rax
  __int64 v4; // r9
  _DWORD *v5; // r10
  int v6; // ecx
  __int64 result; // rax

  TargetProperty = DirectComposition::CResourceMarshaler::GetTargetProperty(this, a2);
  if ( !TargetProperty || *((_DWORD *)TargetProperty + 2) != 18 )
    return 3221225485LL;
  v6 = *(_DWORD *)(*((unsigned int *)TargetProperty + 3) + v4);
  result = 0LL;
  *v5 = v6;
  return result;
}
