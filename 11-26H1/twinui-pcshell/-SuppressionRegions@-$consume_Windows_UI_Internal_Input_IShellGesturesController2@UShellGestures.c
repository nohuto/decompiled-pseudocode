/*
 * XREFs of ?SuppressionRegions@?$consume_Windows_UI_Internal_Input_IShellGesturesController2@UShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@3@@Z @ 0x180593130
 * Callers:
 *     ?SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x180592D20 (-SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV-$vector@URect@Foundation@Windows@winrt@@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$get_abi@$$CBI@winrt@@YA?A_PU?$array_view@$$CBI@0@@Z @ 0x180226BD8 (--$get_abi@$$CBI@winrt@@YA-A_PU-$array_view@$$CBI@0@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController2<winrt::Windows::UI::Internal::Input::ShellGesturesController>::SuppressionRegions(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  _BYTE v8[24]; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+40h] [rbp-20h] BYREF
  __int128 v10; // [rsp+48h] [rbp-18h]
  __int64 v11; // [rsp+70h] [rbp+10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+18h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v11 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::UI::Internal::Input::IShellGesturesController2>, &v11);
    v5 = v11;
    v12 = v11;
  }
  else
  {
    v4 = 0;
    v12 = 0LL;
    v5 = 0LL;
  }
  *(_DWORD *)v8 = 0;
  *(_OWORD *)&v8[8] = 0LL;
  winrt::check_hresult((int *)&v11, v4, (__int64)v8);
  v9 = 0;
  v10 = 0LL;
  *(_OWORD *)v8 = *(_OWORD *)a2;
  v6 = winrt::get_abi<unsigned int const>(v8);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v5 + 56LL))(v5, *(unsigned int *)(a2 + 8), v6);
  winrt::check_hresult((int *)&v11, v7, (__int64)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
}
