/*
 * XREFs of ??_EDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805DD6FC
 * Callers:
 *     ??_EDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z @ 0x1805DD6B0 (--_EDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPE.c)
 * Callees:
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1800DB784 (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager *this,
        char a2)
{
  winrt::immersive_shell_component::~immersive_shell_component(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
