/*
 * XREFs of ?subscribe_to_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18061D000
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18061B350 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        struct IServiceProvider *a2)
{
  void (__fastcall **v4)(__int64); // [rsp+40h] [rbp+8h]

  v4 = (void (__fastcall **)(__int64))operator new(0xA0uLL);
  v4[17] = (void (__fastcall *)(__int64))((char *)this - 24);
  v4[18] = (void (__fastcall *)(__int64))a2;
  *v4 = winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync__ResumeCoro_1;
  *((_DWORD *)v4 + 2) = 65538;
  *((_BYTE *)v4 + 128) = 0;
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync__ResumeCoro_1((__int64)v4);
}
