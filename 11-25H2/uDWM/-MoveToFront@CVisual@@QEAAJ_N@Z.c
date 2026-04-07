/*
 * XREFs of ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180015B04
 * Callers:
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18001579C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18002246C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x180028CA4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002A18C (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800304B4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800606A4 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z @ 0x1800AF0BC (-AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z.c)
 *     ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D57F8 (-CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D66EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D6BA0 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DE394 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180016330 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 */

__int64 __fastcall CVisual::MoveToFront(CVisual *this, char a2)
{
  __int64 v2; // r9
  unsigned int v3; // ebx
  struct CVisual *v4; // r8
  CContainerVisual *v5; // r9
  char v6; // al
  unsigned int v7; // ecx
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+3Ch] [rbp-1Ch]
  char v12; // [rsp+40h] [rbp-18h]
  char v13; // [rsp+41h] [rbp-17h]

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    *((_BYTE *)this + 36) = (16 * a2) | *((_BYTE *)this + 36) & 0xEF;
    VisualCollection::GetIterator(v2 + 144, &v10, this);
    v6 = v13;
    if ( v12 )
    {
      v7 = v11;
      if ( !v13 )
        v7 = v11 - 1;
    }
    else
    {
      v7 = *(_DWORD *)(v10 + 32) - 1;
    }
    if ( v7 == -1 )
      v6 = 1;
    if ( !v6 && *(struct CVisual **)(*(_QWORD *)(v10 + 8) + 8LL * v7) != v4 )
    {
      v8 = CContainerVisual::AddChild(v5, v4);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x15Fu, 0LL);
    }
  }
  return v3;
}
