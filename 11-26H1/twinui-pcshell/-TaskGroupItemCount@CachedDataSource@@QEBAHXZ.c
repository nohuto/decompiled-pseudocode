/*
 * XREFs of ?TaskGroupItemCount@CachedDataSource@@QEBAHXZ @ 0x18009B1BC
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x18009C350 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISwitchItemDataSource@Multitasking@ComposableShell@456@@Z @ 0x18009AD88 (-CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Inter.c)
 *     ??$as@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18020FE18 (--$as@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@-$abi@UI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CachedDataSource::TaskGroupItemCount(CachedDataSource *this)
{
  __int64 *v2; // rbx
  unsigned int v3; // edi
  __int64 *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 4) )
  {
    winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(&v5);
    v2 = v5;
  }
  else
  {
    v2 = (__int64 *)*((_QWORD *)this + 5);
    v5 = v2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v5);
  }
  v3 = CountTaskGroupSwitchItemsInDataSource((CachedDataSource *)((char *)this + 48), &v5);
  if ( v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v5);
  return v3;
}
