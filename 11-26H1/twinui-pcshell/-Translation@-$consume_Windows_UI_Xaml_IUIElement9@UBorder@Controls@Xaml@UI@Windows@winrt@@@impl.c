/*
 * XREFs of ?Translation@?$consume_Windows_UI_Xaml_IUIElement9@UBorder@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUfloat3@Numerics@Foundation@Windows@3@@Z @ 0x18059B0D8
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x180599038 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::Controls::Border>::Translation(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int128 v8; // [rsp+28h] [rbp-38h]
  int v9; // [rsp+40h] [rbp-20h] BYREF
  __int128 v10; // [rsp+48h] [rbp-18h]
  __int64 v11; // [rsp+70h] [rbp+10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+18h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v11 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement9>, &v11);
    v5 = v11;
    v12 = v11;
  }
  else
  {
    v4 = 0;
    v12 = 0LL;
    v5 = 0LL;
  }
  LODWORD(v7) = 0;
  v8 = 0LL;
  winrt::check_hresult((int *)&v11, v4, (__int64)&v7);
  v9 = 0;
  v10 = 0LL;
  v7 = *a2;
  LODWORD(v8) = *((_DWORD *)a2 + 2);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &v7);
  winrt::check_hresult((int *)&v11, v6, (__int64)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
}
