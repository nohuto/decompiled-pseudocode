/*
 * XREFs of ??$create_and_initialize@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@1@XZ @ 0x180452490
 * Callers:
 *     ??$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18045272C (--$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Inter.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UIXamlApplication_WASDKStatics@WASDK@XamlExplorerHost@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x1804529C8 (--0-$producers_base@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@I.c)
 */

_QWORD *winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,>()
{
  _OWORD *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // r9

  v0 = operator new(0x30uLL);
  *v0 = 0LL;
  v0[1] = 0LL;
  v0[2] = 0LL;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDKStatics>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDKStatics>>(
    v0 + 1,
    v1,
    v2,
    v0);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v3 + 8, 1LL);
  v4[4] = 0LL;
  v4[5] = 0LL;
  *v4 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>::`vftable';
  return v4;
}
