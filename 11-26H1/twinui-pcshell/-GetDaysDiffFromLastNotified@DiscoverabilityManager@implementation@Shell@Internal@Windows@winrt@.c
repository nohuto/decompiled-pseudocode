/*
 * XREFs of ?GetDaysDiffFromLastNotified@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_JAEAU_SYSTEMTIME@@@Z @ 0x18061AD84
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18061B350 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::GetDaysDiffFromLastNotified(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        struct _SYSTEMTIME *a2)
{
  struct _FILETIME FileTime; // [rsp+20h] [rbp-38h] BYREF
  struct _FILETIME v5; // [rsp+28h] [rbp-30h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+30h] [rbp-28h] BYREF

  SystemTime = 0LL;
  GetSystemTime(&SystemTime);
  FileTime = 0LL;
  v5 = 0LL;
  SystemTimeToFileTime(&SystemTime, &FileTime);
  SystemTimeToFileTime(a2, &v5);
  return (*(_QWORD *)&FileTime - *(_QWORD *)&v5) / 864000000000LL;
}
