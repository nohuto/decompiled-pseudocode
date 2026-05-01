/*
 * XREFs of ??0SnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@AEBU012345@@Z @ 0x1805B9820
 * Callers:
 *     ??$_Uninitialized_copy@PEBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@PEBU123456@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@PEBU123456@0PEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805B86B8 (--$_Uninitialized_copy@PEBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *__fastcall winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData::SnapLaunchTargetData(
        winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *this,
        const struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *a2,
        unsigned int a3)
{
  unsigned int v5; // r8d

  *(_DWORD *)this = *(_DWORD *)a2;
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *)((char *)this + 8),
    (const struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *)((char *)a2 + 8),
    a3);
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *)((char *)this + 16),
    (const struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *)((char *)a2 + 16),
    v5);
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  return this;
}
