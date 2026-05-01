/*
 * XREFs of ?get_IsResizingEnabled@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1803566A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_NXZ @ 0x1803551B4 (-IsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@W_ea_1803551B4.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_IsResizingEnabled(
        __int64 a1,
        bool *a2)
{
  *a2 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsResizingEnabled((RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0)));
  return 0LL;
}
