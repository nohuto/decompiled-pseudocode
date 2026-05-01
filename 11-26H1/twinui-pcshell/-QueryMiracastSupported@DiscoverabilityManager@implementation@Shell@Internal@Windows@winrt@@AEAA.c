/*
 * XREFs of ?QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18061C2C8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18061B350 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 *     ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18061BB30 (-IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NX.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     QueryMiracastDisplayDeviceSupport @ 0x18061D17C (QueryMiracastDisplayDeviceSupport.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::QueryMiracastSupported(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  v3 = 0;
  if ( dword_1808DEFE8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1808DEFE8);
    if ( dword_1808DEFE8 == -1 )
    {
      byte_1808DEFEC = (int)QueryMiracastDisplayDeviceSupport(&v2) >= 0;
      Init_thread_footer(&dword_1808DEFE8);
    }
  }
  return byte_1808DEFEC;
}
