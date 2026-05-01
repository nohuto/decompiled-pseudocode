/*
 * XREFs of ?add@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@2@@Z @ 0x1805658B8
 * Callers:
 *     ?add_SnapLayoutEvent@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180565900 (-add_SnapLayoutEvent@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 * Callees:
 *     ??$make_agile_delegate@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@1@AEBU2341@@Z @ 0x1802AA870 (--$make_agile_delegate@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Intern_ea_1802AA870.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@2@@Z @ 0x1803C5538 (-add_agile@-$event@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foun.c)
 */

PVOID *__fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::add(
        RTL_SRWLOCK *a1,
        PVOID *a2,
        __int64 *a3)
{
  __int64 *v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v5 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>(
         &v7,
         a3);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>::add_agile(
    a1,
    a2,
    (unsigned int *)v5);
  return a2;
}
