/*
 * XREFs of wistd::__function::__func__lambda_0774abe74d71d40a41a88fc2c42bbab9__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180612B10
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1801C8114 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ?TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x1802948CC (-TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@w.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wil@@QEAA_NXZ @ 0x1802C7638 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@de.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::__function::__func__lambda_0774abe74d71d40a41a88fc2c42bbab9__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1,
        int *a2)
{
  int v2; // edi
  __int64 v3; // rbx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v4; // rcx

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::GetImpl'::`2'::impl) )
  {
    if ( v2 == 1 )
    {
      if ( *(_QWORD *)(v3 + 256) )
        wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
          (wil::details::registry_watcher_state **)(v3 + 256),
          0LL);
    }
    else if ( !v2 )
    {
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::TriggerCompatBackupIfUserJsonImpacted(v4);
    }
  }
}
