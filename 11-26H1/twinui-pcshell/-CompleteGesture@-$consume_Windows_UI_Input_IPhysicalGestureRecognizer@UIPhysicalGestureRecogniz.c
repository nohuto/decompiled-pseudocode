/*
 * XREFs of ?CompleteGesture@?$consume_Windows_UI_Input_IPhysicalGestureRecognizer@UIPhysicalGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180590A28
 * Callers:
 *     ?HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ @ 0x18059195C (-HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_UI_Input_IPhysicalGestureRecognizer<winrt::Windows::UI::Input::IPhysicalGestureRecognizer>::CompleteGesture(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 224LL))(v1);
  return winrt::check_hresult(&v6, v2, (__int64)&v4);
}
