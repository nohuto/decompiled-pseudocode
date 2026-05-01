/*
 * XREFs of ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802344F0
 * Callers:
 *     ?Complete@?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x18032A220 (-Complete@-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@UTileCollection@Star.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180358FEC (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?Complete@?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x1805E4F84 (-Complete@-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Fou.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$try_capture@UIContextCallback@impl@winrt@@A6AHAEBUguid@3@PEAPEAX@_E@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@A6AHAEBUguid@0@PEAPEAX@_E@Z @ 0x1801AE214 (--$try_capture@UIContextCallback@impl@winrt@@A6AHAEBUguid@3@PEAPEAX@_E@winrt@@YA-AU-$com_ptr@UIC.c)
 *     ?is_sta_thread@impl@winrt@@YA_NXZ @ 0x1801D6434 (-is_sta_thread@impl@winrt@@YA_NXZ.c)
 *     ?submit_threadpool_callback@impl@winrt@@YA@P6AXPEAX0@Z0@Z @ 0x1801E6D5C (-submit_threadpool_callback@impl@winrt@@YA@P6AXPEAX0@Z0@Z.c)
 *     ?resume_apartment_on_threadpool@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802AF694 (-resume_apartment_on_threadpool@impl@winrt@@YAXAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-.c)
 *     ?resume_apartment_sync@impl@winrt@@YA_NAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x180332F5C (-resume_apartment_sync@impl@winrt@@YA_NAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-$corouti.c)
 */

char __fastcall winrt::impl::resume_apartment(__int64 a1, void (*a2)(void *, void *), void *a3)
{
  __int64 v5; // rcx
  _QWORD *v7; // rax
  char v8; // si
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  LODWORD(v10) = 0;
  if ( !*(_QWORD *)a1
    || (v7 = ___try_capture_UIContextCallback_impl_winrt__A6AHAEBUguid_3_PEAPEAX__E_winrt__YA_AU__com_ptr_UIContextCallback_impl_winrt___0_A6AHAEBUguid_0_PEAPEAX__E_Z(&v10),
        v5 = 1LL,
        *(_QWORD *)a1 == *v7) )
  {
    v8 = 1;
    if ( (v5 & 1) == 0 )
      return 0;
  }
  else
  {
    v8 = 0;
  }
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  if ( v8 )
    return 0;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    winrt::impl::submit_threadpool_callback((winrt::impl *)winrt::impl::resume_background_callback, a2, a3);
    return 1;
  }
  if ( winrt::impl::is_sta_thread((winrt::impl *)v5) )
  {
    winrt::impl::resume_apartment_on_threadpool(a1, a2, a3);
    return 1;
  }
  return winrt::impl::resume_apartment_sync(a1, a2, a3);
}
