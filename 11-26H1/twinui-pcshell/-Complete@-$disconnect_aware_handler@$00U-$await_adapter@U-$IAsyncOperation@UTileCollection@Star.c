/*
 * XREFs of ?Complete@?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x18032A220
 * Callers:
 *     ??1?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x180328E4C (--1-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@UTileCollection@StartScreen.c)
 *     ?Invoke@?$delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U?$disconnect_aware_handler@$00U?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@4@@impl@winrt@@UEAAHPEAXH@Z @ 0x18032CC80 (-Invoke@-$delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U-$disconnect_aware_ha.c)
 * Callees:
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802344F0 (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>::Complete(
        __int64 a1)
{
  char result; // al
  void (*v2)(void *, void *); // rbx

  result = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 24LL);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 24LL) = 0;
  if ( result )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  else
  {
    v2 = *(void (**)(void *, void *))(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0LL;
    result = winrt::impl::resume_apartment(a1, v2, (void *)(*(_QWORD *)(a1 + 16) + 20LL));
    if ( !result )
      return (*(__int64 (__fastcall **)(void (*)(void *, void *)))v2)(v2);
  }
  return result;
}
