/*
 * XREFs of ?TryGetInstallStatus@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805F7EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUMeetAndChatInstallStatus@3456@XZ @ 0x1805F7F34 (-TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUMeet.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::IMeetAndChatManager>::TryGetInstallStatus(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *InstallStatus; // rax
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  InstallStatus = (__int64 *)winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::TryGetInstallStatus(
                               (a1 - 8) & -(__int64)(a1 != 0),
                               &v6);
  v4 = *InstallStatus;
  *InstallStatus = 0LL;
  *a2 = v4;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return 0LL;
}
