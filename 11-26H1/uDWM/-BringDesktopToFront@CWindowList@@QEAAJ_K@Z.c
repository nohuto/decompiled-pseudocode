/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z @ 0x1800DFC1C
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180074130 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18007AE6C (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800814E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180013990 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180013DA4 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180013F60 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180016430 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001B184 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180035ECC (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18004EE00 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?ForceRender@CCompositor@@QEAAJXZ @ 0x18005A98C (-ForceRender@CCompositor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CContainerVisual ***this, unsigned __int64 a2)
{
  CVisual *RenderTargetRootVisualForDesktop; // rsi
  CVisual *v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-1Ch]

  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop((CWindowList *)this);
  VisualCollection::GetIterator((__int64)(this[10] + 17), (__int64)&v11);
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v11) )
  {
    v5 = *(CVisual **)(*(_QWORD *)(v11 + 8) + 8LL * v12);
    if ( v5 != RenderTargetRootVisualForDesktop )
      CVisual::SetOpacity(v5, 0.0, v6);
  }
  CVisual::SetOpacity(RenderTargetRootVisualForDesktop, 1.0, v6);
  v7 = CVisual::MoveToFront(RenderTargetRootVisualForDesktop, 0);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x744u, 0LL);
  }
  else
  {
    v9 = CWindowList::MoveTransitionAndTouchVisualToFront((CWindowList *)this);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x745u, 0LL);
    }
    else
    {
      CWindowList::GetOverlayRootVisualForDesktop((CWindowList *)this, a2, 1);
      CVisual::RemoveSelfFromParent(this[11]);
      CContainerVisual::AddChild(RenderTargetRootVisualForDesktop, (struct CVisual *)this[11]);
      (*((void (__fastcall **)(CContainerVisual **))*this[10] + 6))(this[10]);
      CCompositor::ForceRender(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    }
  }
  return v8;
}
