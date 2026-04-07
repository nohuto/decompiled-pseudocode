/*
 * XREFs of ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x18008A394
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180030158 (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180038D84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?CreateCursorVisual@CWindowList@@QEAAJXZ @ 0x1800E00A8 (-CreateCursorVisual@CWindowList@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::CreateRootVisual(struct CContainerVisual **this)
{
  CVisual **v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  int CursorVisual; // eax
  int v6; // eax

  v1 = this + 10;
  v3 = CContainerVisual::Create(this + 10);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x814u, 0LL);
  }
  else
  {
    CVisual::SetSize(*v1, 0x7FFFFFFF, 0x7FFFFFFF);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl)
      && (CursorVisual = CWindowList::CreateCursorVisual((CWindowList *)this), v4 = CursorVisual, CursorVisual < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CursorVisual, 0x81Cu, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)*v1 + 48LL))(*v1);
      v6 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x822u, 0LL);
    }
  }
  return v4;
}
