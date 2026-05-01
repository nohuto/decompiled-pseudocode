/*
 * XREFs of ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x18021A770
 * Callers:
 *     ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18026CD50 (-CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknow.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18032A470 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UGamingPostureController@implementation@Postur.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18057DD30 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UWindowTabHost@implementation@Shell@Internal@W.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1805CEE10 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDashboardManager@implementation@Shell@Interna.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1805DD740 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDashboardTaskbarButtonSettingsManager@impleme.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1805F4600 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Inter.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18061A940 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDiscoverabilityManager@implementation@Shell@I.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18063B7C0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VLaunchRemoteDesktopUriHandler@implementation@.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18063FA70 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UCloudPCComponent@implementation@Shell@Interna.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall winrt::Windows::Foundation::IUnknown::as(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  *a2 = (**(__int64 (__fastcall ***)(_QWORD, __int64, __int64))*a1)(*a1, a3, a4);
  return a2;
}
