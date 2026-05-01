/*
 * XREFs of ?get_WindowType@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAH@Z @ 0x18035D130
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowType@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AW4GameBarWindowType@3456@XZ @ 0x18035CB64 (-WindowType@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA-A.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_WindowType(
        __int64 a1,
        _DWORD *a2)
{
  *a2 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::WindowType((RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0)));
  return 0LL;
}
