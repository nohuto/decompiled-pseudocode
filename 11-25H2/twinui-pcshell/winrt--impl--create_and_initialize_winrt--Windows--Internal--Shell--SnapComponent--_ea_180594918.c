/*
 * XREFs of winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d_____lambda_ac2a839fec59629fce3443c282716c2d___ @ 0x180594918
 * Callers:
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805970DC (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::impl::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___ @ 0x180595238 (winrt--impl--producers_base_winrt--Windows--Internal--Shell--SnapComponent--impleme_ea_180595238.c)
 */

__int64 __fastcall winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d_____lambda_ac2a839fec59629fce3443c282716c2d___(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  char *v9; // [rsp+38h] [rbp+10h]

  v9 = (char *)operator new(0x50uLL);
  winrt::impl::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___(
    v9 + 16,
    v2,
    v9);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v3 + 8) = 1LL;
  *(_QWORD *)v3 = &off_18072E808;
  *(_QWORD *)(v3 + 24) = *(_QWORD *)a1;
  *(_OWORD *)(v3 + 32) = *(_OWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(v3 + 48) = v6;
  *(_QWORD *)(v3 + 56) = v5;
  *(_QWORD *)(v3 + 64) = v4;
  v7 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(v3 + 72) = v7;
  *(_QWORD *)v3 = &off_18072E808;
  return v3;
}
