/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18059E634
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_ResumeCoro$1 @ 0x180274760 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_180274760.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x18059D0C0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18059D0C0.c)
 * Callees:
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18005CD48 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,1>::await_resume(
        __int64 a1,
        _OWORD *a2)
{
  int v4; // edx
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0;
  v4 = *(_DWORD *)(a1 + 20);
  v11 = 0LL;
  winrt::check_hresult(&v12, v4, (__int64)&v10);
  winrt::impl::check_status_canceled((winrt::impl *)*(unsigned int *)(a1 + 16), v5);
  v6 = *(__int64 **)(a1 + 8);
  v10 = 0;
  *a2 = 0LL;
  v7 = *v6;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v7 + 64LL))(v7, a2);
  winrt::check_hresult(&v12, v8, (__int64)&v10);
  return a2;
}
