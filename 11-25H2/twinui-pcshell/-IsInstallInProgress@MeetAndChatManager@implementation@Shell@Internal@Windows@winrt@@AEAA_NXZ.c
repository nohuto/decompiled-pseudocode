/*
 * XREFs of ?IsInstallInProgress@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805D18EC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805D1010 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1805D1010.c)
 * Callees:
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180287DF0 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
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
