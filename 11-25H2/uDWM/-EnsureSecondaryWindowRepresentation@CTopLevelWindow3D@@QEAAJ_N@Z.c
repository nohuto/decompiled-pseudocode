/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18004B59C
 * Callers:
 *     ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x18002B410 (-TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winr.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180049720 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18004B4E8 (-EnsureResources@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18001E45C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(CTopLevelWindow3D *this, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int v5; // eax
  void *v6; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !*((_QWORD *)this + 37) )
  {
    LODWORD(v6) = 100;
    v5 = CSecondaryWindowRepresentation::Create(
           (a2 << 7) + 32,
           ((unsigned __int64)this + 240) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
           *((_QWORD *)this + 36),
           0,
           v6,
           (CBaseObject **)this + 37);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x34Cu, 0LL);
    else
      CVisual::SetOpacity(this, *(double *)(*(_QWORD *)(*((_QWORD *)this + 36) + 440LL) + 120LL));
  }
  return v2;
}
