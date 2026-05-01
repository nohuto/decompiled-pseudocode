/*
 * XREFs of winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d_____lambda_ac2a839fec59629fce3443c282716c2d___ @ 0x1805B8AC8
 * Callers:
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805BB31C (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::impl::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___ @ 0x1805B93E0 (winrt--impl--producers_base_winrt--Windows--Internal--Shell--SnapComponent--impleme_ea_1805B93E0.c)
 */

__int64 __fastcall winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d_____lambda_ac2a839fec59629fce3443c282716c2d___(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  char *v10; // [rsp+38h] [rbp+10h]

  v10 = (char *)operator new(0x50uLL);
  winrt::impl::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___(
    v10 + 16,
    v2,
    v10);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v3 + 8, 1LL);
  *(_QWORD *)v4 = &off_1807588E8;
  *(_QWORD *)(v4 + 24) = *(_QWORD *)a1;
  *(_OWORD *)(v4 + 32) = *(_OWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(v4 + 48) = v7;
  *(_QWORD *)(v4 + 56) = v6;
  *(_QWORD *)(v4 + 64) = v5;
  v8 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(v4 + 72) = v8;
  *(_QWORD *)v4 = &off_1807588E8;
  return v4;
}
