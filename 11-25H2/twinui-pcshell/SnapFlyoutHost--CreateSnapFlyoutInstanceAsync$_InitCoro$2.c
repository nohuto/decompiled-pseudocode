/*
 * XREFs of SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2 @ 0x18058E75C
 * Callers:
 *     ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@45@IW4InputDeviceKind@9UI@WindowsUdk@5@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@1@@Z @ 0x18028CF18 (-CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA-AUIAsyncAction@Foundation@Windows@winrt@@PEA.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x18058E8F0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int *a5,
        int *a6,
        int *a7,
        __int64 a8,
        __int64 *a9,
        int *a10,
        __int64 a11)
{
  int v15; // r10d
  int v16; // r9d
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdi

  v15 = *a10;
  v16 = *a7;
  v17 = *a6;
  v18 = *a5;
  *(_QWORD *)(a2 + 1233) = a11;
  *(_QWORD *)(a2 + 1241) = a4;
  *(_DWORD *)(a2 + 1249) = v18;
  *(_DWORD *)(a2 + 1253) = v17;
  *(_DWORD *)(a2 + 1257) = v16;
  *(_QWORD *)(a2 + 1265) = a8;
  v19 = *a9;
  *a9 = 0LL;
  *(_QWORD *)(a2 + 1273) = v19;
  *(_DWORD *)(a2 + 1281) = v15;
  *(_QWORD *)a2 = SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v20 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  *(_QWORD *)(v20 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,SnapFlyoutHost *,HWND__ *,enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType,unsigned int,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind,HMONITOR__ *,tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>,enum SnapFlyoutHost::ShowFlags>::promise_type,winrt::Windows::Foundation::IAsyncAction>::`vftable';
  *(_QWORD *)(v20 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v20 + 8) = 1LL;
  *(_QWORD *)(v20 + 32) = 0LL;
  *(_QWORD *)(v20 + 40) = 0LL;
  *(_BYTE *)(v20 + 48) = 0;
  *(_QWORD *)v20 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type::`vftable';
  *(_QWORD *)(v20 + 56) = 0LL;
  *(_QWORD *)(v20 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(a2 - 112 + 56));
  *(_QWORD *)(v20 + 72) = 0LL;
  *(_QWORD *)(v20 + 80) = 0LL;
  *(_QWORD *)(v20 + 88) = 0LL;
  *(_DWORD *)(v20 + 96) = 0;
  *(_BYTE *)(v20 + 100) = 0;
  *(_QWORD *)v20 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type::`vftable';
  *a3 = a2 - 112 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  a10 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a10);
  *(_BYTE *)(a2 + 1232) = 0;
  return SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1(a2);
}
