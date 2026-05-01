/*
 * XREFs of ?IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1804840A0
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804838F0 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x180170FA4 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?IsInputAppEnabled@KeyboardHosting@@YA_NXZ @ 0x1804813A0 (-IsInputAppEnabled@KeyboardHosting@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableTouchKeyboardFix@@@details@wil@@QEAA_NXZ @ 0x180485A3C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableTouchKeyboardFix@@@details.c)
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewTryShowAllowed(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  KeyboardHosting *v2; // rcx
  int v3; // eax
  int v5; // ecx

  if ( !*((_BYTE *)this + 925)
    || *((_BYTE *)this + 889)
    || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableTouchKeyboardFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DisableTouchKeyboardFix>::GetImpl'::`2'::impl)
    && !KeyboardHosting::IsInputAppEnabled(v2)
    || KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal((RTL_SRWLOCK *)this, *((_DWORD *)this + 230)) )
  {
    return 0;
  }
  v3 = *((_DWORD *)this + 223);
  if ( v3 != 2 )
  {
    if ( v3 == 16 )
      return *((_BYTE *)this + 872);
    return 0;
  }
  v5 = *((_DWORD *)this + 219);
  if ( !v5 )
    return 0;
  if ( v5 == 2 )
    return 1;
  else
    return *((_BYTE *)this + 873);
}
