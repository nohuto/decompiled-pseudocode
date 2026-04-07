/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x180028CA4
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800288E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180028B10 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180076ED0 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18001579C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180015B04 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180016330 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001BF3C (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?ForceRender@CCompositor@@QEAAJXZ @ 0x180070AE4 (-ForceRender@CCompositor@@QEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800ADC34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CWindowList *this, struct CContainerVisual *a2)
{
  __int64 v4; // r15
  char v5; // si
  char v6; // bp
  unsigned int v7; // ebx
  struct CContainerVisual *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // eax
  int v13; // eax
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-2Ch]
  char v16; // [rsp+40h] [rbp-28h]
  char v17; // [rsp+41h] [rbp-27h]

  VisualCollection::GetIterator(*((_QWORD *)this + 10) + 144LL, (__int64)&v14);
  v4 = v14;
  v5 = v17;
  v6 = v16;
  v7 = v15;
  while ( 1 )
  {
    if ( v6 )
    {
      if ( !v5 )
        ++v7;
    }
    else
    {
      v6 = 1;
      v7 = 0;
    }
    if ( v7 >= *(_DWORD *)(v4 + 32) )
      v5 = 1;
    if ( v5 )
      break;
    v8 = *(struct CContainerVisual **)(*(_QWORD *)(v4 + 8) + 8LL * v7);
    if ( v8 != a2 )
      (*(void (__fastcall **)(struct CContainerVisual *))(*(_QWORD *)v8 + 88LL))(v8);
  }
  (*(void (__fastcall **)(struct CContainerVisual *))(*(_QWORD *)a2 + 88LL))(a2);
  v9 = CVisual::MoveToFront(a2, 0);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = CWindowList::MoveTransitionAndTouchVisualToFront(this);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x61Fu, 0LL);
    }
    else
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
      {
        CVisual::RemoveSelfFromParent(*((CContainerVisual ***)this + 11));
        CContainerVisual::AddChild(a2, *((struct CVisual **)this + 11));
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10));
      v10 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x625u, 0LL);
      else
        CCompositor::ForceRender(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x61Eu, 0LL);
  }
  return v10;
}
