/*
 * XREFs of ??0atomic_ref_count@impl@winrt@@QEAA@I@Z @ 0x1800DC238
 * Callers:
 *     ?remove@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800DBC50 (-remove@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Int.c)
 *     ?remove@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800DBE38 (-remove@-$event@U-$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Intern.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800DC0A4 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ?remove@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800DC6A0 (-remove@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@Q.c)
 *     ??0?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@I@Z @ 0x1800DD64C (--0-$event_array@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows.c)
 *     ??$make_event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1800DD70C (--$make_event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt.c)
 *     ??0?$event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@I@Z @ 0x1800DD804 (--0-$event_array@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt.c)
 * Callees:
 *     ??0?$atomic@I@std@@QEAA@I@Z @ 0x1800DC258 (--0-$atomic@I@std@@QEAA@I@Z.c)
 */

__int64 __fastcall winrt::impl::atomic_ref_count::atomic_ref_count(winrt::impl::atomic_ref_count *this)
{
  __int64 v1; // rcx

  std::atomic<unsigned int>::atomic<unsigned int>(this, 1LL);
  return v1;
}
