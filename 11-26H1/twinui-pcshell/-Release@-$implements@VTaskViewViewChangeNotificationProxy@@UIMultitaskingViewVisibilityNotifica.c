/*
 * XREFs of ?Release@?$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@winrt@@UEAAKXZ @ 0x1800E6930
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_final_reference@?$root_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@impl@winrt@@IEAAIXZ @ 0x1800E6BA8 (-subtract_final_reference@-$root_implements@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>::Release(
        __int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = a1 + 8;
  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::subtract_final_reference(a1 + 8);
  if ( !v2 )
  {
    std::_Atomic_storage<unsigned __int64,8>::store(v1 + 8);
    if ( v1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  }
  return v2;
}
