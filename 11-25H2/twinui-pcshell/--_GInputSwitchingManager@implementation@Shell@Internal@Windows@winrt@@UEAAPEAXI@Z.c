/*
 * XREFs of ??_GInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1806135F0
 * Callers:
 *     ??_EInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z @ 0x1806135E0 (--_EInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800A68E8 (--1InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *__fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  char v2; // bl

  v2 = (char)a2;
  winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::~InputSwitchingManager(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x130);
  return this;
}
