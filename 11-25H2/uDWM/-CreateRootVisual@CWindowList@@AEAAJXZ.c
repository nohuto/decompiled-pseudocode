/*
 * XREFs of ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x18009734C
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x18006286C (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18001F784 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x1800295D0 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800ADC34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?CreateCursorVisual@CWindowList@@QEAAJXZ @ 0x1800E39A4 (-CreateCursorVisual@CWindowList@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::CreateRootVisual(struct CContainerVisual **this)
{
  CVisual **v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  int CursorVisual; // eax
  int v6; // eax
  int v7; // eax

  v1 = this + 10;
  v3 = CContainerVisual::Create(this + 10);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x6ECu, 0LL);
  }
  else
  {
    CVisual::SetSize(*v1, 0x7FFFFFFF, 0x7FFFFFFF);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl)
      && (CursorVisual = CWindowList::CreateCursorVisual((CWindowList *)this), v4 = CursorVisual, CursorVisual < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CursorVisual, 0x6F4u, 0LL);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)*v1 + 48LL))(*v1);
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x6F8u, 0LL);
      }
      else
      {
        v7 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
        v4 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x6FAu, 0LL);
      }
    }
  }
  return v4;
}
