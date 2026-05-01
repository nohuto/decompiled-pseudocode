/*
 * XREFs of ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x180265390
 * Callers:
 *     <none>
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?FailureReason@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A5D0 (-FailureReason@-$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndC.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A6D8 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z @ 0x180299A60 (--0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z.c)
 *     ?Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ @ 0x1802A1704 (-Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ.c)
 *     ??$?RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UActiveTabChangedEventArgs@2UI@345@@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowTabHost@implementation@Shell@Internal@Windows@1@AEBUActiveTabChangedEventArgs@4UI@561@@Z @ 0x1802A7BE0 (--$-RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UActiveTabChangedEventArgs@2UI@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x18057DAE8 (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnActiveTabChanged(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *a2,
        __int64 **a3)
{
  unsigned int v5; // ebx
  __int64 *v6; // rcx
  unsigned int v7; // eax
  char v8; // di
  _QWORD *v9; // rax
  __int128 *v10; // rax
  __int64 *v11; // rax
  const struct winrt::guid *v12; // rax
  __int64 active; // rax
  void (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-39h] BYREF
  void (__fastcall ***v15)(_QWORD, __int64 *, __int64 *); // [rsp+28h] [rbp-31h] BYREF
  __int64 v16; // [rsp+30h] [rbp-29h] BYREF
  __int64 v17; // [rsp+38h] [rbp-21h] BYREF
  __int64 v18; // [rsp+40h] [rbp-19h] BYREF
  int v19; // [rsp+48h] [rbp-11h] BYREF
  __int128 v20; // [rsp+50h] [rbp-9h]
  __int128 v21; // [rsp+60h] [rbp+7h] BYREF

  LODWORD(v14) = 0;
  v5 = winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallResult>::FailureReason((__int64 *)a2);
  v15 = 0LL;
  v6 = *a3;
  v19 = 0;
  v20 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, void (__fastcall ****)(_QWORD, __int64 *, __int64 *)))(*v6 + 56))(v6, &v15);
  winrt::check_hresult(&v14, v7, &v19);
  v14 = v15;
  v8 = 2;
  ((void (__fastcall *)(winrt::Windows::Internal::Shell::implementation::WindowTabHost *, void (__fastcall ****)(_QWORD, __int64 *, __int64 *), _QWORD, void (__fastcall ****)(_QWORD, __int64 *, __int64 *)))winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActivateTabAndUpdateTimestamps)(
    this,
    &v15,
    v5,
    &v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  v14 = 0LL;
  if ( winrt::Windows::Foundation::operator!=(&v15, &v14) )
  {
    v17 = 0LL;
    v9 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
           a3,
           &v16);
    if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v9, &v17) )
    {
      v10 = (__int128 *)winrt::Windows::Foundation::GuidHelper::Empty();
    }
    else
    {
      v11 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
              a3,
              &v18);
      v8 = 3;
      LODWORD(v14) = 3;
      v10 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
              v11,
              &v19);
    }
    v21 = *v10;
    if ( (v8 & 1) != 0 )
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
    v12 = (const struct winrt::guid *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
                                        (__int64 *)&v15,
                                        &v19);
    active = winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs::ActiveTabChangedEventArgs(
               (winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs *)&v16,
               (const struct winrt::guid *)&v21,
               v12);
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>(
      (char *)this + 832,
      this,
      active);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
}
