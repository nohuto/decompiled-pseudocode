/*
 * XREFs of ?Release@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication@34567@X@impl@winrt@@UEAAIXZ @ 0x1800E9790
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800E9E50 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplication,void>::Release(
        unsigned __int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  unsigned __int32 v3; // edi
  signed __int64 v5; // rtt

  v1 = (volatile signed __int64 *)((a1 - 24) & ((unsigned __int128)-(__int128)a1 >> 64));
  v2 = *((_QWORD *)v1 + 2);
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
    winrt::impl::weak_ref<1,1>::Release((void *)(2 * v2));
LABEL_5:
  if ( !v3 )
  {
    *((_QWORD *)v1 + 2) = 1LL;
    if ( v1 )
      (*(void (__fastcall **)(volatile signed __int64 *))(*v1 + 8))(v1);
  }
  return v3;
}
