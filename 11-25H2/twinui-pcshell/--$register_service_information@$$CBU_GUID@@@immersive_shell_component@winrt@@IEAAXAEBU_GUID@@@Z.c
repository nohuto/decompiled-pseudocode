/*
 * XREFs of ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1801522D0
 * Callers:
 *     ??0ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x180150B48 (--0ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180150D08 (--0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x180151900 (--0-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??0FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180151BC8 (--0FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802203A4 (--0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802839EC (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18029258C (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18029B314 (--0-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802A520C (--0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA@XZ @ 0x18032B708 (--0GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA.c)
 *     ??0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1803E0BB0 (--0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0GamingPosturePositioner@@QEAA@XZ @ 0x1804E1340 (--0GamingPosturePositioner@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x1805B9A34 (--0-$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@W.c)
 *     ??0NPSMDesktopShellComponent@@QEAA@XZ @ 0x1805EB1F4 (--0NPSMDesktopShellComponent@@QEAA@XZ.c)
 *     ??0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1805ED580 (--0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1805F5568 (--0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0CopilotHotkeyManager@@QEAA@XZ @ 0x1805FD9D0 (--0CopilotHotkeyManager@@QEAA@XZ.c)
 *     ??0RdpShellExtensionHost@@QEAA@XZ @ 0x18064D750 (--0RdpShellExtensionHost@@QEAA@XZ.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@_K@Z @ 0x180152580 (--$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@User.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D566C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::immersive_shell_component::register_service_information<_GUID const>(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int128 v4; // [rsp+28h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v4 = *a2;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v3 = a1 + 10;
  AcquireSRWLockExclusive(a1 + 10);
  std::vector<winrt::immersive_shell_component::service_description>::_Insert_counted_range<winrt::immersive_shell_component::service_description const *>(
    &a1[6],
    a1[7].Ptr,
    &v4,
    1LL);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  `eh vector destructor iterator'(
    &v4,
    0x20uLL,
    1uLL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
}
