/*
 * XREFs of ?GetFallbackContentAsync@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_MeetAndChatFallbackContent@23@PEAPEAX@Z @ 0x1805F50B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetFallbackContentAsync@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@56@AEAUMeetAndChatFallbackContent@3456@@Z @ 0x1805FE330 (-GetFallbackContentAsync@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$I.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::IMeetAndChatManager>::GetFallbackContentAsync(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  *a3 = 0LL;
  try
  {
    winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync();
    v4 = v6;
    v6 = 0LL;
    *a3 = v4;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
