/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180213F20
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$4 @ 0x1806CDCEB (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphF_ea_1806CDCEB.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize_::_1_::dtor$7 @ 0x1806CDD0F (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--GetIconFromGlyphF_ea_1806CDD0F.c)
 *     __lambda_33b4202f4967ef1cd2a31cded00016d1_::operator()_::_1_::dtor$0 @ 0x1806DF4BC (__lambda_33b4202f4967ef1cd2a31cded00016d1_--operator()_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail_::_1_::dtor$0 @ 0x1806E899B (_CortanaDesktopExperienceView--SetDefaultIconForProxyWindowThumbnail_--_1_--dtor$0.c)
 *     _JointResize::TagViewWithLogoAsync$_ResumeCoro$1_::_1_::dtor$13 @ 0x1806F3D77 (_JointResize--TagViewWithLogoAsync$_ResumeCoro$1_--_1_--dtor$13.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1_::_1_::dtor$16 @ 0x1806F68ED (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePrev_ea_1806F68ED.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1_::_1_::dtor$9 @ 0x1806F6D1B (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumb_ea_1806F6D1B.c)
 *     __anonymous_namespace_::GetLogoFromShellItem_::_1_::dtor$0 @ 0x1806FE37A (__anonymous_namespace_--GetLogoFromShellItem_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>(
        __int64 a1)
{
  return wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>(a1);
}
