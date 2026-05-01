/*
 * XREFs of ??$make@V?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x180188694
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180188590 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UFocusSessionComponent@implementation@Shell@In.c)
 * Callees:
 *     ??0?$heap_implements@V?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1801886E8 (--0-$heap_implements@V-$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Interna.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>,>(
        _QWORD *a1)
{
  void *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x68uLL);
  memset_0(v3, 0, 0x68uLL);
  *a1 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>(v3);
  return a1;
}
