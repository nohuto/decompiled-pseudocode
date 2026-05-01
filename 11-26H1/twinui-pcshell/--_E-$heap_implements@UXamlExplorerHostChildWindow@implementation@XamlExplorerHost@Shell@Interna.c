/*
 * XREFs of ??_E?$heap_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800269D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180026A08 (--1XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEA.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
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
