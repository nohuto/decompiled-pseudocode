/*
 * XREFs of ?GetStartWindowInfo@?$consume_WindowsUdk_UI_StartScreen_Implementation_IStartControllerExtensionStatics3@UIStartControllerExtensionStatics3@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUSize@Foundation@Windows@3@@Z @ 0x18021E5D0
 * Callers:
 *     ??R_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18021E5A8 (--R_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@She.c)
 *     ??$call@AEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@?$factory_cache_entry@USnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@UISnapEventFactoryStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@Z @ 0x18029BC18 (--$call@AEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@-$factory_cache_entry@USnapEventFactory@.c)
 *     ?GetSearchSize@@YA?AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z @ 0x1803CF59C (-GetSearchSize@@YA-AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IStartControllerExtensionStatics3<winrt::WindowsUdk::UI::StartScreen::Implementation::IStartControllerExtensionStatics3>::GetStartWindowInfo(
        __int64 **a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 *v3; // rcx
  __m128 v4; // xmm1
  __int64 v5; // rax
  unsigned int v7; // eax
  int v9; // [rsp+28h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *a1;
  v11 = 0LL;
  v4 = (__m128)a3[1];
  v9 = 0;
  v5 = *v3;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64 *))(v5 + 48))(
         v3,
         _mm_unpacklo_ps((__m128)*a3, v4).m128_u64[0],
         &v11);
  winrt::check_hresult(&v12, v7, &v9);
  *a2 = v11;
  return a2;
}
