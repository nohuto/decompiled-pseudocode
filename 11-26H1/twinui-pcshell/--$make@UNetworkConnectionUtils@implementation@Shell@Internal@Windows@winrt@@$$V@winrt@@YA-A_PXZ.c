/*
 * XREFs of ??$make@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18067020C
 * Callers:
 *     ??$create_and_initialize@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@1@XZ @ 0x1806700FC (--$create_and_initialize@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$producers_base@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UNetworkConnectionUtils@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1806704CC (--0-$producers_base@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@V-$tupl.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,>(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax
  __int64 v4; // r8

  v2 = operator new(0x40uLL);
  memset_0(v2, 0, 0x40uLL);
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,std::tuple<winrt::Windows::Internal::Shell::NetworkConnectionUtils>>::producers_base<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,std::tuple<winrt::Windows::Internal::Shell::NetworkConnectionUtils>>(v2 + 2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)(v2 + 1), 1LL);
  v2[3] = 0LL;
  v2[4] = 0LL;
  v2[5] = 0LL;
  v2[6] = 0LL;
  v2[7] = 0LL;
  *v2 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils>::`vftable';
  result = a1;
  *a1 = v4;
  return result;
}
