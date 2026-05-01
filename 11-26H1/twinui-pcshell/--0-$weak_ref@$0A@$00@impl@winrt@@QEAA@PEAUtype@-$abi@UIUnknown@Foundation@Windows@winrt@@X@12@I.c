/*
 * XREFs of ??0?$weak_ref@$0A@$00@impl@winrt@@QEAA@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@Z @ 0x1802BD234
 * Callers:
 *     ?make_weak_ref@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18044D02C (-make_weak_ref@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Sh.c)
 * Callees:
 *     ??0?$atomic@I@std@@QEAA@I@Z @ 0x1800DC258 (--0-$atomic@I@std@@QEAA@I@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<0,1>::weak_ref<0,1>(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r9

  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  a1[1] = &winrt::impl::weak_source<0,1>::`vftable';
  a1[2] = a2;
  *a1 = &winrt::impl::weak_ref<0,1>::`vftable';
  std::atomic<unsigned int>::atomic<unsigned int>((__int64)(a1 + 3), a3);
  std::atomic<unsigned int>::atomic<unsigned int>(v3 + 28, 1);
  return v4;
}
