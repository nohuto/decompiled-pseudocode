/*
 * XREFs of ?IsInstallInProgress@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805F5FAC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805F5640 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurrentUserAsync$.c)
 * Callees:
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18027F280 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::IsInstallInProgress(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this)
{
  __int64 (__fastcall ****v1)(_QWORD, __int64 *, __int64 *); // rcx
  char v2; // bl

  v1 = (__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))((char *)this + 264);
  v2 = 0;
  if ( *v1 )
    return (unsigned int)winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status(v1) == 0;
  return v2;
}
