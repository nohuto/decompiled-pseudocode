/*
 * XREFs of ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x1805830F0
 * Callers:
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180583140 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(
        __int64 a1,
        winrt::hstring *a2,
        unsigned int a3)
{
  winrt::hstring::hstring(a2, (const struct winrt::hstring *)(a1 + 64), a3);
  return a2;
}
