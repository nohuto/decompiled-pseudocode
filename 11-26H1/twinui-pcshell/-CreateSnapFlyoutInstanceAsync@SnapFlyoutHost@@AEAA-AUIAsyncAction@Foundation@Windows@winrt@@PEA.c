/*
 * XREFs of ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@45@IW4InputDeviceKind@9UI@WindowsUdk@5@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@1@@Z @ 0x1805B3940
 * Callers:
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801CCACC (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 *     ?InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z @ 0x180269D9C (-InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@P.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802817D0 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@34@IW4InputDeviceKind@9UI@WindowsUdk@4@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@5@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1805516AC (--0-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVS.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B2A60 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        void **a8,
        int a9)
{
  _QWORD *v13; // rax
  void **v14; // rdi
  void *v15; // rax
  __int64 v17; // [rsp+60h] [rbp+8h]

  v13 = operator new(0x490uLL);
  v17 = (__int64)(v13 + 14);
  v13[139] = a1;
  v13[140] = a3;
  *((_DWORD *)v13 + 282) = a4;
  *((_DWORD *)v13 + 283) = a5;
  *((_DWORD *)v13 + 284) = a6;
  v13[143] = a7;
  v14 = a8;
  v15 = *a8;
  *a8 = 0LL;
  *(_QWORD *)(v17 + 1040) = v15;
  *(_DWORD *)(v17 + 1048) = a9;
  *(_QWORD *)v17 = SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1;
  *(_DWORD *)(v17 + 8) = 65538;
  memset_0((void *)(v17 - 112), 0, 0x68uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,SnapFlyoutHost *,HWND__ *,enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType,unsigned int,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind,HMONITOR__ *,tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>,enum SnapFlyoutHost::ShowFlags>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,SnapFlyoutHost *,HWND__ *,enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType,unsigned int,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind,HMONITOR__ *,tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>,enum SnapFlyoutHost::ShowFlags>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(v17 - 112);
  *(_QWORD *)(v17 - 112) = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type::`vftable';
  *a2 = v17 - 112 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  a7 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a7);
  *(_BYTE *)(v17 + 992) = 0;
  SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1(v17);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>(v14);
  return a2;
}
