/*
 * XREFs of ?OnDisplayMonitorInfoChanged@CToastCenterExperienceManager@@AEAAXUDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UDisplayMonitorInfoChangedEventArgs@3456@@Z @ 0x1803754E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?OnDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x18020EEC4 (-OnDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@X.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CToastCenterExperienceManager::OnDisplayMonitorInfoChanged(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync(a1, (__int64)&v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
}
