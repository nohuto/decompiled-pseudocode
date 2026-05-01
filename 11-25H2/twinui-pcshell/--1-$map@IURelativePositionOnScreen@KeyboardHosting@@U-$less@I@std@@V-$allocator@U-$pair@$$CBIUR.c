/*
 * XREFs of ??1?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA@XZ @ 0x1802D1858
 * Callers:
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$15 @ 0x1806A657F (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$15.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$6 @ 0x1806AE2EF (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$6.c)
 *     _winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::ThemeCoordinator_::_1_::dtor$7 @ 0x1806AF024 (_winrt--Windows--Internal--UI--Themes--implementation--ThemeCoordinator--ThemeCoord_ea_1806AF024.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::~map<unsigned int,KeyboardHosting::RelativePositionOnScreen>(
        void **a1)
{
  std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::~_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>(a1);
}
