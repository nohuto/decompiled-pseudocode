/*
 * XREFs of ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x1800505FC
 * Callers:
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x18004F94C (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4.c)
 *     ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180050CAC (-StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800506C0 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 *     ?BaseAddBinding@CAnimationProxy@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x1800507A0 (-BaseAddBinding@CAnimationProxy@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z.c)
 *     McTemplateU0qqqp_EtwEventWriteTransfer @ 0x180099FC4 (McTemplateU0qqqp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationResource::AddBinding(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  v6 = CAnimationResource::_EnsureResources((CAnimationResource *)a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x183u, 0LL);
  }
  else
  {
    v8 = CAnimationProxy::BaseAddBinding(*(_QWORD *)(a1 + 8), a2, a3);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x185u, 0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qqqp_EtwEventWriteTransfer(
          v10,
          v9,
          *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          *(_DWORD *)(a2 + 24),
          a3,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL));
      *(_QWORD *)(a1 + 72) = a2;
      *(_DWORD *)(a1 + 80) = a3;
    }
  }
  return v7;
}
