/*
 * XREFs of ?Release@?$implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@winrt@@UEAAKXZ @ 0x1800E9BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800E9C28 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::Release(
        __int64 a1)
{
  _QWORD *v1; // rbx
  signed __int64 v2; // rax
  unsigned int v3; // edi
  signed __int64 v4; // rtt

  v1 = (_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  while ( v2 >= 0 )
  {
    v3 = v2 - 1;
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v2 - 1, v2);
    if ( v4 == v2 )
      goto LABEL_6;
  }
  v3 = winrt::impl::weak_ref<1,1>::decrement_strong(2 * v2);
LABEL_6:
  if ( !v3 )
  {
    v1[1] = 1LL;
    if ( v1 )
      (*(void (__fastcall **)(_QWORD *))(*v1 + 8LL))(v1);
  }
  return v3;
}
