/*
 * XREFs of ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18061BB30
 * Callers:
 *     ?OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18061BD40 (-OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18061C730 (-WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     winrt::Windows::Internal::Shell::implementation::IsMiracastSupportedByWlanStack @ 0x18061BBB0 (winrt--Windows--Internal--Shell--implementation--IsMiracastSupportedByWlanStack.c)
 *     ?QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18061C2C8 (-QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::IsMiracastSupported(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *v2; // rcx
  bool v3; // bl

  if ( dword_1808DEFF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1808DEFF0);
    if ( dword_1808DEFF0 == -1 )
    {
      v3 = 0;
      if ( winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::QueryMiracastSupported(v2) )
        v3 = (unsigned __int8)winrt::Windows::Internal::Shell::implementation::IsMiracastSupportedByWlanStack() != 0;
      byte_1808DEFF4 = v3;
      Init_thread_footer(&dword_1808DEFF0);
    }
  }
  return byte_1808DEFF4;
}
