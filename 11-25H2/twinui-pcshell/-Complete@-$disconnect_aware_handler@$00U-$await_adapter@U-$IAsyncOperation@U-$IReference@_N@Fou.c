/*
 * XREFs of ?Complete@?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x1805C0EDC
 * Callers:
 *     ??1?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x1805BF29C (--1-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@4@@impl@winrt@@UEAAHPEAXH@Z @ 0x1805C3120 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@U-$IReference@_N@Foundation@Windows@winrt@@.c)
 * Callees:
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802432E0 (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>>::Complete(
        __int64 a1)
{
  __int64 v2; // rcx
  char result; // al
  void (*v4)(void *, void *); // rbx

  v2 = *(_QWORD *)(a1 + 16);
  result = *(_BYTE *)(v2 + 24);
  *(_BYTE *)(v2 + 24) = 0;
  if ( result )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  else
  {
    v4 = *(void (**)(void *, void *))(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0LL;
    result = winrt::impl::resume_apartment(a1, v4, (void *)(*(_QWORD *)(a1 + 16) + 20LL));
    if ( !result )
      return (*(__int64 (__fastcall **)(void (*)(void *, void *)))v4)(v4);
  }
  return result;
}
