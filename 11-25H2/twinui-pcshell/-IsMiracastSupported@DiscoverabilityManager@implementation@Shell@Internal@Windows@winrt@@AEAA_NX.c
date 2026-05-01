/*
 * XREFs of ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805F796C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x1805F7030 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 *     ?OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805F7BC0 (-OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1805F8710 (-WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 *     winrt::Windows::Internal::Shell::implementation::IsMiracastSupportedByWlanStack @ 0x1805F7A24 (winrt--Windows--Internal--Shell--implementation--IsMiracastSupportedByWlanStack.c)
 *     ?QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805F8138 (-QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_Bugfix@@@details@wil@@QEAA_NXZ @ 0x1805F8A2C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_Bugfix@@@deta.c)
 *     QueryMiracastDisplayDeviceSupport @ 0x1805F9234 (QueryMiracastDisplayDeviceSupport.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::IsMiracastSupported(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  bool v1; // bl
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v1 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverability_Bugfix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CastDiscoverability_Bugfix>::GetImpl'::`2'::impl) )
  {
    if ( dword_18089E880 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 16LL) )
    {
      Init_thread_header(&dword_18089E880);
      if ( dword_18089E880 == -1 )
      {
        if ( winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::QueryMiracastSupported(v3) )
          v1 = (unsigned __int8)winrt::Windows::Internal::Shell::implementation::IsMiracastSupportedByWlanStack() != 0;
        byte_18089E884 = v1;
        Init_thread_footer(&dword_18089E880);
      }
    }
    return byte_18089E884;
  }
  else
  {
    v4 = 0LL;
    v5 = 0;
    if ( (int)QueryMiracastDisplayDeviceSupport(&v4) >= 0 )
      return (unsigned __int8)winrt::Windows::Internal::Shell::implementation::IsMiracastSupportedByWlanStack() != 0;
    return v1;
  }
}
