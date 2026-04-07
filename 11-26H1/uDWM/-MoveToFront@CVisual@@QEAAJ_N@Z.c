/*
 * XREFs of ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180013F60
 * Callers:
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180003280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180005D94 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180013DA4 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800261CC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002B6AC (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800373A0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x18007FDD4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z.c)
 *     ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z @ 0x1800AEA8C (-AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z.c)
 *     ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2AE8 (-CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2D38 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D38AC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D3D34 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?GetRootGlobalTimeTrackVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DB214 (-GetRootGlobalTimeTrackVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z @ 0x1800DFC1C (-BringDesktopToFront@CWindowList@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180016430 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
    *((_BYTE *)this + 36) &= ~0x10u;
    *((_BYTE *)this + 36) |= 16 * a2;
    VisualCollection::GetIterator(v2 + 136, &v10, this);
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
      v8 = CContainerVisual::AddChild(v5, v4, (bool)v4);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x157u, 0LL);
    }
  }
  return v3;
}
