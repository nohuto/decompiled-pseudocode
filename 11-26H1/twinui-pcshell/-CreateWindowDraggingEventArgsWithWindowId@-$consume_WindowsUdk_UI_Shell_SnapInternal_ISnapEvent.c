/*
 * XREFs of ?CreateWindowDraggingEventArgsWithWindowId@?$consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics@UISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUPoint@Foundation@Windows@3@AEBUWindowId@UI@63@@Z @ 0x180232304
 * Callers:
 *     ??R_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802322D8 (--R_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@She.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics<winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::CreateWindowDraggingEventArgsWithWindowId(
        __int64 **a1,
        _QWORD *a2,
        unsigned int *a3,
        _QWORD *a4)
{
  __int64 *v4; // rcx
  __m128 v5; // xmm1
  __int64 v6; // rax
  unsigned int v8; // eax
  int v10; // [rsp+38h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  v4 = *a1;
  v12 = 0LL;
  v5 = (__m128)a3[1];
  v10 = 0;
  v6 = *v4;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD, __int64 *))(v6 + 56))(
         v4,
         _mm_unpacklo_ps((__m128)*a3, v5).m128_u64[0],
         *a4,
         &v12);
  winrt::check_hresult(&v13, v8, &v10);
  *a2 = v12;
  return a2;
}
