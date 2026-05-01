/*
 * XREFs of ??$?RAEBU?$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@winrt@@@_lambda_c88db0dbc366a6ea415c26622dd26c45_@@QEBA?A_PAEBU?$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@winrt@@@Z @ 0x1802A75D8
 * Callers:
 *     ??$call@AEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@?$factory_cache_entry@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIResourceManagerStaticInternal@Internal@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@Z @ 0x1801D2E74 (--$call@AEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@-$factory_cache_entry@UResourceManager@C.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall _lambda_c88db0dbc366a6ea415c26622dd26c45_::operator()<winrt::com_ptr<Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal> const &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>;
  *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
