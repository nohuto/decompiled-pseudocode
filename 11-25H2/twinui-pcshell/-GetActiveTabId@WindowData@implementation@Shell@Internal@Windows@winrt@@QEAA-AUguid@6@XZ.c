/*
 * XREFs of ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x180063E40
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x18026CDD0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_18026CDD0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180061EB0 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180063FE8 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180065DB4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?at@?$unordered_map@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@9@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@@std@@QEAAAEAUWindowTabView@Shell@UI@Internal@Windows@winrt@@AEBUguid@8@@Z @ 0x18014FA38 (-at@-$unordered_map@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@U-$hash@Uguid@winrt@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int128 *__fastcall winrt::Windows::Internal::Shell::implementation::WindowData::GetActiveTabId(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  _QWORD *v4; // r15
  RTL_SRWLOCK *v5; // r14
  __int64 *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  char v9; // cl
  __int128 *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+28h] [rbp-48h] BYREF
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  __int128 v16; // [rsp+48h] [rbp-28h] BYREF
  __int128 v17; // [rsp+58h] [rbp-18h] BYREF

  LODWORD(v13) = 0;
  AcquireSRWLockShared(a1);
  v14 = a1;
  winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
    &a1[2],
    &v12);
  if ( a1[23].Ptr )
  {
    *(_QWORD *)&v15 = 0LL;
    LODWORD(v13) = 1;
    if ( !v12 )
      goto LABEL_10;
    v4 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
           &v12,
           &v16);
    v5 = a1 + 19;
    v6 = (__int64 *)std::unordered_map<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView>::at(
                      &a1[11],
                      *((_QWORD *)a1[20].Ptr + ((__int64)a1[22].Ptr & ((__int64)a1[21].Ptr - 1))));
    v7 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
           v6,
           &v17);
    v8 = *v7 - *v4;
    if ( *v7 == *v4 )
      v8 = v7[1] - v4[1];
    if ( v8 )
    {
      v9 = 0;
    }
    else
    {
LABEL_10:
      v9 = 1;
      v5 = a1 + 19;
    }
    if ( !v9 )
    {
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
        &v12,
        a2);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v14);
      return a2;
    }
    *a2 = *(_OWORD *)*((_QWORD *)v5[1].Ptr + ((__int64)v5[3].Ptr & ((__int64)v5[2].Ptr - 1)));
  }
  else
  {
    v13 = 0LL;
    if ( (unsigned __int8)winrt::Windows::Foundation::operator==(&v12, &v13) )
    {
      v15 = 0LL;
      v10 = &v15;
    }
    else
    {
      v10 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
              &v12,
              &v16);
    }
    *a2 = *v10;
  }
  if ( v12 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
  ReleaseSRWLockShared(a1);
  return a2;
}
