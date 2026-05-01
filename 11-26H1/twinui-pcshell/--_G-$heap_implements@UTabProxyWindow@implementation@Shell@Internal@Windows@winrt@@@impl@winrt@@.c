/*
 * XREFs of ??_G?$heap_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800C9E20
 * Callers:
 *     ??_ETabProxyWindow@implementation@Shell@Internal@Windows@winrt@@W7EAAPEAXI@Z @ 0x180580320 (--_ETabProxyWindow@implementation@Shell@Internal@Windows@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800C9E68 (--1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
