/*
 * XREFs of ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x180053440
 * Callers:
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800543F0 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x18026CDD0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_18026CDD0.c)
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x1805598D8 (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F5554 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x18021659C (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Window.c)
 *     ?TryFindGroupWithWindow@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@@Z @ 0x18026D298 (-TryFindGroupWithWindow@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGr.c)
 *     ?OnFileActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUFileActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x1802B156C (-OnFileActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@.c)
 *     ?TaskGroupDataSource@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18055A7FC (-TaskGroupDataSource@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        HWND a2,
        HWND a3)
{
  struct _FILETIME SystemTimeAsFileTime; // [rsp+20h] [rbp-18h] BYREF
  struct _FILETIME v6; // [rsp+28h] [rbp-10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), a2);
  SystemTimeAsFileTime = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v6 = 0LL;
  do
  {
    _mm_pause();
    GetSystemTimeAsFileTime(&v6);
  }
  while ( v6.dwLowDateTime == SystemTimeAsFileTime.dwLowDateTime
       && v6.dwHighDateTime == SystemTimeAsFileTime.dwHighDateTime );
  (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), a3);
  if ( *((_QWORD *)this + 75) )
  {
    LODWORD(v7) = (_DWORD)a3;
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::TryFindGroupWithWindow(
      (char *)this + 600,
      &v8,
      &v7);
    v7 = 0LL;
    if ( (unsigned __int8)winrt::Windows::Foundation::operator!=(&v8, &v7) )
    {
      if ( (unsigned __int8)winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(&v8) )
      {
        winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter>::TaskGroupDataSource(
          (char *)this + 608,
          &v7);
        winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileActivated(
          &v7,
          &v8);
        if ( v7 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
      }
    }
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  }
}
