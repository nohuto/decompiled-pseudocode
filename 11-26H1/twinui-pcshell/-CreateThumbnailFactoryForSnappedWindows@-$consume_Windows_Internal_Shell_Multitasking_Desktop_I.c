/*
 * XREFs of ?CreateThumbnailFactoryForSnappedWindows@?$consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice2@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@AEBURect@Foundation@Windows@3@@Z @ 0x1806A91C0
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18009B7CC (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$get_abi@$$CBI@winrt@@YA?A_PU?$array_view@$$CBI@0@@Z @ 0x180226BD8 (--$get_abi@$$CBI@winrt@@YA-A_PU-$array_view@$$CBI@0@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice2<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice>::CreateThumbnailFactoryForSnappedWindows(
        __int64 (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2,
        __int128 *a3,
        _OWORD *a4)
{
  __int64 (__fastcall ***v7)(_QWORD, void *, _QWORD **); // rcx
  int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  __int128 v13; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v14[24]; // [rsp+50h] [rbp-9h] BYREF
  int v15; // [rsp+70h] [rbp+17h] BYREF
  __int128 v16; // [rsp+78h] [rbp+1Fh]
  _QWORD *v17; // [rsp+C0h] [rbp+67h] BYREF
  _QWORD *v18; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+D0h] [rbp+77h] BYREF

  v18 = a2;
  v19 = 0LL;
  v7 = *a1;
  if ( v7 )
  {
    v18 = 0LL;
    v8 = (**v7)(
           v7,
           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice2>,
           &v18);
    v9 = v18;
    v17 = v18;
  }
  else
  {
    v8 = 0;
    v17 = 0LL;
    v9 = 0LL;
  }
  *(_DWORD *)v14 = 0;
  *(_OWORD *)&v14[8] = 0LL;
  winrt::check_hresult((int *)&v18, v8, (__int64)v14);
  v15 = 0;
  v16 = 0LL;
  v13 = *a3;
  *(_OWORD *)v14 = *a4;
  v10 = winrt::get_abi<unsigned int const>(&v13);
  v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, _BYTE *, __int64 *))(*v9 + 48LL))(
          v9,
          *((unsigned int *)a3 + 2),
          v10,
          v14,
          &v19);
  winrt::check_hresult((int *)&v18, v11, (__int64)&v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  *a2 = v19;
  return a2;
}
