/*
 * XREFs of ?to_multimap@implementation@Shell@Internal@Windows@winrt@@YA@AEBUWwwFormUrlDecoder@Foundation@45@@Z @ 0x18066749C
 * Callers:
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x180666D54 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@@Z @ 0x1803375F4 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@.c)
 *     ??$_Emplace@Uhstring@winrt@@U12@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@_N@1@$$QEAUhstring@winrt@@0@Z @ 0x180666A24 (--$_Emplace@Uhstring@winrt@@U12@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstring@wi.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@UIWwwFormUrlDecoderEntry@234@@impl@winrt@@QEBA@I@Z @ 0x180666C84 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Foun.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@UIWwwFormUrlDecoderEntry@234@@impl@winrt@@QEBA@XZ @ 0x180667348 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Found.c)
 */

// Hidden C++ exception states: #wind=5
winrt::Windows::Internal::Shell::implementation *__fastcall winrt::Windows::Internal::Shell::implementation::to_multimap(
        winrt::Windows::Internal::Shell::implementation *this,
        const struct winrt::Windows::Foundation::WwwFormUrlDecoder *a2)
{
  unsigned int v4; // esi
  __int64 **v5; // rax
  __int64 *v6; // rbx
  __int64 **v7; // rax
  __int64 *v8; // rax
  volatile signed __int32 *v10; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v11[8]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-18h] BYREF
  volatile signed __int32 *v13; // [rsp+90h] [rbp+40h] BYREF
  char v14; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  for ( *(_QWORD *)this = std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>();
        v4 < (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass,winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::Size((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2);
        ++v4 )
  {
    v5 = (__int64 **)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass,winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::GetAt(
                       (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2,
                       (winrt *)v11,
                       v4);
    v6 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
           v5,
           &v10);
    v7 = (__int64 **)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass,winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::GetAt(
                       (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2,
                       (winrt *)&v14,
                       v4);
    v8 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
           v7,
           &v13);
    std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::_Emplace<winrt::hstring,winrt::hstring>(
      (__int64 *)this,
      (__int64)v12,
      v8,
      v6);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11);
  }
  return this;
}
