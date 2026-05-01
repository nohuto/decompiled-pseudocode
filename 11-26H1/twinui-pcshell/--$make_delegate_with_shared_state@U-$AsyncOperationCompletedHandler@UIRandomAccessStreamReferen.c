/*
 * XREFs of ??$make_delegate_with_shared_state@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@YA?AU?$pair@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@PEAUshared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@std@@$$QEAUshared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@1@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@AEBU5671@0@Z@@Z @ 0x1801EF88C
 * Callers:
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x1802655E0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storag.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18028AE60 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??$?0U?$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@AEAPEAU?$delegate@U?$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@234@I@Z@@impl@3@$0A@@?$pair@U?$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@PEAUshared_type@?1???$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@234@I@Z@@std@@QEAA@$$QEAU?$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@AEAPEAU?$delegate@U?$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@234@I@Z@@impl@5@@Z @ 0x18028AE74 (--$-0U-$AsyncOperationCompletedHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Fou.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall ___make_delegate_with_shared_state_U__AsyncOperationCompletedHandler_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____when_any_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__U1234__4_YA_AU__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___234_AEBU6234_0_Z__impl_winrt__YA_AU__pair_U__AsyncOperationCompletedHandler_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__PEAUshared_type__1____when_any_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__U1234__4_YA_AU__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___234_AEBU6234_0_Z__std____QEAUshared_type__1____when_any_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__U1234__1_YA_AU__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_1_AEBU5671_0_Z__Z(
        char *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  char *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v8 = (char *)operator new(0x28uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v8 + 8));
  v4 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(v5 + 16) = v4;
  *(_DWORD *)(v5 + 24) = *((_DWORD *)a2 + 2);
  v6 = a2[2];
  a2[2] = 0LL;
  *(_QWORD *)(v5 + 32) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v8 = (char *)v5;
  *(_QWORD *)v5 = ___7__delegate_U__AsyncOperationCompletedHandler_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____when_any_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__U1234__4_YA_AU__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___234_AEBU6234_0_Z__impl_winrt__6B_;
  v9 = v5;
  ____0U__AsyncOperationCompletedHandler_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt__AEAPEAU__delegate_U__AsyncOperationCompletedHandler_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___234_I_Z__impl_3__0A____pair_U__AsyncOperationCompletedHandler_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt__PEAUshared_type__1____wait_for_completed_U__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___234_I_Z__std__QEAA___QEAU__AsyncOperationCompletedHandler_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt__AEAPEAU__delegate_U__AsyncOperationCompletedHandler_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_UWindowTabDataModel_Shell_UI_Internal_Windows_winrt___234_I_Z__impl_5__Z(
    a1,
    &v8,
    &v9);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
  return a1;
}
