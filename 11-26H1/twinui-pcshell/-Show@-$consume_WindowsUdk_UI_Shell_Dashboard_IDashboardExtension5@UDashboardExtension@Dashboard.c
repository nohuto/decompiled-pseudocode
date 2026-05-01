/*
 * XREFs of ?Show@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension5@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@AEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@3@AEBURect@Foundation@Windows@3@_KAEBUGestureAnimationData@Input@893@@Z @ 0x1805D72D0
 * Callers:
 *     _lambda_a44a1a72576a729f64e0a6d83c71a024_::operator() @ 0x1805CD6E8 (_lambda_a44a1a72576a729f64e0a6d83c71a024_--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension5<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::Show(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _OWORD *a2,
        unsigned int *a3,
        __int128 *a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 (__fastcall ***v9)(_QWORD, void *, __int64 *); // rcx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int128 v13; // [rsp+40h] [rbp-29h] BYREF
  __int128 v14; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v15[24]; // [rsp+60h] [rbp-9h] BYREF
  int v16; // [rsp+80h] [rbp+17h] BYREF
  __int128 v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+C0h] [rbp+57h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+5Fh] BYREF

  v9 = *a1;
  if ( v9 )
  {
    v18 = 0LL;
    v10 = (**v9)(v9, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension5>, &v18);
    v11 = v18;
    v19 = v18;
  }
  else
  {
    v10 = 0;
    v19 = 0LL;
    v11 = 0LL;
  }
  *(_DWORD *)v15 = 0;
  *(_OWORD *)&v15[8] = 0LL;
  winrt::check_hresult((int *)&v18, v10, (__int64)v15);
  v16 = 0;
  v17 = 0LL;
  v13 = *a6;
  v14 = *a4;
  *(_OWORD *)v15 = *a2;
  v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int128 *, __int64, __int128 *))(*(_QWORD *)v11 + 48LL))(
          v11,
          v15,
          *a3,
          &v14,
          a5,
          &v13);
  winrt::check_hresult((int *)&a6, v12, (__int64)&v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
}
