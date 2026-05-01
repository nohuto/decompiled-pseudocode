/*
 * XREFs of ??$make@V?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1802B42E4
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180231270 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UAppBackupListener@implementation@Shell@Intern.c)
 * Callees:
 *     ??0?$heap_implements@V?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1802B4348 (--0-$heap_implements@V-$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Wi.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>,>(
        __int64 *a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+40h] [rbp+8h]

  v4 = operator new(0x1F0uLL);
  memset_0(v4, 0, 0x1F0uLL);
  v2 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>>(v4);
  *a1 = (v2 + 88) & -(__int64)(v2 != 0);
  return a1;
}
