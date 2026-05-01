/*
 * XREFs of ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x18055EF58
 * Callers:
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18055EFA0 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(
        __int64 a1,
        winrt::hstring *a2)
{
  winrt::hstring::hstring(a2, (const struct winrt::hstring *)(a1 + 64));
  return a2;
}
