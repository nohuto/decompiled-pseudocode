/*
 * XREFs of ??_ESearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAAPEAXI@Z @ 0x1803A6860
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x1803A5160 (--1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ.c)
 */

winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost *__fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost::`vector deleting destructor'(
        winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost *this,
        char a2)
{
  winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost::~SearchAppHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
