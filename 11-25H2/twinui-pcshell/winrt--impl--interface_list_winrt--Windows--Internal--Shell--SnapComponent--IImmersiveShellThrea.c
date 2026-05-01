/*
 * XREFs of winrt::impl::interface_list_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::find_winrt::impl::find_iid_traits_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d_______ @ 0x180594BA8
 * Callers:
 *     winrt::implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::find_interface @ 0x180597B40 (winrt--implements_winrt--Windows--Internal--Shell--SnapComponent--implementation--I_ea_180597B40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::find_winrt::impl::find_iid_traits_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d_______(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>>::value
    && v1[1] == 0x11CC72F064A20CBBLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
