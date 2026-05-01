/*
 * XREFs of ?subscribe_to_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1805F9060
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeAsync@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@PEAUIServiceProvider@@@Z @ 0x1805F7488 (-InitializeAsync@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        struct IServiceProvider *a2)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync(
    (__int64)this - 24,
    &v2,
    (__int64)a2);
}
