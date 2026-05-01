/*
 * XREFs of ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180451484
 * Callers:
 *     ??1XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18045124C (--1XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UE.c)
 *     ?InsertAfter@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAJ_K@Z @ 0x180451500 (-InsertAfter@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows.c)
 *     ?IsCloaked@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1804516D8 (-IsCloaked@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@w.c)
 *     ?Position@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AURect@Foundation@67@XZ @ 0x18045175C (-Position@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@wi.c)
 *     ?TryActivate@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHXZ @ 0x180451840 (-TryActivate@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Inter.c)
 *     ?XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@67@XZ @ 0x1804518CC (-XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows.c)
 *     ?get_IsActive@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180451A40 (-get_IsActive@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Inte.c)
 *     ?get_IsVisible@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180451AE0 (-get_IsVisible@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Int.c)
 *     ?put_IsCloaked@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAH_N@Z @ 0x180451C20 (-put_IsCloaked@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Int.c)
 *     ?put_IsVisible@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAH_N@Z @ 0x180451CC0 (-put_IsVisible@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Int.c)
 *     ?put_Position@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180451D20 (-put_Position@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Inte.c)
 *     ?put_XamlContent@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x180451E00 (-put_XamlContent@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@I.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::FailFastIfNotOnCreationThread(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *this)
{
  int v1; // ebx
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 18);
  if ( v1 != GetCurrentThreadId() )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x160,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
      v2);
}
