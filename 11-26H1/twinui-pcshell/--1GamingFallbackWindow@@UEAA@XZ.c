/*
 * XREFs of ??1GamingFallbackWindow@@UEAA@XZ @ 0x1804F7734
 * Callers:
 *     ??_GGamingFallbackWindow@@UEAAPEAXI@Z @ 0x1804F8928 (--_GGamingFallbackWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$DestructedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F3778 (--$DestructedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAU.c)
 */

void __fastcall GamingFallbackWindow::~GamingFallbackWindow(GamingFallbackWindow *this)
{
  __int64 *v1; // rdi

  *(_QWORD *)this = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::producers_base<GamingFallbackWindow,std::tuple<IInspectable>>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::root_implements<GamingFallbackWindow,IInspectable>'};
  v1 = (__int64 *)((char *)this + 24);
  DestroyWindow(*((HWND *)this + 3));
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    GamingPosturePositionerTelemetryProvider::DestructedFallbackWindow<HWND__ * &>(v1);
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri>>::~root_implements<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri>>();
}
