/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002888C
 * Callers:
 *     ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x180041750 (-TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winr.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800431C0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x1800836E0 (-EnsureResources@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180028B6C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(CTopLevelWindow3D *this, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // r8

  v2 = 0;
  if ( !*((_QWORD *)this + 30) )
  {
    v5 = CSecondaryWindowRepresentation::Create(
           (a2 << 7) + 32,
           ((unsigned __int64)this + 184) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
           *((_QWORD *)this + 29),
           0LL,
           100,
           (char *)this + 240);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x348u, 0LL);
    else
      CVisual::SetOpacity(this, *(double *)(*(_QWORD *)(*((_QWORD *)this + 29) + 440LL) + 112LL), v6);
  }
  return v2;
}
