/*
 * XREFs of ?InitializeAsync@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@PEAUIServiceProvider@@@Z @ 0x1805F7488
 * Callers:
 *     ?subscribe_to_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1805F9060 (-subscribe_to_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_InitCoro$2 @ 0x1805F6FCC (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_InitCo.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+E8h] [rbp+10h] BYREF

  v6 = operator new(0xA0uLL);
  v8 = 0;
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync__InitCoro_2(
    &v8,
    (__int64)v6,
    a2,
    a3,
    a1);
  return a2;
}
