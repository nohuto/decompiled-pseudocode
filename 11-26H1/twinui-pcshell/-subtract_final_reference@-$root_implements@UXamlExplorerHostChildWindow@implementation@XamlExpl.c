/*
 * XREFs of ?subtract_final_reference@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1800E7220
 * Callers:
 *     ??1?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@MEAA@XZ @ 0x1800E63AC (--1-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@X@impl@winrt@@UEAAIXZ @ 0x1800E71C0 (-Release@-$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Inter.c)
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802AD1B4 (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHos.c)
 *     ?Release@?$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@UEAAIXZ @ 0x18044CD50 (-Release@-$produce_base@UXamlExplorerHostChildWindow@implementation@XamlExplorerHos_ea_18044CD50.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::subtract_final_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  volatile signed __int64 *v2; // rcx
  unsigned int v3; // edx
  signed __int64 v4; // rtt

  v1 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8);
  while ( v1 >= 0 )
  {
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64(v2, v1 - 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return winrt::impl::weak_ref<0,1>::decrement_strong(2 * v1);
}
