/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler__lambda_eed24a43ab320b602e73bc35d7541654___::Invoke @ 0x1801FB000
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801CCA48 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?ResetNotificationBoundary@WindowDragInputProvider@@QEAAXXZ @ 0x1801FB04C (-ResetNotificationBoundary@WindowDragInputProvider@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler__lambda_eed24a43ab320b602e73bc35d7541654___::Invoke(
        __int64 a1)
{
  __int64 result; // rax
  WindowDragInputProvider *v2; // [rsp+30h] [rbp+8h] BYREF

  winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)&v2);
  try
  {
    if ( v2 )
      WindowDragInputProvider::ResetNotificationBoundary(v2);
    if ( v2 )
      winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v2);
  }
  return result;
}
