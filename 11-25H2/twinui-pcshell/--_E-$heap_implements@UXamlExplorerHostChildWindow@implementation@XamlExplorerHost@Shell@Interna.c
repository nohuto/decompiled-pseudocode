/*
 * XREFs of ??_E?$heap_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180066B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180066B48 (--1XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEA.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *Block,
        char a2)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::~XamlExplorerHostChildWindow(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
