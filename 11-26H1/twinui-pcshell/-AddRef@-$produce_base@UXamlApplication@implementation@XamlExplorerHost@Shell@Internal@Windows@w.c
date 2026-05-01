/*
 * XREFs of ?AddRef@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication@34567@X@impl@winrt@@UEAAIXZ @ 0x1800E6FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplication,void>::AddRef(
        __int64 a1)
{
  __int64 v1; // r8
  signed __int64 v2; // rcx
  volatile signed __int64 *v3; // r8
  unsigned int v4; // edx
  bool v6; // zf
  signed __int64 v7; // rax

  v1 = a1 - 8;
  if ( !a1 )
    v1 = 16LL;
  v2 = std::_Atomic_storage<unsigned __int64,8>::load(v1, 0LL);
  while ( v2 >= 0 )
  {
    v4 = v2 + 1;
    v7 = _InterlockedCompareExchange64(v3, v2 + 1, v2);
    v6 = v2 == v7;
    v2 = v7;
    if ( v6 )
      return v4;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 24));
}
