/*
 * XREFs of ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180208D68
 * Callers:
 *     ?GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBURect@Foundation@67@@Z @ 0x18020DF0C (-GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 *     ?GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AV?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@XZ @ 0x18026AEAC (-GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 *     ??0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18029E89C (--0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows.c)
 *     ?InsertAfter@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAJ_K@Z @ 0x180451500 (-InsertAfter@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows.c)
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBUDisplayRegion@WindowManagement@UI@56@@Z @ 0x1805B94A8 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBU.c)
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBURect@Foundation@56@@Z @ 0x1805B9680 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win_ea_1805B9680.c)
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x1805BEF10 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$capture@UIServiceProvider@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@0@A6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x180208DC8 (--$capture@UIServiceProvider@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA-A.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::create_instance<IServiceProvider>(__int64 a1, int a2)
{
  int v4[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0LL;
  v4[0] = 4;
  ___capture_UIServiceProvider__A6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_winrt__YA_AU__com_ptr_UIServiceProvider___0_A6AHAEBUguid_0_PEAXI0PEAPEAX__E0AEAPEAXAEAI_Z(
    a1,
    a2,
    a2,
    (unsigned int)&v5,
    (__int64)v4);
  return a1;
}
