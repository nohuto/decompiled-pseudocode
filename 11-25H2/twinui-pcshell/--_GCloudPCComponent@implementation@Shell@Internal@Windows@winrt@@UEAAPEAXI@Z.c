/*
 * XREFs of ??_GCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180619C88
 * Callers:
 *     ??_ECloudPCComponent@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z @ 0x180619B80 (--_ECloudPCComponent@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180619050 (--1CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::CloudPCComponent *__fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  char v2; // bl

  v2 = (char)a2;
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent::~CloudPCComponent(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
