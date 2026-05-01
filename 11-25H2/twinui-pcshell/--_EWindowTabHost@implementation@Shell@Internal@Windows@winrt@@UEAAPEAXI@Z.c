/*
 * XREFs of ??_EWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18055989C
 * Callers:
 *     ??_EWindowTabHost@implementation@Shell@Internal@Windows@winrt@@WFA@EAAPEAXI@Z @ 0x180559810 (--_EWindowTabHost@implementation@Shell@Internal@Windows@winrt@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E18B0 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::WindowTabHost *__fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::~WindowTabHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x370);
  return this;
}
