/*
 * XREFs of ?get_Position@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x180451B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Position@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AURect@Foundation@67@XZ @ 0x18045175C (-Position@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDK>::get_Position(
        __int64 a1,
        __m128i *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = _mm_loadu_si128((const __m128i *)winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::Position(
                                           (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *)((a1 - 8) & -(__int64)(a1 != 0)),
                                           (__int64)v3));
  return 0LL;
}
