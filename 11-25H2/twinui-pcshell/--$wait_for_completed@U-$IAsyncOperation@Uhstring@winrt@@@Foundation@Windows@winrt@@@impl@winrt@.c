/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@I@Z @ 0x180242C8C
 * Callers:
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800645C4 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$make_delegate_with_shared_state@U?$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@Uhstring@winrt@@@234@I@Z@@impl@winrt@@YA?AU?$pair@U?$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation@Windows@winrt@@PEAUshared_type@?1???$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@Uhstring@winrt@@@234@I@Z@@std@@$$QEAUshared_type@?1???$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@01@YA?A_PAEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@I@Z@@Z @ 0x18029210C (--$make_delegate_with_shared_state@U-$AsyncOperationCompletedHandler@Uhstring@winrt@@@Foundation.c)
 *     WaitForSingleObject_0 @ 0x1802D3480 (WaitForSingleObject_0.c)
 *     WINRT_IMPL_CloseHandle @ 0x1802D34C8 (WINRT_IMPL_CloseHandle.c)
 *     WINRT_IMPL_CreateEventW @ 0x1802D3B98 (WINRT_IMPL_CreateEventW.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$check_pointer@X@winrt@@YAPEAXPEAXAEBUslim_source_location@impl@0@@Z @ 0x18031B250 (--$check_pointer@X@winrt@@YAPEAXPEAXAEBUslim_source_location@impl@0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>>(
        __int64 *a1,
        int a2)
{
  HANDLE EventW; // rax
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rbx
  HANDLE hObject; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+28h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  __int128 v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+68h] [rbp+18h] BYREF

  v12 = a2;
  LODWORD(v10) = 0;
  v11 = 0LL;
  EventW = WINRT_IMPL_CreateEventW(0LL, 1, 0, 0LL);
  hObject = (HANDLE)winrt::check_pointer<void>(EventW, &v10);
  *(_QWORD *)&v9 = 0LL;
  ___make_delegate_with_shared_state_U__AsyncOperationCompletedHandler_Uhstring_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_Uhstring_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_Uhstring_winrt___234_I_Z__impl_winrt__YA_AU__pair_U__AsyncOperationCompletedHandler_Uhstring_winrt___Foundation_Windows_winrt__PEAUshared_type__1____wait_for_completed_U__IAsyncOperation_Uhstring_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_Uhstring_winrt___234_I_Z__std____QEAUshared_type__1____wait_for_completed_U__IAsyncOperation_Uhstring_winrt___Foundation_Windows_winrt___01_YA_A_PAEBU__IAsyncOperation_Uhstring_winrt___Foundation_Windows_1_I_Z__Z(
    &v10,
    &hObject);
  if ( hObject )
    WINRT_IMPL_CloseHandle(hObject);
  v4 = *a1;
  LODWORD(hObject) = 0;
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v10);
  winrt::check_hresult(&v12, v5, &hObject);
  v6 = v11;
  WaitForSingleObject_0(*(HANDLE *)v11, 0xFFFFFFFF);
  LODWORD(v6) = *(_DWORD *)(v6 + 8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return (unsigned int)v6;
}
