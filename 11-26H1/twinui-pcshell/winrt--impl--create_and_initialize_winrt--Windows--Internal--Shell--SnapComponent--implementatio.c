/*
 * XREFs of winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_____lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b___ @ 0x1805B8A38
 * Callers:
 *     ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805BB51C (-SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::impl::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___ @ 0x1805B93C8 (winrt--impl--producers_base_winrt--Windows--Internal--Shell--SnapComponent--implementation--Imme.c)
 */

_QWORD *__fastcall winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_____lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b___(
        __int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  char *v10; // [rsp+38h] [rbp+10h]

  v10 = (char *)operator new(0x38uLL);
  winrt::impl::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___::producers_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b____std::tuple_winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback___(
    v10 + 16,
    v2,
    v10);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v3 + 8, 1LL);
  *v4 = &off_1807588A8;
  v5 = a1[2];
  a1[2] = 0LL;
  v6 = a1[1];
  a1[1] = 0LL;
  v7 = *a1;
  *a1 = 0LL;
  v4[3] = v7;
  v4[4] = v6;
  v4[5] = v5;
  v8 = a1[3];
  a1[3] = 0LL;
  v4[6] = v8;
  *v4 = &off_1807588A8;
  return v4;
}
