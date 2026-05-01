/*
 * XREFs of ?CreateThumbnailFactoryForSnappedWindows@?$consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice2@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@AEBURect@Foundation@Windows@3@@Z @ 0x180681DEC
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180109A90 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$get_abi@$$CBI@winrt@@YA?A_PU?$array_view@$$CBI@0@@Z @ 0x180234DE4 (--$get_abi@$$CBI@winrt@@YA-A_PU-$array_view@$$CBI@0@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice2<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice>::CreateThumbnailFactoryForSnappedWindows(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        _OWORD *a4)
{
  __int64 (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, _BYTE *, __int64 *); // r10
  int v12; // eax
  _BYTE v14[24]; // [rsp+40h] [rbp-40h] BYREF
  int v15; // [rsp+60h] [rbp-20h] BYREF
  __int128 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD *v18; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+48h] BYREF

  v18 = a2;
  v20 = 0LL;
  v7 = *a1;
  if ( v7 )
  {
    v17 = 0LL;
    v8 = (**v7)(
           v7,
           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice2>,
           &v17);
    v9 = v17;
    v19 = v17;
  }
  else
  {
    v8 = 0;
    v19 = 0LL;
    v9 = 0LL;
  }
  *(_DWORD *)v14 = 0;
  *(_OWORD *)&v14[8] = 0LL;
  winrt::check_hresult((int *)&v18, v8, (__int64)v14);
  v15 = 0;
  v16 = 0LL;
  *(_OWORD *)v14 = *(_OWORD *)a3;
  v10 = winrt::get_abi<unsigned int const>(v14);
  *(_OWORD *)v14 = *a4;
  v12 = v11(v9, *(unsigned int *)(a3 + 8), v10, v14, &v20);
  winrt::check_hresult((int *)&v18, v12, (__int64)&v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  *a2 = v20;
  return a2;
}
