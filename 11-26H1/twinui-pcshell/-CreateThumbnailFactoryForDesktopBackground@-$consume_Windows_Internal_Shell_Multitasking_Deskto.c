/*
 * XREFs of ?CreateThumbnailFactoryForDesktopBackground@?$consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1806A90E0
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18009B7CC (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice>::CreateThumbnailFactoryForDesktopBackground(
        __int64 (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2,
        _OWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, _QWORD **); // rcx
  int v6; // eax
  _QWORD *v7; // rbx
  int v8; // eax
  _BYTE v10[24]; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+50h] [rbp-20h] BYREF
  __int128 v12; // [rsp+58h] [rbp-18h]
  _QWORD *v13; // [rsp+90h] [rbp+20h] BYREF
  _QWORD *v14; // [rsp+98h] [rbp+28h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF

  v14 = a2;
  v15 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v14 = 0LL;
    v6 = (**v5)(
           v5,
           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>,
           &v14);
    v7 = v14;
    v13 = v14;
  }
  else
  {
    v6 = 0;
    v13 = 0LL;
    v7 = 0LL;
  }
  *(_DWORD *)v10 = 0;
  *(_OWORD *)&v10[8] = 0LL;
  winrt::check_hresult((int *)&v14, v6, (__int64)v10);
  v11 = 0;
  v12 = 0LL;
  *(_OWORD *)v10 = *a3;
  v8 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *, __int64 *))(*v7 + 56LL))(v7, v10, &v15);
  winrt::check_hresult((int *)&v14, v8, (__int64)&v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  *a2 = v15;
  return a2;
}
