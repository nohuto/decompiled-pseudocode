/*
 * XREFs of ?GetTabTearOutSupportedForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x18057E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x18057E1D4 (-GetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::GetTabTearOutSupportedForWindow(
        __int64 a1,
        unsigned __int64 a2,
        _BYTE *a3)
{
  *a3 = winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetTabTearOutSupportedForWindow(
          (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((a1 - 32) & -(__int64)(a1 != 0)),
          a2);
  return 0LL;
}
