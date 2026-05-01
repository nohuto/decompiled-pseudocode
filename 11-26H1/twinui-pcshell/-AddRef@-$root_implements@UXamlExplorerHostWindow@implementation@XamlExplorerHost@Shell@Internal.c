/*
 * XREFs of ?AddRef@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@QEAAIXZ @ 0x1800E6D88
 * Callers:
 *     ?query_interface@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18021EDD0 (-query_interface@-$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell.c)
 *     ?query_interface_common@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804508CC (-query_interface_common@-$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHos.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rcx
  volatile signed __int64 *v2; // r8
  unsigned int v3; // edx
  bool v5; // zf
  signed __int64 v6; // rax

  v1 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8, 0LL);
  while ( v1 >= 0 )
  {
    v3 = v1 + 1;
    v6 = _InterlockedCompareExchange64(v2, v1 + 1, v1);
    v5 = v1 == v6;
    v1 = v6;
    if ( v5 )
      return v3;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
}
