/*
 * XREFs of ?Release@?$produce_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAIXZ @ 0x1800E62C0
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_final_reference@?$root_implements@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAAIXZ @ 0x1800E69C8 (-subtract_final_reference@-$root_implements@URemoteSystemWindowAddedEventArgs@implementation@She.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,void>::Release(
        unsigned __int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = (a1 - 24) & ((unsigned __int128)-(__int128)a1 >> 64);
  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>::subtract_final_reference(v1);
  if ( !v2 )
  {
    std::_Atomic_storage<unsigned __int64,8>::store(v1 + 8);
    if ( v1 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 8LL))(v1, v2 + 1);
  }
  return v2;
}
