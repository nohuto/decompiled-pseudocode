/*
 * XREFs of ?Translation@?$consume_Windows_UI_Xaml_IUIElement9@UBorder@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUfloat3@Numerics@Foundation@Windows@3@@Z @ 0x1805778B8
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1805758D4 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::Controls::Border>::Translation(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 **),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 **); // rcx
  int v4; // eax
  __int64 *v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+28h] [rbp-38h]
  int v10; // [rsp+40h] [rbp-20h] BYREF
  __int128 v11; // [rsp+48h] [rbp-18h]
  int v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 *v13; // [rsp+88h] [rbp+28h] BYREF
  __int64 *v14; // [rsp+90h] [rbp+30h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v13 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement9>, &v13);
    v5 = v13;
    v14 = v13;
  }
  else
  {
    v4 = 0;
    v14 = 0LL;
    v5 = 0LL;
  }
  LODWORD(v8) = 0;
  v9 = 0LL;
  winrt::check_hresult(&v12, v4, (__int64)&v8);
  v10 = 0;
  v11 = 0LL;
  v6 = *v5;
  v8 = *a2;
  LODWORD(v9) = *((_DWORD *)a2 + 2);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 88))(v5, &v8);
  winrt::check_hresult(&v12, v7, (__int64)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
}
