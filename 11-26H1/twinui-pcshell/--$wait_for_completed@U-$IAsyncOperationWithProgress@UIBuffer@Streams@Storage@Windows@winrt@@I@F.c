/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@1@I@Z @ 0x180648494
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x18064F3BC (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     WaitForSingleObject_0 @ 0x1802CA3A3 (WaitForSingleObject_0.c)
 *     WINRT_IMPL_CloseHandle @ 0x1802CA3EB (WINRT_IMPL_CloseHandle.c)
 *     WINRT_IMPL_CreateEventW @ 0x1802CAAB8 (WINRT_IMPL_CreateEventW.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$check_pointer@X@winrt@@YAPEAXPEAXAEBUslim_source_location@impl@0@@Z @ 0x1803177DC (--$check_pointer@X@winrt@@YAPEAXPEAXAEBUslim_source_location@impl@0@@Z.c)
 *     ??$make_delegate_with_shared_state@U?$AsyncOperationWithProgressCompletedHandler@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@234@I@Z@@impl@winrt@@YA?AU?$pair@U?$AsyncOperationWithProgressCompletedHandler@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@PEAUshared_type@?1???$wait_for_completed@U?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@234@I@Z@@std@@$$QEAUshared_type@?1???$wait_for_completed@U?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@@01@YA?A_PAEBU?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@1@I@Z@@Z @ 0x1806471F4 (--$make_delegate_with_shared_state@U-$AsyncOperationWithProgressCompletedHandler@UIBuffer@Stream.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Storage::Streams::IBuffer,unsigned int>>(
        __int64 *a1,
        int a2)
{
  HANDLE EventW; // rax
  __int64 v4; // rcx
  int v5; // eax
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
  hObject = (HANDLE)winrt::check_pointer<void>((__int64)EventW, (winrt *)&v10);
  *(_QWORD *)&v9 = 0LL;
  ___make_delegate_with_shared_state_U__AsyncOperationWithProgressCompletedHandler_UIBuffer_Streams_Storage_Windows_winrt__I_Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperationWithProgress_UIBuffer_Streams_Storage_Windows_winrt__I_Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperationWithProgress_UIBuffer_Streams_Storage_Windows_winrt__I_234_I_Z__impl_winrt__YA_AU__pair_U__AsyncOperationWithProgressCompletedHandler_UIBuffer_Streams_Storage_Windows_winrt__I_Foundation_Windows_winrt__PEAUshared_type__1____wait_for_completed_U__IAsyncOperationWithProgress_UIBuffer_Streams_Storage_Windows_winrt__I_Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperationWithProgress_UIBuffer_Streams_Storage_Windows_winrt__I_234_I_Z__std____QEAUshared_type__1____wait_for_completed_U__IAsyncOperationWithProgress_UIBuffer_Streams_Storage_Windows_winrt__I_Foundation_Windows_winrt___01_YA_A_PAEBU__IAsyncOperationWithProgress_UIBuffer_Streams_Storage_Windows_winrt__I_Foundation_Windows_1_I_Z__Z(
    (char *)&v10,
    (__int64 *)&hObject);
  if ( hObject )
    WINRT_IMPL_CloseHandle(hObject);
  v4 = *a1;
  LODWORD(hObject) = 0;
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 64LL))(v4, v10);
  winrt::check_hresult(&v12, v5, (__int64)&hObject);
  v6 = v11;
  WaitForSingleObject_0(*(HANDLE *)v11, 0xFFFFFFFF);
  LODWORD(v6) = *(_DWORD *)(v6 + 8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return (unsigned int)v6;
}
