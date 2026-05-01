/*
 * XREFs of ??$MakeAndInitialize@V?$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@wil@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@wil@@@Z @ 0x18022DB8C
 * Callers:
 *     ??$CreateClassFactory@V?$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@wil@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18022DAC0 (--$CreateClassFactory@V-$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shel.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@wil@@QEAA@XZ @ 0x1805CEFE0 (--0-$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Internal@Windows@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>,wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>,>(
        __int64 *a1)
{
  void *v2; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>(v2);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return 0LL;
}
