/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1805C291C
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_ResumeCoro$1 @ 0x18026C6B0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--ShowFlyoutAs.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x1805C1290 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--CalculateFly.c)
 * Callees:
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,1>::await_resume(
        __int64 a1,
        _OWORD *a2)
{
  int v3; // edx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0;
  v3 = *(_DWORD *)(a1 + 20);
  v10 = 0LL;
  winrt::check_hresult(&v11, v3, (__int64)&v9);
  winrt::impl::check_status_canceled((winrt::impl *)*(unsigned int *)(a1 + 16), v5);
  v6 = *(_QWORD **)(a1 + 8);
  *a2 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *))(*(_QWORD *)*v6 + 64LL))(*v6, a2);
  winrt::check_hresult(&v11, v7, (__int64)&v9);
  return a2;
}
