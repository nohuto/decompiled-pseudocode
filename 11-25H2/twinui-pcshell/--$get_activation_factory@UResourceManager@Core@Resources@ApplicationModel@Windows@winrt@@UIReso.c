/*
 * XREFs of ??$get_activation_factory@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIResourceManagerStaticInternal@Internal@2345@@winrt@@YA?A_PXZ @ 0x1802C2C9C
 * Callers:
 *     ?EnableSystemResourceManagerForCurrentProcess_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@YAXXZ @ 0x1801B4ED4 (-EnableSystemResourceManagerForCurrentProcess_WASDK@implementation@WASDK@XamlExplorerHost@Shell@.c)
 *     ?EnableSystemResourceManagerForCurrentProcess@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YAXXZ @ 0x1801B5940 (-EnableSystemResourceManagerForCurrentProcess@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 * Callees:
 *     ??$call@AEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@?$factory_cache_entry@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIResourceManagerStaticInternal@Internal@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@Z @ 0x1801B4D98 (--$call@AEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@-$factory_cache_entry@UResourceManager@C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>(
        _QWORD *a1)
{
  __int64 v2; // rcx

  _InterlockedIncrement64(&qword_18089C3B8);
  v2 = winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>;
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal> )
  {
    *a1 = winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    _InterlockedDecrement64(&qword_18089C3B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089C3B8);
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>::call<_lambda_c88db0dbc366a6ea415c26622dd26c45_ &>(
      0LL,
      a1);
  }
  return a1;
}
