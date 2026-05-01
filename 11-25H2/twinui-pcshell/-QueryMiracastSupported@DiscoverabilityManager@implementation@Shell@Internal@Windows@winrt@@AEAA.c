/*
 * XREFs of ?QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805F8138
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x1805F7030 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 *     ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805F796C (-IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NX.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 *     QueryMiracastDisplayDeviceSupport @ 0x1805F9234 (QueryMiracastDisplayDeviceSupport.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::QueryMiracastSupported(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  v3 = 0;
  if ( dword_18089E878 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_18089E878);
    if ( dword_18089E878 == -1 )
    {
      byte_18089E87C = (int)QueryMiracastDisplayDeviceSupport(&v2) >= 0;
      Init_thread_footer(&dword_18089E878);
    }
  }
  return byte_18089E87C;
}
