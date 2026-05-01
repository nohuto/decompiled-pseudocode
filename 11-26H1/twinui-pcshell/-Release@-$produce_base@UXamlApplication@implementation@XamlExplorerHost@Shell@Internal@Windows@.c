/*
 * XREFs of ?Release@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication@34567@X@impl@winrt@@UEAAIXZ @ 0x1800E6C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800E6270 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplication,void>::Release(
        __int64 a1)
{
  volatile signed __int64 *v1; // rdi
  signed __int64 v2; // rax
  unsigned __int32 v3; // ebx
  signed __int64 v5; // rtt

  v1 = (volatile signed __int64 *)((a1 - 24) & -(__int64)(a1 != 0));
  v2 = std::_Atomic_storage<unsigned __int64,8>::load(v1 + 2, 0LL);
  while ( v2 >= 0 )
  {
    v3 = v2 - 1;
    v5 = v2;
    v2 = _InterlockedCompareExchange64(v1 + 2, v2 - 1, v2);
    if ( v5 == v2 )
      goto LABEL_5;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v2 + 24));
  if ( !v3 )
    winrt::impl::weak_ref<1,1>::Release((volatile signed __int32 *)(2 * v2));
LABEL_5:
  if ( !v3 )
  {
    std::_Atomic_storage<unsigned __int64,8>::store(v1 + 2);
    if ( v1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return v3;
}
