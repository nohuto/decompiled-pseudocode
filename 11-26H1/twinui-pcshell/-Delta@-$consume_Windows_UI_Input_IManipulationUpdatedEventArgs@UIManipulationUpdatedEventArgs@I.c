/*
 * XREFs of ?Delta@?$consume_Windows_UI_Input_IManipulationUpdatedEventArgs@UIManipulationUpdatedEventArgs@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180590D94
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationUpdatedEventArgs___lambda_cd8c6316c996060cbab4a596526042be___::Invoke @ 0x180591CD0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180591CD0.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Input_IManipulationUpdatedEventArgs<winrt::Windows::UI::Input::IManipulationUpdatedEventArgs>::Delta(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v3 = *a1;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  winrt::check_hresult(&v8, v4, (__int64)&v6);
  return a2;
}
