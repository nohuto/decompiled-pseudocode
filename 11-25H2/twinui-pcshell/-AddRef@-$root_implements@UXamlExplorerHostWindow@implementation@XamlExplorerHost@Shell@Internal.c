/*
 * XREFs of ?AddRef@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@QEAAIXZ @ 0x1801951E0
 * Callers:
 *     ?query_interface@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18024E748 (-query_interface@-$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell.c)
 *     ?query_interface_common@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804441BC (-query_interface_common@-$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  bool v4; // zf
  signed __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 8);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v1 + 1, v1);
    v4 = v1 == v5;
    v1 = v5;
    if ( v4 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
}
