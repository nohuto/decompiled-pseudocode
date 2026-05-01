/*
 * XREFs of ?CreateCubicBezierEasingFunction@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUfloat2@Numerics@Foundation@Windows@3@0@Z @ 0x1804A4494
 * Callers:
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x1802184F4 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 *     ?CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MAEBUhstring@6@@Z @ 0x1804A4B54 (-CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA-AUScalarKeyFrameAnimation@Composition.c)
 *     ?CreateAnimation@TouchEdgeGripperWindow@@AEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MMUhstring@6@H@Z @ 0x180598D38 (-CreateAnimation@TouchEdgeGripperWindow@@AEAA-AUScalarKeyFrameAnimation@Composition@UI@Windows@w.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateCubicBezierEasingFunction(
        __int64 **a1,
        _QWORD *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 *v4; // rcx
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __int64 v7; // rax
  int v9; // eax
  int v11; // [rsp+38h] [rbp-20h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v4 = *a1;
  v13 = 0LL;
  v5 = (__m128)a4[1];
  v6 = (__m128)a3[1];
  v11 = 0;
  v7 = *v4;
  v12 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64, __int64 *))(v7 + 80))(
         v4,
         _mm_unpacklo_ps((__m128)*a3, v6).m128_u64[0],
         _mm_unpacklo_ps((__m128)*a4, v5).m128_u64[0],
         &v13);
  winrt::check_hresult((int *)&v14, v9, (__int64)&v11);
  *a2 = v13;
  return a2;
}
