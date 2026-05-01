/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1803389A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,void>::GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::NonDelegatingGetRuntimeClassName(
           (a1 - 32) & -(__int64)(a1 != 0),
           a2);
}
