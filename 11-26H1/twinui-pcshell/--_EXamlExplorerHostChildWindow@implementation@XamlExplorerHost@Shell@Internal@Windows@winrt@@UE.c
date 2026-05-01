/*
 * XREFs of ??_EXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180026990
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180026A08 (--1XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEA.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *this,
        char a2)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::~XamlExplorerHostChildWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
