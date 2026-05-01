/*
 * XREFs of ??_EFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1802DFE30
 * Callers:
 *     ??_EFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z @ 0x1802DFE10 (--_EFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180217488 (--1FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *__fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::~FocusSessionComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
