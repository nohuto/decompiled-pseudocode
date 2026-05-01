/*
 * XREFs of ??1shared_type@?1???$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@winrt@@YA?AUIAsyncAction@Foundation@Windows@1@AEBU2341@00@Z@QEAA@XZ @ 0x1800E6564
 * Callers:
 *     ??1?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@4@YA?AUIAsyncAction@234@AEBU6234@00@Z@@impl@winrt@@QEAA@XZ @ 0x1800E65EC (--1-$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@-1-.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x1802655E0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storag.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x1803403F0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windows--Foundatio.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x180340680 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windo_ea_180340680.c)
 *     _winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction__::_1_::dtor$2 @ 0x1806E37F9 (_winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windows--Foundati.c)
 *     _winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference____::_1_::dtor$2 @ 0x1806F5D43 (_winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Stora.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     WINRT_IMPL_CloseHandle @ 0x1802CA3EB (WINRT_IMPL_CloseHandle.c)
 */

void __fastcall `winrt::when_any<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction>'::`2'::shared_type::~shared_type(
        HANDLE *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 2));
  if ( *a1 )
  {
    WINRT_IMPL_CloseHandle(*a1);
    *a1 = 0LL;
  }
}
