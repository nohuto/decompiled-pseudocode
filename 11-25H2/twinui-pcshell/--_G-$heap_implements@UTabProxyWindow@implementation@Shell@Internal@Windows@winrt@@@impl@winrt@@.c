/*
 * XREFs of ??_G?$heap_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800A3A3C
 * Callers:
 *     ??_ETabProxyWindow@implementation@Shell@Internal@Windows@winrt@@W7EAAPEAXI@Z @ 0x18055C2F0 (--_ETabProxyWindow@implementation@Shell@Internal@Windows@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800A3A78 (--1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::TabProxyWindow *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::~TabProxyWindow(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xC0);
  return a1;
}
