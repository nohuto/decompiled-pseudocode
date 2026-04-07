/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x18007FDD4
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180074130 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18007AE6C (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800814E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180013DA4 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180013F60 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180016430 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18004EE00 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?ForceRender@CCompositor@@QEAAJXZ @ 0x18005A98C (-ForceRender@CCompositor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CWindowList *this, struct CContainerVisual *a2)
{
  CVisual *v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+3Ch] [rbp-1Ch]

  VisualCollection::GetIterator(*((_QWORD *)this + 10) + 136LL, (__int64)&v10);
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v10) )
  {
    v4 = *(CVisual **)(*(_QWORD *)(v10 + 8) + 8LL * v11);
    if ( v4 != a2 )
      CVisual::SetOpacity(v4, 0.0, v5);
  }
  CVisual::SetOpacity(a2, 1.0, v5);
  v6 = CVisual::MoveToFront(a2, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x722u, 0LL);
  }
  else
  {
    v8 = CWindowList::MoveTransitionAndTouchVisualToFront(this);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x723u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10));
      CCompositor::ForceRender(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    }
  }
  return v7;
}
